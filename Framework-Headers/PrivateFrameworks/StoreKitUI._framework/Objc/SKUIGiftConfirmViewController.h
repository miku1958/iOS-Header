//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIFocusedTouchGestureRecognizer, SKUIGiftConfirmView, SKUIGiftPurchaseRequest;

__attribute__((visibility("hidden")))
@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController
{
    SKUIGiftConfirmView *_confirmView;
    BOOL _isShowingConfirmation;
    SKUIGiftPurchaseRequest *_purchaseRequest;
    SKUIFocusedTouchGestureRecognizer *_touchRecognizer;
}

- (void).cxx_destruct;
- (void)_buyButtonAction:(id)arg1;
- (id)_buyButtonTitle;
- (void)_cancelBuyConfirmation:(id)arg1;
- (id)_confirmButtonTitle;
- (void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2;
- (id)_newBuyBarButtonItemWithTitle:(id)arg1;
- (void)_purchaseGift;
- (void)_removeCancelGestureRecognizer;
- (void)_setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showSuccessPage;
- (void)_termsButtonAction:(id)arg1;
- (void)dealloc;
- (id)initWithGift:(id)arg1 configuration:(id)arg2;
- (void)loadView;

@end

