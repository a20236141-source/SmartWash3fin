#include "SuscriptionController.h"

using namespace SmartWash3Controller;
using namespace System::IO;

// Constructor
SuscriptionController::SuscriptionController() {
}

// Lista todas las suscripciones guardadas
List<Subscription^>^ SuscriptionController::listarTodo() {
    List<Subscription^>^ listaSuscripciones = gcnew List<Subscription^>();

    // Si el archivo no existe, se crea vacío
    if (!File::Exists("Suscriptions.txt")) {
        File::WriteAllText("Suscriptions.txt", "");
    }

    // Leer todas las líneas del archivo
    array<String^>^ lineas = File::ReadAllLines("Suscriptions.txt");
    String^ separador = ";";

    for each (String ^ linea in lineas) {
        if (String::IsNullOrWhiteSpace(linea)) continue;

        array<String^>^ campos = linea->Split(separador->ToCharArray());

        int id = Convert::ToInt32(campos[0]);
        String^ userID = campos[1];
        String^ planID = campos[2];
        DateTime startDate = Convert::ToDateTime(campos[3]);
        DateTime endDate = Convert::ToDateTime(campos[4]);
        bool autoRenew = Convert::ToBoolean(campos[5]);
        String^ state = campos[6];

        Subscription^ s = gcnew Subscription(id, userID, planID, startDate, endDate, autoRenew, state);
        listaSuscripciones->Add(s);
    }

    return listaSuscripciones;
}

// Buscar suscripción por ID
Subscription^ SuscriptionController::buscarId(int id) {
    List<Subscription^>^ lista = listarTodo();

    for each (Subscription ^ s in lista) {
        if (s->getId() == id)
            return s;
    }
    return nullptr;
}

// Buscar suscripciones por userID
List<Subscription^>^ SuscriptionController::buscarPorUsuario(String^ userID) {
    List<Subscription^>^ lista = listarTodo();
    List<Subscription^>^ resultado = gcnew List<Subscription^>();

    for each (Subscription ^ s in lista) {
        if (s->getUserID()->Equals(userID))
            resultado->Add(s);
    }
    return resultado;
}

// Buscar suscripciones por estado
List<Subscription^>^ SuscriptionController::buscarPorEstado(String^ state) {
    List<Subscription^>^ lista = listarTodo();
    List<Subscription^>^ resultado = gcnew List<Subscription^>();

    for each (Subscription ^ s in lista) {
        if (s->getState()->Equals(state))
            resultado->Add(s);
    }
    return resultado;
}

// Agregar una nueva suscripción
void SuscriptionController::agregar(int id, String^ userID, String^ planID,
    DateTime startDate, DateTime endDate, bool autoRenew, String^ state) {
    Subscription^ nueva = gcnew Subscription(id, userID, planID, startDate, endDate, autoRenew, state);

    List<Subscription^>^ lista = listarTodo();
    lista->Add(nueva);

    escribirArchivo(lista);
}

// Guardar toda la lista al archivo
void SuscriptionController::escribirArchivo(List<Subscription^>^ lista) {
    array<String^>^ lineasArchivo = gcnew array<String^>(lista->Count);

    for (int i = 0; i < lista->Count; i++) {
        Subscription^ s = lista[i];

        lineasArchivo[i] = String::Format("{0};{1};{2};{3};{4};{5};{6}",
            s->getId(),
            s->getUserID(),
            s->getPlanID(),
            s->getStartDate().ToString(),
            s->getEndDate().ToString(),
            s->getAutoRenew().ToString(),
            s->getState());
    }

    File::WriteAllLines("Suscriptions.txt", lineasArchivo);
}

// Actualizar una suscripción existente
void SuscriptionController::actualizar(int id, String^ userID, 
    String^ planID, DateTime startDate, DateTime endDate, bool autoRenew, String^ state) {
    List<Subscription^>^ lista = listarTodo();

    for each (Subscription ^ s in lista) {
        if (s->getId() == id) {
            s->setUserID(userID);
            s->setPlanID(planID);
            s->setStartDate(startDate);
            s->setEndDate(endDate);
            s->setAutoRenew(autoRenew);
            s->setState(state);
            break;
        }
    }

    escribirArchivo(lista);
}

// Eliminar una suscripción por ID
void SuscriptionController::eliminar(int id) {
    List<Subscription^>^ lista = listarTodo();

    for (int i = 0; i < lista->Count; i++) {
        if (lista[i]->getId() == id) {
            lista->RemoveAt(i);
            break;
        }
    }

    escribirArchivo(lista);
}
