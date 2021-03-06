/** \brief pedimos un dato tipo int
 *
 * \param char[] mensaje que muestra la funcion
 * \return int entero que escanea la funcion
 *
 */
int pedirEntero(char[]);
/** \brief pedimos un dato tipo float
 *
 * \param char[] mensaje que muestra la funcion
 * \return float flotante que escanea la funcion
 *
 */
float pedirFlotante(char[]);
/** \brief pedimos un array de caracteres
 *
 * \param char[] mensaje que muestra la funcion
 * \param char[] cadena donde se guarda los datos
 * \return void
 *
 */
void pedirCadena(char[],char[]);
/** \brief pedimos un dato tipo char
 *
 * \param char[] mensaje que muestra la funcion
 * \return char cadena que devuelve la funcion
 *
 */
char pedirCaracter(char[]);

char getNumeroAleatorio(int, int, int);

int esNumerico(char str[]) ;
int esSoloLetras(char str[]);
void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);

