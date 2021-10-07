--[[ 

Lua Basic Arithmetic Program
Hacktoberfest 2021's First Lua Script
Telegram: t.me/phaticusthiccy

--]]

-- Languge Selector
local CHOOSE = "Please Select Your Language"
local TR = "[tr] Türkçe"
local EN = "[en] English"
local ID = "[id] Indonesian"

-- Argument
OPT="No Such Operator"
DEF="Input Language Not Avaliable!"
CHEN="Choose Numbers:"
CHTR="Sayıları Seçin:"
CHID="Pilih Nomor:"

-- Operators
local operators = {
    ["+"] = function(x,y) return x+y end,
    ["-"] = function(x,y) return x-y end,
    ["*"] = function(x,y) return x*y end,
    ["/"] = function(x,y) return x/y end
}

-- Functions
local function default()
    print OPT
end
local function defaulttr()
    print "Böyle Bir İşlem Tipi Yok!"
end
local function defaultid()
    print "Tidak Ada Jenis Transaksi Seperti Itu!"
end

-- Select Your Language
print("Please, Select Your Language")
local sllang = io.read()

-- Main Code
if sllang == "en" then
  print(CHEN + "\n")
  print("Num1: ")
  local num1 = io.read()
  print("Num2:" )
  local num2 = io.read()
  print("Choose Operator: [ + ] [ - ] [ * ] [ / ]")
  local func = operators[io.read()] or default
  print(func(num1,num2))
elseif sllang == "tr" then
  print(CHTR + "\n")
  print("İlk Sayı: ")
  local num1tr = io.read()
  print("İkinci Sayı:" )
  local num2tr = io.read()
  print("İşlem Seç: [ + ] [ - ] [ * ] [ / ]")
  local functr = operators[io.read()] or defaulttr
  print(functr(num1tr,num2tr))
elseif sllang == "id" then
  print(CHID + "\n")
  print("Edisi Pertama: ")
  local num1tr = io.read()
  print("Masalah Kedua:" )
  local num2tr = io.read()
  print("Pilih Tindakan: [ + ] [ - ] [ * ] [ / ]")
  local functr = operators[io.read()] or defaultid
  print(functr(num1tr,num2tr))
else
  print(DEF)
end
