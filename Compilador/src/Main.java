import parser.MeuParser;
import java.io.FileInputStream;

public class Main {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("Uso: java -cp bin Main <caminho_do_arquivo.c>");
            return;
        }

        try {
            System.out.println("Analisando arquivo: " + args[0]);
            System.out.println("-----------------------------------");
            
            MeuParser parser = new MeuParser(new FileInputStream(args[0]));
            
            parser.Programa();
            
            System.out.println("-----------------------------------");
            System.out.println("Analise Sintatica e Lexica concluidas com sucesso! A estrutura do codigo C esta correta.");
            
        } catch (parser.ParseException e) {
            System.out.println("\nErro de Sintaxe (O codigo C tem um erro estrutural):");
            System.out.println(e.getMessage());
        } catch (parser.TokenMgrError e) {
            System.out.println("\nErro Lexico (Caractere invalido encontrado):");
            System.out.println(e.getMessage());
        } catch (Exception e) {
            System.out.println("\nErro ao ler o arquivo: " + e.getMessage());
        }
    }
}