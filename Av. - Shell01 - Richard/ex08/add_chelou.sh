conversao_num1=$(echo $FT_NBR1 | tr \'\\\\\"\?\! '01234')
conversao_num2=$(echo $FT_NBR2 | tr mrdoc '01234')
calculo_binario=$(echo "obase=13; ibase=5; $conversao_num1 + $conversao_num2" | bc)

echo $calculo_binario | tr '0123456789ABC' 'gtaio luSnemf' 

