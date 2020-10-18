#include <iostream>
#include <vector>

using namespace std;

vector <vector <vector <int> > > cleansud(vector <vector <vector <int> > > CoordM){// narrows the sudoku options
    int turn, nvarp, var1, var2, var3, var4, var5, var6, var7, var8, var9, check, tcheck, done, ligvid, nlig, alig, colvid, acol, ncol, ccomp, ctest;
    turn=1;
    vector<int> Ligi, Coli;
    vector< vector<int> > Ligdiff, Coldiff;
    int caselig[] = {1,2,3,1,2,3,1,2,3,4,5,6,4,5,6,4,5,6,7,8,9,7,8,9,7,8,9};
    vector<int> Caselig (caselig, caselig + sizeof(caselig) / sizeof(int) );
    int casecol[] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9};
    vector<int> Casecol (casecol, casecol + sizeof(casecol) / sizeof(int) );
    for(int z=0; z<CoordM.size(); z++){
        while(turn==1){
            turn=0;
        LOOP: check=1;tcheck=0;done=0;
            while(check==1){
                for(int i=0; i<81; i++){
                    nvarp = CoordM[z][i][5];
                    var1=0;var2=0;var3=0;var4=0;var5=0;var6=0;var7=0;var8=0;var9=0;
                    switch (nvarp){
                        case 9:
                            var9=CoordM[z][i][14];
                        case 8:
                            var8=CoordM[z][i][13];
                        case 7:
                            var7=CoordM[z][i][12];
                        case 6:
                            var6=CoordM[z][i][11];
                        case 5:
                            var5=CoordM[z][i][10];
                        case 4:
                            var4=CoordM[z][i][9];
                        case 3:
                            var3=CoordM[z][i][8];
                        case 2:
                            var2=CoordM[z][i][7];
                        case 1:
                            var1=CoordM[z][i][6];
                            break;
                        default:
                            cout << "erreur nvarp!" << endl;
                            break;
                    }
                    for(int l=0; l<81; l++){ //rajouter exclusion si chiffre sur ligne/colonne/case sans connaître l'endroit précis
                        if(i!=l&&CoordM[z][i][5]!=1){
                            if(CoordM[z][i][0]==CoordM[z][l][0]||CoordM[z][i][1]==CoordM[z][l][1]||CoordM[z][i][2]==CoordM[z][l][2]){
                                if(CoordM[z][l][5]==1){
                                    if(var9!=0&&var9==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+14);
                                        var9=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                    if(var8!=0&&var8==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+13);
                                        var8=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                    if(var7!=0&&var7==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+12);
                                        var7=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                    if(var6!=0&&var6==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+11);
                                        var6=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                    if(var5!=0&&var5==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+10);
                                        var5=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                    if(var4!=0&&var4==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+9);
                                        var4=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                    if(var3!=0&&var3==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+8);
                                        var3=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                    if(var2!=0&&var2==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+7);
                                        var2=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                    if(var1!=0&&var1==CoordM[z][l][6]){CoordM[z][i].erase(CoordM[z][i].begin()+6);
                                        var1=0;CoordM[z][i][5]=CoordM[z][i][5]-1; tcheck=1; turn=1; goto LOOP;}
                                }//fin du 3ème if
                            }//fin du 2eme if
                        }//fin du 1er if
                    }//fin de la boucle l
                }//fin de la boucle i
                if(tcheck==0){check=0;}
                if(tcheck==1){check=1; tcheck=0;}
            }//fin du while
            for (int m=1; m<10; m++){//Ligdiff
                for(int j=0; j<27; j++){
                    for(int i=0; i<81; i++){
                        if(CoordM[z][i][5]!=1){//restriciton de points
                            nvarp = CoordM[z][i][5];
                            var1=0;var2=0;var3=0;var4=0;var5=0;var6=0;var7=0;var8=0;var9=0;
                            switch (nvarp){
                                case 9:
                                    var9=CoordM[z][i][14];
                                case 8:
                                    var8=CoordM[z][i][13];
                                case 7:
                                    var7=CoordM[z][i][12];
                                case 6:
                                    var6=CoordM[z][i][11];
                                case 5:
                                    var5=CoordM[z][i][10];
                                case 4:
                                    var4=CoordM[z][i][9];
                                case 3:
                                    var3=CoordM[z][i][8];
                                case 2:
                                    var2=CoordM[z][i][7];
                                    var1=CoordM[z][i][6];
                                    break;
                                default:
                                    cout << "erreur nvarp!" << endl;
                                    break;
                            }
                            if(CoordM[z][i][3]==j+1){
                                if(var1==m||var2==m||var3==m||var4==m||var5==m||var6==m||var7==m||var8==m||var9==m){done=1;}
                            }
                        }
                    }
                    if(done==0){Ligi.push_back(1);}
                    if(done==1){done=0; Ligi.push_back(0);}
                }
                Ligdiff.push_back(Ligi);
                Ligi.clear();
            }
            for(int d=0; d<9; d++){
                //cout << endl << d+1 <<endl;
                for(int k=0; k<27;k++){
                    //cout << Ligdiff[d][k] << " ";
                }
                //cout << endl;
            }
            //cout << endl << endl;
            done=0;
            
            for (int m=1; m<10; m++){//Coldiff
                for(int j=0; j<27; j++){
                    for(int i=0; i<81; i++){
                        if(CoordM[z][i][5]!=1){//restriction de points
                            nvarp = CoordM[z][i][5];
                            var1=0;var2=0;var3=0;var4=0;var5=0;var6=0;var7=0;var8=0;var9=0;
                            switch (nvarp){
                                case 9:
                                    var9=CoordM[z][i][14];
                                case 8:
                                    var8=CoordM[z][i][13];
                                case 7:
                                    var7=CoordM[z][i][12];
                                case 6:
                                    var6=CoordM[z][i][11];
                                case 5:
                                    var5=CoordM[z][i][10];
                                case 4:
                                    var4=CoordM[z][i][9];
                                case 3:
                                    var3=CoordM[z][i][8];
                                case 2:
                                    var2=CoordM[z][i][7];
                                    var1=CoordM[z][i][6];
                                    break;
                                default:
                                    cout << "erreur nvarp!" << endl;
                                    break;
                            }
                            if(CoordM[z][i][4]==j+1){
                                if(var1==m||var2==m||var3==m||var4==m||var5==m||var6==m||var7==m||var8==m||var9==m){done=1;}
                            }
                        }
                    }
                    if(done==0){Coli.push_back(1);}
                    if(done==1){done=0; Coli.push_back(0);}
                }
                Coldiff.push_back(Coli);
                Coli.clear();
            }
            for(int d=0; d<Coldiff.size();d++){
                //cout << endl << d+1 <<endl;
                for(int k=0; k<Coldiff[d].size();k++){
                    //cout << Coldiff[d][k] << " ";
                }
                //cout << endl;
            }
            //cout << endl;
            done=0;
            
            for(int m=0; m<9; m++){//purification si combo 2 lignes vides
                for(int k=1; k<10; k++){//N° case
                    ligvid=0;
                    for(int t=0; t<27; t++){
                        if(Caselig[t]==k){
                            if(Ligdiff[m][t]==1){ligvid++;}
                            if(Ligdiff[m][t]==0){
                                nlig=int(t/3)+1;
                                alig=t+1;
                            }
                        }
                    }
                    if(ligvid==2){
                    RESTART:    for(int l=0; l<81;l++){
                        if(nlig==CoordM[z][l][0]){
                            for(int p=6;p<CoordM[z][l].size();p++){
                                if((CoordM[z][l][p]==m+1)&&(CoordM[z][l][3]!=alig)){
                                    CoordM[z][l].erase(CoordM[z][l].begin()+p);
                                    CoordM[z][l][5]=CoordM[z][l][5]-1;turn=1; goto RESTART;}
                            }
                        }
                    }
                    }
                }
            }
            for(int m=0; m<9; m++){//purification si combo 2 colonnes vides
                for(int k=1; k<10; k++){//N° case
                    colvid=0;
                    for(int t=0; t<27; t++){
                        if(Casecol[t]==k){
                            if(Coldiff[m][t]==1){colvid++;}
                            if(Coldiff[m][t]==0){
                                ncol=t%9+1;
                                acol=t+1;
                            }
                        }
                    }
                    if(colvid==2){
                    HOPE:    for(int l=0; l<81;l++){
                        if(ncol==CoordM[z][l][1]){
                            for(int p=6;p<CoordM[z][l].size();p++){
                                if((CoordM[z][l][p]==m+1)&&(CoordM[z][l][4]!=acol)){
                                    CoordM[z][l].erase(CoordM[z][l].begin()+p);
                                    CoordM[z][l][5]=CoordM[z][l][5]-1; turn=1; goto HOPE;}
                            }
                        }
                    }
                    }
                }
            }
            ccomp=0;ctest=0;
            for(int m=0; m<9; m++){//purification chiffre sur la meme ligne
                for(int i=0; i<81; i++){
                    nvarp = CoordM[z][i][5];
                    ccomp=0;ctest=0;
                    for(int l=0; l<81; l++){
                        if(nvarp!=1&&i!=l&&CoordM[z][l][0]==CoordM[z][i][0]){
                            for(int t=6; t<CoordM[z][i].size(); t++){
                                if(m+1==CoordM[z][i][t]){
                                    for(int j=6; j<CoordM[z][l].size(); j++){
                                        if(m+1==CoordM[z][l][j]){
                                            ccomp=1; ctest=1;
                                        }//fin dernier if
                                        if(m+1!=CoordM[z][l][j]){
                                            ctest=1;
                                        }
                                    }// fin dernier for
                                }//fin du 2eme if
                            }//fin de la boucle t
                        }//fin du 1er if
                    }//fin du la boucle l
                    if((ccomp==0)&&(ctest==1)){/*for(int e=0; e<CoordM[i].size(); e++){cout << CoordM[i][e] << " ";}
                                                cout << endl; cout <<m+1 << endl;*/ for(int k=nvarp; k>1; k--){CoordM[z][i].erase(CoordM[z][i].begin()+5+k);}
                        CoordM[z][i][6]=m+1;CoordM[z][i][5]=1;/*for(int e=0; e<CoordM[i].size(); e++){cout << CoordM[i][e] << " ";}
                                                               cout << endl<<endl*/turn=1;goto LOOP;}
                }//fin de la boucle i
            }//fin de la boucle m
            for(int m=0; m<9; m++){//purification chiffre sur la meme colonne
                for(int i=0; i<81; i++){
                    nvarp = CoordM[z][i][5];
                    ccomp=0;ctest=0;
                    for(int l=0; l<81; l++){
                        if(nvarp!=1&&i!=l&&CoordM[z][l][1]==CoordM[z][i][1]){
                            for(int t=6; t<CoordM[z][i].size(); t++){
                                if(m+1==CoordM[z][i][t]){
                                    for(int j=6; j<CoordM[z][l].size(); j++){
                                        if(m+1==CoordM[z][l][j]){
                                            ccomp=1; ctest=1;
                                        }//fin dernier if
                                        if(m+1!=CoordM[z][l][j]){
                                            ctest=1;
                                        }
                                    }// fin dernier for
                                }//fin du 2eme if
                            }//fin de la boucle t
                        }//fin du 1er if
                    }//fin du la boucle l
                    if((ccomp==0)&&(ctest==1)){for(int k=nvarp; k>1; k--){CoordM[z][i].erase(CoordM[z][i].begin()+5+k);}
                        CoordM[z][i][6]=m+1;CoordM[z][i][5]=1; turn=1; goto LOOP;}
                }//fin de la boucle i
            }//fin de la boucle m
            for(int m=0; m<9; m++){//purification chiffre sur la meme case
                for(int i=0; i<81; i++){
                    nvarp = CoordM[z][i][5];
                    ccomp=0;ctest=0;
                    for(int l=0; l<81; l++){
                        if(nvarp!=1&&i!=l&&CoordM[z][l][2]==CoordM[z][i][2]){
                            for(int t=6; t<CoordM[z][i].size(); t++){
                                if(m+1==CoordM[z][i][t]){
                                    for(int j=6; j<CoordM[z][l].size(); j++){
                                        if(m+1==CoordM[z][l][j]){
                                            ccomp=1; ctest=1;
                                        }//fin dernier if
                                        if(m+1!=CoordM[z][l][j]){
                                            ctest=1;
                                        }
                                    }// fin dernier for
                                }//fin du 2eme if
                            }//fin de la boucle t
                        }//fin du 1er if
                    }//fin du la boucle l
                    if((ccomp==0)&&(ctest==1)){for(int k=nvarp; k>1; k--){CoordM[z][i].erase(CoordM[z][i].begin()+5+k);}
                        CoordM[z][i][6]=m+1;CoordM[z][i][5]=1; turn=1; goto LOOP;}
                }//fin de la boucle i
            }//fin de la boucle m
        }//fin du while turn=1
        
    }//fin du z (profondeur vecteur)
    return CoordM;
}

