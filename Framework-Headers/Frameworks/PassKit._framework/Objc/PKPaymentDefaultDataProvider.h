//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PKPaymentDataProvider-Protocol.h>
#import <PassKitCore/PKPaymentServiceDelegate-Protocol.h>

@class NSHashTable, NSString, PKPaymentService, PKSecureElement;
@protocol OS_dispatch_queue, PKPaymentDataProviderDelegate;

@interface PKPaymentDefaultDataProvider : NSObject <PKPaymentServiceDelegate, PKPaymentDataProvider>
{
    PKPaymentService *_paymentService;
    PKSecureElement *_secureElement;
    NSHashTable *_delegates;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    id<PKPaymentDataProviderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSString *defaultPaymentPassIdentifier;
@property (weak, nonatomic) id<PKPaymentDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isDeviceInRestrictedMode;
@property (readonly, nonatomic) BOOL isPaymentHandoffDisabled;
@property (readonly, nonatomic) NSString *secureElementIdentifier;
@property (readonly, nonatomic) BOOL secureElementIsProductionSigned;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessDelegatesWithHandler:(CDUnknownBlockType)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;
- (id)defaultExpressFelicaTransitPassIdentifier;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1 forPassWithUniqueIdentifier:(id)arg2;
- (void)felicaStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPaymentHandoffDisabled:(BOOL)arg1;
- (BOOL)supportsInAppPaymentsForPass:(id)arg1;
- (BOOL)supportsMessagesForPass:(id)arg1;
- (BOOL)supportsNotificationsForPass:(id)arg1;
- (BOOL)supportsTransactionsForPass:(id)arg1;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForPaymentPassWithUniqueIdentifier:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(CDUnknownBlockType)arg5;

@end

