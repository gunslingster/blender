int _WIDGET_nverts_cube = 8;
int _WIDGET_ntris_cube = 12;

float _WIDGET_verts_cube[][3] = {
    {1.000000, 1.000000, -1.000000},
    {1.000000, -1.000000, -1.000000},
    {-1.000000, -1.000000, -1.000000},
    {-1.000000, 1.000000, -1.000000},
    {1.000000, 1.000000, 1.000000},
    {0.999999, -1.000001, 1.000000},
    {-1.000000, -1.000000, 1.000000},
    {-1.000000, 1.000000, 1.000000},
};

float _WIDGET_normals_cube[][3] = {
    {0.577349, 0.577349, -0.577349},
    {0.577349, -0.577349, -0.577349},
    {-0.577349, -0.577349, -0.577349},
    {-0.577349, 0.577349, -0.577349},
    {0.577349, 0.577349, 0.577349},
    {0.577349, -0.577349, 0.577349},
    {-0.577349, -0.577349, 0.577349},
    {-0.577349, 0.577349, 0.577349},
};

unsigned short _WIDGET_indices_cube[] = {
    1, 2, 3,
    7, 6, 5,
    4, 5, 1,
    5, 6, 2,
    2, 6, 7,
    0, 3, 7,
    0, 1, 3,
    4, 7, 5,
    0, 4, 1,
    1, 5, 2,
    3, 2, 7,
    4, 0, 7,
};
