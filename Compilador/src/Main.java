import parser.*;
import java.io.*;

public class Main {
    public static void main(String[] args) {
        // 1. Verifica se o usuário passou o arquivo .c por argumento
        if (args.length < 1) {
            System.out.println("Uso: java -cp bin Main <caminho_do_arquivo.c>");
            return;
        }

        String nomeArquivo = args[0];

        try {
            // 2. Abre o arquivo de entrada
            InputStream input = new FileInputStream(nomeArquivo);
            System.out.println("Analisando arquivo: " + nomeArquivo);
            System.out.println("-----------------------------------");

            // 3. Instancia o Parser (Como usamos static = false, precisamos do 'new')
            MeuParser parser = new MeuParser(input);

            // 4. Chama a regra de teste do léxico que definimos no .jj
            parser.principal();

            System.out.println("-----------------------------------");
            System.out.println("Analise lexica concluida com sucesso!");

        } catch (FileNotFoundException e) {
            System.err.println("Erro: Arquivo '" + nomeArquivo + "' nao encontrado.");
        } catch (ParseException e) {
            System.err.println("Erro Sintatico: " + e.getMessage());
        } catch (TokenMgrError e) {
            System.err.println("Erro Lexico: " + e.getMessage());
        } catch (Exception e) {
            System.err.println("Erro inesperado: " + e.getMessage());
            e.printStackTrace();
        }
    }
}