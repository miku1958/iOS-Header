//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpotlightUI/NSObject-Protocol.h>

@class BSTransaction;

@protocol BSTransactionObserver <NSObject>

@optional
- (void)transactionDidBegin:(BSTransaction *)arg1;
- (void)transactionDidComplete:(BSTransaction *)arg1;
- (void)transactionDidFinishWork:(BSTransaction *)arg1;
- (void)transactionWillBegin:(BSTransaction *)arg1;
@end

