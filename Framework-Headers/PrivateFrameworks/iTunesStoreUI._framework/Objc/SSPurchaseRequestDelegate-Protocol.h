//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SSRequestDelegate-Protocol.h>

@class NSError, SSPurchase, SSPurchaseRequest;

@protocol SSPurchaseRequestDelegate <SSRequestDelegate>

@optional
- (void)purchaseRequest:(SSPurchaseRequest *)arg1 purchaseDidFail:(SSPurchase *)arg2 withError:(NSError *)arg3;
- (void)purchaseRequest:(SSPurchaseRequest *)arg1 purchaseDidSucceed:(SSPurchase *)arg2;
@end

