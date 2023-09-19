#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm> // para a função replace
#include <map>

std::string binario_para_string(std::string entrada){
    std::string saida;
    char valor_string=0;int contador=0;
    int tamanho_inicial=entrada.size();
    
    while (tamanho_inicial>0){
        if(entrada[contador]=='0'){}else{valor_string=valor_string+128;}contador++;tamanho_inicial--;
        if(entrada[contador]=='0'){}else{valor_string=valor_string+64;}contador++;tamanho_inicial--;
        if(entrada[contador]=='0'){}else{valor_string=valor_string+32;}contador++;tamanho_inicial--;
        if(entrada[contador]=='0'){}else{valor_string=valor_string+16;}contador++;tamanho_inicial--;
        if(entrada[contador]=='0'){}else{valor_string=valor_string+8;}contador++;tamanho_inicial--;
        if(entrada[contador]=='0'){}else{valor_string=valor_string+4;}contador++;tamanho_inicial--;
        if(entrada[contador]=='0'){}else{valor_string=valor_string+2;}contador++;tamanho_inicial--;
        if(entrada[contador]=='0'){}else{valor_string=valor_string+1;}contador++;tamanho_inicial--;
        saida=saida+valor_string;//std::cout<<int(valor_string)<<std::endl;
        valor_string=0;
    }
    
    return saida;
}

std::string base64_decode(std::string entrada){

   

    static std::string base64_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=";
    static std::map<char,std::string> char_para_bin;
    std::string entrada_bs64_decode="";std::string saida=""; 
    int tamanho_da_entrada=0;tamanho_da_entrada=entrada.size();int contador=0;
    if (char_para_bin.empty()) {
    char_para_bin['A'] = "000000";
    char_para_bin['B'] = "000001";
    char_para_bin['C'] = "000010";
    char_para_bin['D'] = "000011";
    char_para_bin['E'] = "000100";
    char_para_bin['F'] = "000101";
    char_para_bin['G'] = "000110";
    char_para_bin['H'] = "000111";
    char_para_bin['I'] = "001000";
    char_para_bin['J'] = "001001";
    char_para_bin['K'] = "001010";
    char_para_bin['L'] = "001011";
    char_para_bin['M'] = "001100";
    char_para_bin['N'] = "001101";
    char_para_bin['O'] = "001110";
    char_para_bin['P'] = "001111";
    char_para_bin['Q'] = "010000";
    char_para_bin['R'] = "010001";
    char_para_bin['S'] = "010010";
    char_para_bin['T'] = "010011";
    char_para_bin['U'] = "010100";
    char_para_bin['V'] = "010101";
    char_para_bin['W'] = "010110";
    char_para_bin['X'] = "010111";
    char_para_bin['Y'] = "011000";
    char_para_bin['Z'] = "011001";
    char_para_bin['a'] = "011010";
    char_para_bin['b'] = "011011";
    char_para_bin['c'] = "011100";
    char_para_bin['d'] = "011101";
    char_para_bin['e'] = "011110";
    char_para_bin['f'] = "011111";
    char_para_bin['g'] = "100000";
    char_para_bin['h'] = "100001";
    char_para_bin['i'] = "100010";
    char_para_bin['j'] = "100011";
    char_para_bin['k'] = "100100";
    char_para_bin['l'] = "100101";
    char_para_bin['m'] = "100110";
    char_para_bin['n'] = "100111";
    char_para_bin['o'] = "101000";
    char_para_bin['p'] = "101001";
    char_para_bin['q'] = "101010";
    char_para_bin['r'] = "101011";
    char_para_bin['s'] = "101100";
    char_para_bin['t'] = "101101";
    char_para_bin['u'] = "101110";
    char_para_bin['v'] = "101111";
    char_para_bin['w'] = "110000";
    char_para_bin['x'] = "110001";
    char_para_bin['y'] = "110010";
    char_para_bin['z'] = "110011";
    char_para_bin['0'] = "110100";
    char_para_bin['1'] = "110101";
    char_para_bin['2'] = "110110";
    char_para_bin['3'] = "110111";
    char_para_bin['4'] = "111000";
    char_para_bin['5'] = "111001";
    char_para_bin['6'] = "111010";
    char_para_bin['7'] = "111011";
    char_para_bin['8'] = "111100";
    char_para_bin['9'] = "111101";
    char_para_bin['+'] = "111110";
    char_para_bin['/'] = "111111";
    char_para_bin['='] = "00";

 
 }

    while(tamanho_da_entrada>0){

        for(int i=0;i!=65;i++){
        if(entrada[contador]==base64_chars[i]){
            entrada_bs64_decode=entrada_bs64_decode+char_para_bin[base64_chars[i]];
        }
        }

        tamanho_da_entrada--;contador++;
        
    }
    
    //std::cout<<entrada_bs64_decode<<std::endl;
    //faz a conversao de binario para string
    saida=binario_para_string(entrada_bs64_decode);

return saida;

}