int errcheck(vector <vector <vector <int> > > CoordM){//checks if there are any mistakes
    int err=0;
    for(int k=0; k<CoordM.size(); k++){
        for(int i=0; i<81; i++){
            for(int j=0; j<81; j++){
                if(i!=j&&(CoordM[k][i][0]==CoordM[k][j][0]||CoordM[k][i][1]==CoordM[k][j][1]||CoordM[k][i][2]==CoordM[k][j][2])){
                    if(CoordM[k][i][5]==1&&CoordM[k][j][5]==1&&CoordM[k][j][6]==CoordM[k][i][6]){
                        err=1;
                    }
                }
            }
        }
    }
    return err;
}

vector <vector <vector <int> > > option2(vector <vector <vector <int> > > CoordM, int *optback2, int z, int i){//choisit les options entre 2 options
    //retourne 1 si pas de sol i.e. sudoku insoluble
    //retourne 2 si plusieurs solutions
    //retourne 0 si normal
    int turn=1, turn1=1, turn2=1, err1, err2, err11, err22, errM1, errM2, abs, abs1, abs2;
    vector< vector<int> > CoordM1, CoordM2, CoordM11, CoordM12, CoordM21, CoordM22;
    vector< vector< vector<int> > > CoordJ, CoordT;
    turn=0;abs=0;
    if(CoordM[z][i][5]==2){
        CoordJ = CoordM;
        CoordJ[z][i].erase(CoordJ[z][i].begin()+6);
        CoordJ[z][i][5]--;
        CoordJ = cleansud(CoordJ);
        err1 = errcheck(CoordJ);
        CoordT = CoordM;
        CoordT[z][i].erase(CoordT[z][i].begin()+7);
        CoordT[z][i][5]--;
        CoordT = cleansud(CoordT);
        err2 = errcheck(CoordT);
        if((err1==1)&&(err2==1)){//sudoku n'a pas de solution
            *optback2=1; //sudoku n'a pas de solution
        }
        if((err1==0)&&(err2==1)){
            CoordM = CoordJ; turn=1;
            *optback2=0;
        }
        if((err1==1)&&(err2==0)){
            CoordM = CoordT; turn=1;
            *optback2=0;
        }
        if((err1==0)&&(err2==0)){
            *optback2=2;
            CoordM.erase(CoordM.begin()+z);
            CoordM.push_back(CoordJ[0]);
            CoordM.push_back(CoordT[0]);
        }
    }//fin du if avec 2 opts
    return CoordM;
}

