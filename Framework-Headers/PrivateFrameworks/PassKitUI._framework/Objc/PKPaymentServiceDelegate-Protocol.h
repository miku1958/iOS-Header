//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString, PKFieldProperties, PKPaymentMessage, PKPaymentTransaction, PKValueAddedServiceTransaction;

@protocol PKPaymentServiceDelegate <NSObject>

@optional
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(NSString *)arg1;
- (void)passWithUniqueIdentifier:(NSString *)arg1 didReceiveValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg2;
- (void)paymentDeviceDidEnterFieldWithProperties:(PKFieldProperties *)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentServiceReceivedInterruption;
@end

