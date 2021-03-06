//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoPassKit/NPKQuickPaymentSessionDelegate-Protocol.h>

@class NSString;

@interface NPKQuickPaymentSessionCleanupDelegate : NSObject <NPKQuickPaymentSessionDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_saveTransactionFromContext:(id)arg1;
- (void)paymentSession:(id)arg1 didCompleteForReason:(unsigned long long)arg2 withTransactionContext:(id)arg3;
- (void)paymentSession:(id)arg1 didCompleteTransactionWithContext:(id)arg2;

@end

