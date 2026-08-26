class SensorNivel:
    def __init__(self, tag: str, valor: float, unidade: str = ""):
        self.tag = tag
        self.valor = valor
        self.unidade = unidade

    def resumo(self) -> str:
        sufixo = f" {self.unidade}" if self.unidade else ""
        return f"{self.tag}: {self.valor:g}{sufixo}"
