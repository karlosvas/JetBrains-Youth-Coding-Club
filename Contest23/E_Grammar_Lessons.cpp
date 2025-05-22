#include <bits/stdc++.h>
using namespace std;

// Sufijos para cada tipo de palabra y género
const string M_ADJ = "lios";
const string F_ADJ = "liala";
const string M_NOUN = "etr";
const string F_NOUN = "etra";
const string M_VERB = "initis";
const string F_VERB = "inites";

// Verificar si una palabra termina con un sufijo específico
bool endsWith(const string& word, const string& suffix) {
    if (word.size() < suffix.size()) return false;
    return word.substr(word.size() - suffix.size()) == suffix;
}

int main() {
    string word;
    vector<string> words;

    // Leer todas las palabras
    while (cin >> word)
        words.push_back(word);

    if (words.empty()) {
        cout << "NO\n";
        return 0;
    }

    // Si hay una sola palabra, verificar si pertenece al lenguaje
    if (words.size() == 1) {
        string w = words[0];
        if (endsWith(w, M_ADJ) || endsWith(w, F_ADJ) ||
            endsWith(w, M_NOUN) || endsWith(w, F_NOUN) ||
            endsWith(w, M_VERB) || endsWith(w, F_VERB)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        return 0;
    }

    // Verificar si forman una declaración válida
    char gender = ' ';  // 'm' para masculino, 'f' para femenino
    int state = 0;      // 0: esperando adjetivos, 1: esperando sustantivo, 2: esperando verbos

    for (const string& w : words) {
        // Determinar tipo y género de la palabra
        bool isMAdj = endsWith(w, M_ADJ);
        bool isFAdj = endsWith(w, F_ADJ);
        bool isMNoun = endsWith(w, M_NOUN);
        bool isFNoun = endsWith(w, F_NOUN);
        bool isMVerb = endsWith(w, M_VERB);
        bool isFVerb = endsWith(w, F_VERB);

        // Verificar si la palabra pertenece al lenguaje
        if (!isMAdj && !isFAdj && !isMNoun && !isFNoun && !isMVerb && !isFVerb) {
            cout << "NO\n";
            return 0;
        }

        // Determinar el género si es la primera palabra
        if (gender == ' ') {
            if (isMAdj || isMNoun || isMVerb)
                gender = 'm';
            else
                gender = 'f';
        }

        // Verificar consistencia de género
        if ((gender == 'm' && (isFAdj || isFNoun || isFVerb)) ||
            (gender == 'f' && (isMAdj || isMNoun || isMVerb))) {
            cout << "NO\n";
            return 0;
        }

        // Verificar orden correcto de palabras
        if (state == 0) {  // Esperando adjetivos
            if ((gender == 'm' && isMNoun) || (gender == 'f' && isFNoun)) {
                state = 1;  // Avanzar a estado "sustantivo encontrado"
            } else if ((gender == 'm' && isMVerb) || (gender == 'f' && isFVerb)) {
                cout << "NO\n";  // Verbo antes del sustantivo
                return 0;
            }
        } else if (state == 1) {  // Después del sustantivo
            if ((gender == 'm' && (isMAdj || isMNoun)) ||
                (gender == 'f' && (isFAdj || isFNoun))) {
                cout << "NO\n";  // Adjetivo o sustantivo después del sustantivo
                return 0;
            }
            state = 2;            // Avanzar a estado "esperando verbos"
        } else if (state == 2) {  // Esperando verbos
            if (!((gender == 'm' && isMVerb) || (gender == 'f' && isFVerb))) {
                cout << "NO\n";  // No es un verbo en estado esperando verbos
                return 0;
            }
        }
    }

    // Debe haber al menos un sustantivo
    if (state < 1) {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    return 0;
}