<h2>1. Introdução</h2>
<p align="justify">
A deficiência visual, em qualquer grau, compromete a capacidade de uma pessoa de se orientar a si própria e
mover-se no espaço de forma segura e independente. Em 2010,dados do IBGE (Instituto Brasileiro de Geografia e Estatística) a deficiência visual estava presente em 3,4% da população brasileira. 
  Portanto, a Walking Tech visa melhorar a mobilização diária de pessoas com deficiência visual.
</p>

Objetivo Geral
Objetivos Específicos
<h2>2. Trabalhos Relacionados</h2>
<p align="justify">
Nesta secção iremos apresentar algumas obras relacionadas.
</p>
<p align="justify">
Em artigo publicado em 2018 na IEEE Canadian Conference on Electrical & Computer Engineering (CCECE), os autores: João Castillo Guerrero, Cristhian Quezada-V e Diego Chacon-Troya, ambos da universidade Politecnica Salesiana, Cuenca, Equador, propuseram a implementação de um sistema eletrônico para a detecção de diferentes tipos de obstáculos com uma begala, concentrando-se na melhoria da mobilização diária das pessoas com deficiência visual. O sistema consiste num sensor ultrassônico implementado num motor, para a detecção de possíveis obstáculos, com um alcance de trabalho entre 0,5 m e 5 m e entre 90° à esquerda e 90° à direita na detecção, também será implementado um módulo de som e uma campainha no punho da cana, a fim de alertar eficazmente a pessoa com deficiência sobre possíveis obstáculos que possam ocorrer à sua volta. Foi também concebida uma aplicação Android; a aplicação móvel comunica com a bengala através de um módulo GPS e GSM, para ajudar a localizar a pessoa com deficiência visual onde ela se encontra.
</p>


<p align="justify">
  Os pesquisadores da Universidade de Stanford criaram uma bengala robótica acessível que guia os deficientes visuais. A bengala faz uso de ferramentas de veículos autónomos para identificar obstáculos. A bengala faz uso de um sensor LIDAR. O LIDAR é a tecnologia baseada em laser usada em alguns carros e aeronaves autônomos que mede a distância até os obstáculos próximos.
  Os pesquisadores esperam que o seu dispositivo seja uma opção acessível e útil para mais de 250 milhões de pessoas com deficiência visual em todo o mundo.
</p>

<p align="justify">
Os pesquisadores: Aline Darc Piculo dos Santos, Fausto Orsi Médola, Milton José Cinelli, Alejandro Rafael García Ramirez e Frode Eika Sandnes publicaram um estudo comparando se as bengalas brancas electrónicas são melhores do que as tradicionais.
</p>

## 3. Solução Proposta

### 3.1. Arquitetura da Solução
<p align="justify">
A solução é composta por três módulos: o celular, o módulo de hardware (ESP32-WROOM-32), e o sensor de distância, ilustrado na Figura 01. 
O sensor capta um determinado objeto a uma distância predefinida, e esta informação é passada para o hardware (ESP32-WROOM-32), que notifica o celular de que há um objeto nas proximidades.Com isso, o mesmo emite vibrações indicado que há um objeto próximo ao usuário.
 </p>
 
<p align="center">
<img src="imgs/mdls_comp.png" />
</p>

### 3.2. Materiais e Métodos
### 3.2.2. O Módulo de Hardware

### 4. Conclusões e Trabalhos Futuros

<h2>Referências</h2>
<p align="justify">
[1] GIL, M. MINISTÉRIO DA EDUCAÇÃO SECRETARIA DE EDUCAÇÃO A DISTÂNCIA C A D E R N O S D A Deficiência Visual. [s.l: s.n.]. Disponível em: http://portal.mec.gov.br/seed/arquivos/pdf/deficienciavisual.pdf. Acessado em: 23/11/2022.
</p>
  
<p align="justify">
  [2] Jorge, Ester Rodrigues da Costa; Villarouco, Vilma; Santiago, Zilsa; "Ferramentas para a mobilidade de pessoas com deficiência visual: Revisão           Sistemática de Literatura ", p. 848-859 . In: Anais do VIII Encontro Nacional de Ergonomia do Ambiente Construído e do IX Seminário Brasileiro de         Acessibilidade Integral. São Paulo: Blucher, 2020.
 </p>
 <p align="justify">
  [3] J. Castillo Guerrero, C. Quezada-V and D. Chacon-Troya, "Design and Implementation of an Intelligent Cane, with Proximity Sensors, GPS Localization and GSM Feedback," 2018 IEEE Canadian Conference on Electrical & Computer Engineering (CCECE), 2018, pp. 1-4, doi: 10.1109/CCECE.2018.8447741.
 </p>
 
 <p align="justify">
  [4] Stanford Researchers Build $400 Self-Navigating Smart Cane. Disponível em: https://hai.stanford.edu/news/stanford-researchers-build-400-self-navigating-smart-cane. Acesso em: 10 nov. 2022. 
  </p>
  
 <p align="justify">
 [5] dos Santos, A.D.P., Medola, F.O., Cinelli, M.J. et al. Are electronic white canes better than traditional canes? A comparative study with blind and blindfolded participants. Univ Access Inf Soc 20, 93–103 (2021). https://doi.org/10.1007/s10209-020-00712-z
 </p>
 


