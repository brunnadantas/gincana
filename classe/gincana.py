#Criação da classe candidato
class Candidato:
    def __init__(self, nome):
        self.nome = nome
        self.votos = 0

    def adicionar_votos(self, qtd):
        self.votos += qtd


class Categoria:
    def __init__(self, nome, candidatos):
        self.nome = nome
        self.candidatos = candidatos

    def mostrar_candidatos(self):
        print(f"\n--- Candidatos a {self.nome} ---")
        for i, cand in enumerate(self.candidatos, start=1):
            print(f"[{i}] {cand.nome} ({cand.votos} votos)")

#Sistema de quantidade de votos
    def votar(self):
        self.mostrar_candidatos()
        op = int(input("Digite o número do candidato escolhido: "))

        if op < 1 or op > len(self.candidatos):
            print("Opção inválida!")
            return

        qtd = int(input("Quantas cartelas deseja comprar? "))
        self.candidatos[op - 1].adicionar_votos(qtd)
        print("Voto registrado!\n")

#Aqui ele compara os votos dos candidatos e retorna o maior
    def vencedor(self):
        maior = max(self.candidatos, key=lambda c: c.votos)
        return maior

#Separação entre candidatos meninos e meninas
class Gincana:
    def __init__(self):
        self.xerife = Categoria("XERIFE (meninos)", [
            Candidato("João"),
            Candidato("Pedro"),
            Candidato("Leandro")
        ])

        self.sinhazinha = Categoria("SINHAZINHA (meninas)", [
            Candidato("Maria"),
            Candidato("Júlia"),
            Candidato("Bruna")
        ])

    def explicar(self):
        print("\n\nEXPLICAÇÃO DA GINCANA\n")
        print("E aí, pessoal! Preparem os chapéus e os vestidos de chita! 🤠💃")
        print("A nossa tradicional Gincana Junina de Xerife e Sinhazinha está de volta!")
        print("Cada cartela comprada soma um ponto para o candidato escolhido.")
        print("Quem vender mais cartelas será o grande vencedor!\n\n")

    def comprar_cartelas(self):
        print("\nCategorias para votar:\n")
        print("[1] Xerife (meninos)")
        print("[2] Sinhazinha (meninas)")
        categoria = int(input("Escolha a categoria: "))

        if categoria == 1:
            self.xerife.votar()
        elif categoria == 2:
            self.sinhazinha.votar()
        else:
            print("Categoria inválida!")

    def mostrar_resultados(self):
        print("\n----- RESULTADOS -----\n")

        print("\n-- XERIFE --")
        for c in self.xerife.candidatos:
            print(f"{c.nome}: {c.votos} votos")
        vencedor_x = self.xerife.vencedor()
        print(f"👉 Novo Xerife: {vencedor_x.nome} com {vencedor_x.votos} votos!")

        print("\n-- SINHAZINHA --")
        for c in self.sinhazinha.candidatos:
            print(f"{c.nome}: {c.votos} votos")
        vencedor_s = self.sinhazinha.vencedor()
        print(f"🌸 Nova Sinhazinha: {vencedor_s.nome} com {vencedor_s.votos} votos!\n")

    def menu(self):
        while True:
            print("\n----- MENU -----")
            print("[1] Explicação da gincana")
            print("[2] Comprar cartela")
            print("[3] Ver ganhadores")
            print("[0] Sair")
            op = int(input("Escolha uma opção: "))

            if op == 1:
                self.explicar()
            elif op == 2:
                self.comprar_cartelas()
            elif op == 3:
                self.mostrar_resultados()
            elif op == 0:
                print("Saindo...")
                break
            else:
                print("Opção inválida!\n")

#Inicia o sistema
g = Gincana()
g.menu()