vector <vector <vector <int> > > option3(vector <vector <vector <int> > > CoordM, int *optback3, int z, int i){//choisit les options entre 2 options
    //retourne 1 si pas de sol i.e. sudoku insoluble
    //retourne 2 si plusieurs solutions
    //retourne 0 si normal
    int turn=1, turn1=1, turn2=1, err1, err2, err3, errM1, errM2, abs, abs1, abs2;
    vector< vector<int> > CoordM1, CoordM2, CoordM11, CoordM12, CoordM21, CoordM22;
    vector< vector< vector<int> > > CoordJ, CoordT, CoordL;
    turn=0;abs=0;
    if(CoordM[z][i][5]==3){
        CoordJ = CoordM;
        CoordJ[z][i].erase(CoordJ[z][i].begin()+6);
        CoordJ[z][i][5]--;
        CoordJ = cleansud(CoordJ);
        err1 = errcheck(CoordJ);
        CoordT = CoordM;
        CoordT[z][i].erase(CoordT[z][i].begin()+7);
        CoordT[z][i][5]--;
        CoordT = cleansud(CoordT);
        err2 = errcheck(CoordT);
        CoordL = CoordM;
        CoordL[z][i].erase(CoordL[z][i].begin()+8);
        CoordL[z][i][5]--;
        CoordL = cleansud(CoordT);
        err3 = errcheck(CoordT);
        if((err1==1)&&(err2==1)&&(err3==1)){//sudoku n'a pas de solution
            *optback3=1; //sudoku n'a pas de solution
        }
        if((err1==0)&&(err2==1)&&(err3==1)){
            CoordM = CoordJ; turn=1;
            *optback3=0;
        }
        if((err1==1)&&(err2==0)&&(err3==1)){
            CoordM = CoordT; turn=1;
            *optback3=0;
        }
        if((err1==1)&&(err2==1)&&(err3==0)){
            CoordM = CoordL; turn=1;
            *optback3=0;
        }
        if((err1==0)&&(err2==0)||(err1==0)&&(err3==0)||(err2==0)&&(err3==0)||(err1==0)&&(err2==0)&&(err3==0)){
            *optback3=2;
            CoordM.erase(CoordM.begin()+z);
            CoordM.push_back(CoordJ[0]);
            CoordM.push_back(CoordT[0]);
            CoordM.push_back(CoordL[0]);
        }
    }//fin du if avec 3 opts
    return CoordM;
}


