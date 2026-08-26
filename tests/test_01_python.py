import unittest

from sensor_nivel import SensorNivel


class TestEstadoOperacional(unittest.TestCase):
    def test_interface_e_transicoes_de_ativacao(self) -> None:
        sensor = SensorNivel("LT-101", 42.5, "%")

        self.assertEqual(sensor.tag, "LT-101")
        self.assertEqual(sensor.valor, 42.5)
        self.assertEqual(sensor.unidade, "%")
        self.assertFalse(sensor.ativo)

        sensor.ativar()
        self.assertTrue(sensor.ativo)

        sensor.desativar()
        self.assertFalse(sensor.ativo)

        with self.assertRaises(AttributeError):
            sensor.ativo = True


if __name__ == "__main__":
    unittest.main()
