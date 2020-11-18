//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

#import <PassKitUI/PKPassPaymentPayStateViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSDate, NSObject, NSString, PKFooterTransactionView, PKPassPaymentPayStateView, PKPaymentService;
@protocol OS_dispatch_source;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate>
{
    PKFooterTransactionView *_transactionView;
    PKPassPaymentPayStateView *_payStateView;
    BOOL _animated;
    BOOL _shouldHoldCheckmark;
    BOOL _holdingCheckmark;
    NSObject<OS_dispatch_source> *_checkmarkHoldTimer;
    NSDate *_visibleDate;
    int _expressFinishedNotifyToken;
    PKPaymentService *_paymentService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishHoldingCheckmarkAfterDelay:(double)arg1;
- (void)_finishHoldingCheckmarkIfPossible;
- (void)_handleNotifyToken:(int)arg1;
- (void)_registerForExpressFelicaTransitNotifications:(BOOL)arg1;
- (void)_updateContentViewsWithFelicaProperties:(id)arg1;
- (void)_updateContentViewsWithTransaction:(id)arg1;
- (void)_updateContentViewsWithTransaction:(id)arg1 felicaProperties:(id)arg2;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)didBecomeVisibleAnimated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2 context:(id)arg3;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;

@end