int main(){
    int clig, ccol, ccas, porlig, porcol, err, optback2, optback3, errfin;
    vector <vector <vector <int> > > CoordM, CoordT;
    vector < vector<int> > Ligdiff, Coldiff, Coordtrans;
    vector <int> Coordi, Init, Ligi, Coli;
    int caselig[] = {1,2,3,1,2,3,1,2,3,4,5,6,4,5,6,4,5,6,7,8,9,7,8,9,7,8,9};
    vector <int> Caselig (caselig, caselig + sizeof(caselig) / sizeof(int) );
    int casecol[] = {1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9};
    vector <int> Casecol (casecol, casecol + sizeof(casecol) / sizeof(int) );
    int copyinit [] = {0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0,
        0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0,
        0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0, 0,0,0};
    int oldinit [] = {6,0,0, 0,2,0, 0,8,0, 0,0,1, 0,0,7, 6,0,0, 9,0,2, 3,8,6, 4,7,1,
        4,0,0, 0,0,0, 2,0,0, 0,0,0, 7,6,0, 8,3,4, 7,2,0, 8,5,0, 0,0,0,
        0,0,0, 4,3,1, 7,0,8, 0,0,6, 0,7,0, 0,0,0, 0,7,4, 0,0,0, 1,0,5};
    int old2init [] = {0,1,0, 8,0,0, 0,0,0, 0,0,0, 0,7,1, 0,4,2, 0,2,5, 0,0,0, 3,0,0,
        0,0,4, 0,0,0, 6,0,0, 6,0,0, 0,8,0, 0,0,0, 0,0,0, 5,0,3, 0,0,8,
        0,0,0, 0,0,6, 0,0,0, 5,0,1, 0,0,0, 0,0,3, 0,0,7, 0,4,0, 0,0,0};
    int old3init [] = {0,0,2, 3,0,0, 0,8,0, 1,0,0, 0,0,2, 0,0,9, 0,0,0, 6,0,0, 0,4,0,
        0,6,0, 0,0,0, 0,0,7, 0,0,0, 0,7,0, 9,0,2, 0,8,0, 0,0,0, 0,0,0,
        5,0,0, 0,9,0, 3,6,0, 0,0,1, 0,0,0, 0,0,0, 0,9,0, 5,0,0, 1,0,0};
    int old4init [] = {0,8,0, 0,0,0, 0,0,4, 6,5,0, 0,4,0, 0,1,0, 0,0,0, 0,0,2, 6,0,0,
        0,0,0, 3,0,7, 4,0,0, 0,6,0, 0,0,0, 0,7,0, 0,0,1, 8,0,9, 0,0,0,
        0,0,8, 2,0,0, 0,0,0, 0,3,0, 0,1,0, 0,9,2, 4,0,0, 0,0,0, 0,5,0};
    int WorldsHardestSudinit [] = {8,0,0, 0,0,0, 0,0,0, 0,0,3, 6,0,0, 0,0,0, 0,7,0, 0,9,0, 2,0,0,
        0,5,0, 0,0,7, 0,0,0, 0,0,0, 0,4,5, 7,0,0, 0,0,0, 1,0,0, 0,3,0,
        0,0,1, 0,0,0, 0,6,8, 0,0,8, 5,0,0, 0,1,0, 0,9,0, 0,0,0, 4,0,0};
    int init [] = {
        7,0,0, 0,4,8, 0,0,0,    0,5,0, 0,0,0, 0,2,4,     0,0,0, 0,0,9, 0,0,1,
        0,2,0, 0,0,0, 0,5,0,    3,0,9, 0,5,0, 0,0,6,     0,0,0, 4,7,0, 0,3,0,
        0,0,0, 0,1,0, 0,4,0,    1,8,0, 0,0,0, 6,9,0,     2,0,0, 7,0,0, 0,0,0};
    for (int i=0; i<81; i++){
        Init.push_back(WorldsHardestSudinit[i]);
    }
    for(int i=1; i<=81; i++){  //Initialisation vecteur de cases sudoku
        clig = int(i/9)+1;
        ccol = (i%9);
        if (ccol == 0){
            ccol = 9;
            clig--;
        }
        if(clig==1||clig==2||clig==3){
            if(ccol==1||ccol==2||ccol==3){
                ccas = 1;
            }
            if(ccol==4||ccol==5||ccol==6){
                ccas = 2;
            }
            if(ccol==7||ccol==8||ccol==9){
                ccas = 3;
            }
        }
        if(clig==4||clig==5||clig==6){
            if(ccol==1||ccol==2||ccol==3){
                ccas = 4;
            }
            if(ccol==4||ccol==5||ccol==6){
                ccas = 5;
            }
            if(ccol==7||ccol==8||ccol==9){
                ccas = 6;
            }
        }
        if(clig==7||clig==8||clig==9){
            if(ccol==1||ccol==2||ccol==3){
                ccas = 7;
            }
            if(ccol==4||ccol==5||ccol==6){
                ccas = 8;
            }
            if(ccol==7||ccol==8||ccol==9){
                ccas = 9;
            }
        }
        porlig = int(i/3)+1;
        if(ccol==3||ccol==6||ccol==9){porlig--;}
        if(clig<4){porcol=ccol;}
        if(clig>3&&clig<7){porcol=ccol+9;}
        if(clig>6){porcol=ccol+18;}
        //cout << i << ": " << clig << "; " << ccol << "; " << ccas << "; " << endl; //Check si bonne allocation
        Coordi.clear();
        Coordi.push_back(clig);
        Coordi.push_back(ccol);
        Coordi.push_back(ccas);
        Coordi.push_back(porlig);
        Coordi.push_back(porcol);
        if(Init[i-1]==0){
            Coordi.push_back(9);
            for(int j=1; j<=9; j++){
                Coordi.push_back(j);
            }
        }
        else{
            Coordi.push_back(1);
            Coordi.push_back(Init[i-1]);
        }
        Coordtrans.push_back(Coordi);
        //cout << "Coordi de:" << i << "= " << Coordi[0] << " " << Coordi[1] << " " << Coordi [2] << endl; //Check coord. i
    }
    CoordM.push_back(Coordtrans);
    
    CoordM = cleansud(CoordM);
    err = errcheck(CoordM);
    
    if (err==1){
        cout << "Le Sudoku est erroné, veuillez proposer un sudoku valide s'il vous plaît." << endl;
        errfin=1;return 1;//sudoku n'a pas de solution
    }
    
SUPERLOOP:
    for(int z=0; z<CoordM.size(); z++){
        for(int i=0; i<81; i++){
            if(CoordM[z][i][5]==2){
                CoordM = option2(CoordM, &optback2, z, i);
                if(optback2==1){CoordM.erase(CoordM.begin()+z);}
                if(optback2==2){goto SUPERLOOP;}
            }
        }
    }
DUPERLOOP:
    for(int z=0; z<CoordM.size(); z++){
        for(int i=0; i<81; i++){
            if(CoordM[z][i][5]==3){
                CoordM = option3(CoordM, &optback3, z, i);
                if(optback3==1){CoordM.erase(CoordM.begin()+z);}
                if(optback3==2){goto DUPERLOOP;}
            }
        }
    }
    
    errfin=errcheck(CoordM);
    if(errfin==1){
        cout << "Le Sudoku est erroné, veuillez proposer un sudoku valide s'il vous plaît." << endl;
        return 1; //Sudoku faux!!
    }
    
    for(int i=0 ; i<CoordM[0].size(); i++){
        if(CoordM[0][i][5]!=1){cout << "Le Sudoku est incorrect car il a plusieurs réponses valables." << endl;
            errfin=2; return 2;
        }
    }
    
    cout << "La solution du Sudoku est:" << endl << endl;
    
    for(int i=0 ; i<3; i++){//Check si CoordM fonctionne bien Yes, alles OK!!
        for(int l=0; l<3; l++){
            for(int m=0; m<3; m++){
                for(int j=0; j<3; j++){
                    int a=27*i+9*l+3*m+j;
                    cout << CoordM[0][a][6]<< " ";
                }
                cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << endl << endl;
}//fin du main
//errfin=1; return 1; si sudoku invalide
//errfin=2; return 2; si sudoku insoluble(plusieurs réponses ou incapable de résoudre entièrement)
//errfin=0; rien d'anormal
