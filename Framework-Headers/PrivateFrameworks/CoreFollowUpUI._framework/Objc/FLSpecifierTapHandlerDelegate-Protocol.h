//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreFollowUpUI/NSObject-Protocol.h>

@class FLSpecifierTapHandler, UIViewController;

@protocol FLSpecifierTapHandlerDelegate <NSObject>
- (void)startPresentingForHandler:(FLSpecifierTapHandler *)arg1 withRemoteController:(UIViewController *)arg2;

@optional
- (void)preflightNetworkConnectivityForHandler:(FLSpecifierTapHandler *)arg1 withCompletionHandler:(void (^)(BOOL, NSError *))arg2;
@end
