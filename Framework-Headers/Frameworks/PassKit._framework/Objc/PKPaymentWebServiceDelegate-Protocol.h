//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKit/NSObject-Protocol.h>

@class PKPaymentWebService;

@protocol PKPaymentWebServiceDelegate <NSObject>
- (void)paymentWebService:(PKPaymentWebService *)arg1 didCompleteTSMConnectionForTaskID:(unsigned long long)arg2;
- (void)paymentWebService:(PKPaymentWebService *)arg1 didQueueTSMConnectionForTaskID:(unsigned long long)arg2;
@end

