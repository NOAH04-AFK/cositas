#define MAXPRODUCTOS 5

struct Cliente
{
    char nombre[50];
    int cedula;
};

struct Producto
{
    char nombre[50];
    float precio;
};
struct Venta
{
    struct Cliente cliente;
    int numProductos;
    struct Producto mercancia[MAXPRODUCTOS];
    float totalVenta;
};


