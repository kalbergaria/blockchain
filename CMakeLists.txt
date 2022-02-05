cmake_minimum_required(VERSION 3.0)
project(blockchain)

###############################################################################
## file globbing ##############################################################
###############################################################################

file(GLOB_RECURSE cmn src/cmn/*.cpp src/cmn/*.h)
file(GLOB_RECURSE blockchain src/blockchain/*.cpp src/blockchain/*.h)
file(GLOB_RECURSE wallet src/wallet/*.cpp src/wallet/*.h)
file(GLOB_RECURSE explorer src/explorer/*.cpp src/explorer/*.h)

###############################################################################
## target definitions #########################################################
###############################################################################

# Executables
add_executable(blockchain.out ${blockchain} ${cmn})
target_compile_options(blockchain.out PUBLIC -std=c++1y -Wall -Wfloat-conversion)
target_link_libraries(blockchain.out gcrypt)

add_executable(wallet.out ${wallet} ${cmn})
target_compile_options(wallet.out PUBLIC -std=c++1y -Wall -Wfloat-conversion)
target_link_libraries(wallet.out gcrypt)

add_executable(explorer.out ${explorer} ${cmn})
target_compile_options(explorer.out PUBLIC -std=c++1y -Wall -Wfloat-conversion)
target_link_libraries(explorer.out gcrypt)

###############################################################################
## dependencies ###############################################################
###############################################################################

###############################################################################
## testing ####################################################################
###############################################################################

###############################################################################
## packaging ##################################################################
###############################################################################
