#include <iostream>
#include <fstream> //on include la bibliothèque des "flux par fichiers".
#include <map>

using namespace std;

int main()
{
    ifstream chant("WiWiWe.txt"); //On indique que le fichier texte 'WiWiWE' sera notre flux d'entrée.
    string m; //On setup une variable string qui permettra de compter le nombre d'occurences.
    map<string, int> map; //On crée une liste qui associera chaque mot à un entier.

    while (chant >> m) //Tant que le programme n'a pas fini de lire le fichier texte, on incrémente la valeur des entiers correspondants aux mots.
        ++map[m];

    typedef std::map<std::string, int>::const_iterator iter; //On associe la liste à une itération grâce au typedef
    for (iter it = map.begin(); it != map.end(); ++it) //On procède à la boucle d'itération sur la liste pour afficher le nombre d'occurences de chaque string
        cout << "le mot " << it->first << " est repete " << it->second << " fois." << endl;

    return 0;
}