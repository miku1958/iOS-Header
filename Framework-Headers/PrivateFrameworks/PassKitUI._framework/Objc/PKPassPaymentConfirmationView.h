//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

#import <PassKitUI/PKPassPaymentPayStateViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSDate, NSMutableDictionary, NSObject, NSString, PKExpressTransactionState, PKFooterTransactionView, PKPassPaymentPayStateView, PKPaymentService;
@protocol OS_dispatch_source;

@interface PKPassPaymentConfirmationView : PKPassFooterContentView <PKPassPaymentPayStateViewDelegate, PKPaymentServiceDelegate>
{
    PKFooterTransactionView *_transactionView;
    PKPassPaymentPayStateView *_payStateView;
    BOOL _animated;
    PKExpressTransactionState *_expressState;
    BOOL _receivedTransaction;
    BOOL _receivedExit;
    BOOL _needsResolution;
    BOOL _showingAlert;
    BOOL _showingResolution;
    BOOL _animatingResolution;
    NSObject<OS_dispatch_source> *_activityResolutionTimer;
    NSDate *_visibleDate;
    NSMutableDictionary *_registeredExpressObservers;
    PKPaymentService *_paymentService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_disableActivityTimer;
- (id)_expressNotificationNames;
- (void)_handleExpressNotification:(id)arg1;
- (BOOL)_isExpressOutstanding;
- (BOOL)_isRegisteredForAllExpressTransactionNotifications;
- (BOOL)_isRegisteredForAnyExpressTransactionNotifications;
- (void)_presentCheckmarkIfNecessary;
- (void)_registerForExpressTransactionNotifications:(BOOL)arg1;
- (void)_registerObserverForNotificationName:(id)arg1 center:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_resolveActivityIfNecessary;
- (void)_updateContentViewsWithTransaction:(id)arg1;
- (void)_updateContentViewsWithTransaction:(id)arg1 transitProperties:(id)arg2;
- (void)_updateContentViewsWithTransitProperties:(id)arg1;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)didBecomeVisibleAnimated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2 context:(id)arg3;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;

@end

