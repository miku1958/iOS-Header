//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class ASCLockupView, ASCMetricsActivity, NSError, NSString, UIViewController;
@protocol ASCOffer;

@protocol ASCLockupViewDelegate <NSObject>
- (UIViewController *)presentingViewControllerForLockupView:(ASCLockupView *)arg1;

@optional
- (void)lockupView:(ASCLockupView *)arg1 appStateDidChange:(NSString *)arg2;
- (void)lockupView:(ASCLockupView *)arg1 didFailRequestWithError:(NSError *)arg2;
- (void)lockupViewDidBeginRequest:(ASCLockupView *)arg1;
- (void)lockupViewDidFinishRequest:(ASCLockupView *)arg1;
- (void)lockupViewDidInvalidateIntrinsicContentSize:(ASCLockupView *)arg1;
- (ASCMetricsActivity *)metricsActivityForLockupView:(ASCLockupView *)arg1 toPerformActionOfOffer:(id<ASCOffer>)arg2;
@end
