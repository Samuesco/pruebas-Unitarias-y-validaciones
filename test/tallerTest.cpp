#include "gtest/gtest.h"
#include "../srctaller/taller.h"

// Test para agregar un elemento al vector
TEST(TallerTest, AgregarElementoVector){
    taller objTaller;
    objTaller.agregarelementovector(5);
    EXPECT_EQ(objTaller.vectornum[0], 5);
}

// Test para verificar si un elemento existe en el vector
TEST(TallerTest, ExisteElementoVector){
    taller objTaller;
    objTaller.agregarelementovector(5);
    EXPECT_EQ(objTaller.existelemento(5), 1);
}

// Test para eliminar un elemento del vector
TEST(TallerTest, EliminarElementoVector){
    taller objTaller;
    objTaller.agregarelementovector(5);
    objTaller.eliminarElementovector(5);
    EXPECT_EQ(objTaller.vectornum.empty(), true);
}

// Test para realizar la suma y agregar al vector
TEST(TallerTest, SumaAgregarVector){
    taller objTaller;
    objTaller.agregarelementovector(2);
    objTaller.agregarelementovector(3);
    objTaller.sumaryagregar(2, 3);
    EXPECT_EQ(objTaller.vectornum[2], 5);
}

// Test para realizar la multiplicación
TEST(TallerTest, Producto){
    taller objTaller;
    EXPECT_EQ(objTaller.producto(2, 3), 6);
}

// Test para realizar la resta
TEST(TallerTest, RestaNegativa){
    taller objTaller;
    EXPECT_EQ(objTaller.restaNegativa(3, 2), 1);
}

// Test para contar las vocales en una cadena
TEST(TallerTest, NumeroVocales){
    taller objTaller;
    EXPECT_EQ(objTaller.numerovocales("Hola mundo"), 4);
}

//Prueba para validar la excepción "range_error" en la función sumaryagregar() cuando los valores de entrada son inválidos
TEST(tallerTest, sumaryagregar_invalid_input) {
  taller t;
  t.agregarelementovector(2);
  t.agregarelementovector(3);

  EXPECT_THROW(t.sumaryagregar(5, 6), range_error);
}

//Prueba para validar la excepción "range_error" en la función eliminarElementovector() cuando se intenta acceder a un índice fuera del rango del vector
TEST(tallerTest, eliminarElementovector_invalid_index) {
  taller t;
  t.agregarelementovector(2);
  t.agregarelementovector(3);

  EXPECT_THROW(t.eliminarElementovector(4), range_error);
}

//Prueba para validar el correcto funcionamiento de la función existelemento() cuando el elemento buscado se encuentra en el vector
TEST(tallerTest, existelemento_element_found) {
  taller t;
  t.agregarelementovector(2);
  t.agregarelementovector(3);

  EXPECT_EQ(t.existelemento(3), 1);
}

//Prueba para validar el correcto funcionamiento de la función existelemento() cuando el elemento buscado no se encuentra en el vector
TEST(tallerTest, existelemento_element_not_found) {
  taller t;
  t.agregarelementovector(2);
  t.agregarelementovector(3);

  EXPECT_EQ(t.existelemento(4), 0);
}

//Prueba para validar la excepción "domain_error" en la función numerovocales() cuando la respuesta supera el límite de elementos dentro del string base
TEST(tallerTest, numerovocales_invalid_output) {
  taller t;
  
  string cadena = "abcdefghijklmnñopqrstuvwxyz";
  EXPECT_THROW(t.numerovocales(cadena), domain_error);
}

//Prueba para validar el correcto funcionamiento de la función numerovocales() cuando se cuentan correctamente las vocales en una cadena
TEST(tallerTest, numerovocales_valid_input) {
  taller t;
  
  string cadena = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";
  EXPECT_EQ(t.numerovocales(cadena), 16);
}
