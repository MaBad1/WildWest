#include <iostream>
#include <fstream> //on include la biblioth�que des "flux par fichiers".
#include <map>

using namespace std;

int main()
{
    ifstream chant("WiWiWe.txt"); //On indique que le fichier texte 'WiWiWE' sera notre flux d'entr�e.
    string m; //On setup une variable string qui permettra de compter le nombre d'occurences.
    map<string, int> map; //On cr�e une liste qui associera chaque mot � un entier.

    while (chant >> m) //Tant que le programme n'a pas fini de lire le fichier texte, on incr�mente la valeur des entiers correspondants aux mots.
        ++map[m];

    typedef std::map<std::string, int>::const_iterator iter; //On associe la liste � une it�ration gr�ce au typedef
    for (iter it = map.begin(); it != map.end(); ++it) //On proc�de � la boucle d'it�ration sur la liste pour afficher le nombre d'occurences de chaque string
        cout << "le mot " << it->first << " est repete " << it->second << " fois." << endl;

    return 0;
}