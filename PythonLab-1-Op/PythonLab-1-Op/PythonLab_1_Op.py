import cmath # Подключаем маематический модуль
print("Enter side1");#  Вивод Сообщения пользователю
side1 = float( input());# Сохраняем введ'нное пользователем переменню и конвертируем в тип Float
print("Enter side2");
side2 = float( input());
print (" Enter inj");
inj = float( input());
side3 =cmath.sqrt(side1*side1+side2*side2-2*side1*side2* cmath.cos(inj));# Расчитываем по формуле
print("Side 3 = ",  side3);# Выводит результат пользователю 
