//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPaymentApplication, PKPaymentTransaction;
@protocol OS_dispatch_queue;

@interface PKPaymentTransactionMapsLookupRequest : NSObject
{
    PKPaymentTransaction *_transaction;
    PKPaymentApplication *_paymentApplication;
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _clearingAttempt;
}

@property (nonatomic, getter=isClearingAttempt) BOOL clearingAttempt; // @synthesize clearingAttempt=_clearingAttempt;

- (void).cxx_destruct;
- (id)_brandFromMapItem:(id)arg1;
- (id)_merchantFromMapItem:(id)arg1;
- (id)_merchantLookupRequest;
- (id)initWithTransaction:(id)arg1 paymentApplication:(id)arg2;
- (void)startLookupWithCompletion:(CDUnknownBlockType)arg1;

@end

