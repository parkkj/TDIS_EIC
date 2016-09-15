root [0] TH2D *h2 = new TH2D("h2","h2",40,-10,10,40,-10,10)
root [1] ntuple->Draw("px:py >> h2");
root [2] h2->SetTitle("Main Title ; X Title ; Y Title")



> root TDIS-MC05x100.proton.root

root [1] TH2F *h2 = new TH2F("h2","test",100,0.5,5.,200,0.,200.)
root [2] Evnts->Draw("sqrt(pi.Px()*pi.Px()+pi.Py()*pi.Py()+pi.Pz()*pi.Pz()):pi.Theta()*180./3.14 >>  h2","(fpi/f2N)*sigma_dis*(xpi<1.)","")
root [3] h2->Draw("colz")
root [4] c1->SetLogz(1)
root [5] h2->SetTitle("Hadron momentum vs. angle ; angle (#Theta) (deg) ; Momentum (GeV)")
root [6] Evnts->Draw("sqrt(p1_Sp.Px()*p1_Sp.Px()+p1_Sp.Py()*p1_Sp.Py()+p1_Sp.Pz()*p1_Sp.Pz()):p1_Sp.Theta()*180./3.14","(fpi/f2N)*sigma_dis","same")
