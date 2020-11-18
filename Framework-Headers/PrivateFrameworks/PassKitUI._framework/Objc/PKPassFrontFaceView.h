//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPassFaceView.h>

@class PKBarcodeStickerView, PKContinuousButton, PKLinkedAppIconView, UILabel, WLEasyToHitCustomButton;

@interface PKPassFrontFaceView : PKPassFaceView
{
    PKBarcodeStickerView *_barcodeView;
    WLEasyToHitCustomButton *_infoButton;
    PKContinuousButton *_barcodeButton;
    UILabel *_logoLabel;
    BOOL _showsLinkedApp;
    BOOL _showsInfo;
    BOOL _showsBarcodeButton;
    BOOL _showsBarcodeView;
    BOOL _showsLiveBalance;
    PKLinkedAppIconView *_linkedApp;
}

@property (readonly, nonatomic) PKBarcodeStickerView *barcodeView;
@property (readonly, nonatomic) PKLinkedAppIconView *linkedApp; // @synthesize linkedApp=_linkedApp;
@property (nonatomic) BOOL showsBarcodeButton; // @synthesize showsBarcodeButton=_showsBarcodeButton;
@property (nonatomic) BOOL showsBarcodeView; // @synthesize showsBarcodeView=_showsBarcodeView;
@property (nonatomic) BOOL showsInfo; // @synthesize showsInfo=_showsInfo;
@property (nonatomic) BOOL showsLinkedApp; // @synthesize showsLinkedApp=_showsLinkedApp;
@property (nonatomic) BOOL showsLiveBalance; // @synthesize showsLiveBalance=_showsLiveBalance;

- (void).cxx_destruct;
- (void)_barcodeButtonPressed;
- (void)_infoButtonPressed;
- (void)_positionBarcodeView;
- (id)_relevantBuckets;
- (struct CGRect)barcodeFrame;
- (struct CGSize)contentSize;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)dealloc;
- (id)init;
- (void)insertContentView:(id)arg1 ofType:(long long)arg2;
- (void)layoutSubviews;
- (id)passFaceTemplate;
- (void)setClipsContent:(BOOL)arg1;
- (void)setShowsBarcodeButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsBarcodeView:(BOOL)arg1 animated:(BOOL)arg2;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (id)tallFaceTemplate;
- (void)updateValidity;

@end
