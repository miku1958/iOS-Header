//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class AMSBinaryPromise, AMSPromise;
@protocol ASCAppOfferStateDelegate;

@protocol ASCServices <NSObject>
- (AMSPromise *)lockupFetcherService;
- (AMSPromise *)metricsService;
- (AMSPromise *)offerStateServiceWithDelegate:(id<ASCAppOfferStateDelegate>)arg1;
- (AMSBinaryPromise *)testConnection;
@end

