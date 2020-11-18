//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSArray, PKContactlessInterfaceSession, PKFieldProperties, PKPaymentApplication, PKPaymentPass, PKPaymentTransaction;

@protocol PKContactlessInterfaceSessionDelegate <NSObject>

@optional
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didGeneratePaymentTransaction:(PKPaymentTransaction *)arg2 forPaymentApplication:(PKPaymentApplication *)arg3 paymentPass:(PKPaymentPass *)arg4 andValueAddedServiceTransactions:(NSArray *)arg5 forValueAddedServicePasses:(NSArray *)arg6;
- (void)contactlessInterfaceSession:(PKContactlessInterfaceSession *)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)contactlessInterfaceSessionDidEnterField:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidEnterField:(PKContactlessInterfaceSession *)arg1 withProperties:(PKFieldProperties *)arg2;
- (void)contactlessInterfaceSessionDidExitField:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidFail:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3 valueAddedServicePasses:(NSArray *)arg4;
- (void)contactlessInterfaceSessionDidFailTransaction:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3;
- (void)contactlessInterfaceSessionDidSelectPayment:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidSelectValueAddedService:(PKContactlessInterfaceSession *)arg1;
- (void)contactlessInterfaceSessionDidTimeout:(PKContactlessInterfaceSession *)arg1 forPaymentApplication:(PKPaymentApplication *)arg2 paymentPass:(PKPaymentPass *)arg3 valueAddedServicePasses:(NSArray *)arg4;
@end

