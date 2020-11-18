//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, PKContactlessInterfaceSession, PKContactlessInterfaceTransactionContext, PKFieldProperties, PKPaymentApplication, PKPaymentPass;

@protocol PKContactlessInterfaceSessionDelegate <NSObject>

@optional
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didEndPersistentCardEmulationWithContext:(PKContactlessInterfaceTransactionContext *)arg2;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didFinishTransactionWithContext:(PKContactlessInterfaceTransactionContext *)arg2;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didReceiveExpressState:(unsigned long long)arg2;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)contactlessInterfaceSessionDidEnterField:(PKContactlessInterfaceSession *)arg1 withProperties:(PKFieldProperties *)arg2;
- (void)contactlessInterfaceSessionDidExitField:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidFail:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3 valueAddedServicePasses:(NSArray *)arg4;
- (void)contactlessInterfaceSessionDidFailDeferredAuthorization:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidFailTransaction:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3;
- (void)contactlessInterfaceSessionDidReceiveActivityTimeout:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidSelectPayment:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidSelectValueAddedService:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidStartTransaction:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidTerminate:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidTimeout:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3 valueAddedServicePasses:(NSArray *)arg4;
- (void)contactlessInterfaceSessionHasPendingServerRequest:(PKContactlessInterfaceSession *)arg1;
@end

