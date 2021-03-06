//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPassFrontFaceView.h>

@class NSMutableArray, PKBackdropView, PKBarcodeStickerView, UIButton, UIImageView, UILabel, UIView;

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView
{
    UILabel *_balanceLabel;
    UIView *_scrimView;
    PKBackdropView *_backdropView;
    PKBarcodeStickerView *_topBarcodeView;
    PKBarcodeStickerView *_bottomBarcodeView;
    NSMutableArray *_oldTopBarcodeViews;
    NSMutableArray *_oldBottomBarcodeViews;
    UIButton *_fullScreenButton;
    UIImageView *_compactBankLogoView;
}

- (void).cxx_destruct;
- (double)_barcodePadding;
- (struct CGSize)_barcodeSize;
- (id)_filterAuxiliaryField:(id)arg1;
- (id)_filterSecondaryField:(id)arg1;
- (void)_handleAccountChanged:(id)arg1;
- (void)_showFullScreenBarcodeForButton:(id)arg1;
- (void)_updateBalanceLabelFontSize;
- (void)_updateBalanceWithAccount:(id)arg1;
- (struct CGSize)contentSize;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setDynamicBarcodeData:(id)arg1;
- (void)setShowsLiveBalance:(BOOL)arg1;
- (void)setViewExpanded:(BOOL)arg1;
- (BOOL)showsShare;
- (id)templateForHeaderBucket;
- (id)templateForLayoutMode:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

