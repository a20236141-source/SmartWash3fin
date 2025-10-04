#pragma once

namespace SmartWash3Controller {

    using namespace System::IO;
    using namespace System::Collections::Generic;
    using namespace SmartWash3Model;//del modelo
    using namespace System;

	public ref class SuscriptionController {

    public:
        // Constructor
        SuscriptionController();

        // Métodos de consulta
        List<Subscription^>^ listarTodo();
        Subscription^ buscarId(int id);
        List<Subscription^>^ buscarPorUsuario(String^ userID);
        List<Subscription^>^ buscarPorEstado(String^ state);

        // Métodos CRUD
        void agregar(int id, String^ userID, String^ planID, DateTime startDate, DateTime endDate, bool autoRenew, String^ state);
        void escribirArchivo(List<Subscription^>^ lista);
        void actualizar(int id, String^ userID, String^ planID, DateTime startDate, DateTime endDate, bool autoRenew, String^ state);
        void eliminar(int id);

	};
}