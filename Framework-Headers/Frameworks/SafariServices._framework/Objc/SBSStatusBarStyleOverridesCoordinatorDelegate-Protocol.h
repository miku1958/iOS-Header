//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSError, SBSStatusBarStyleOverridesCoordinator;
@protocol SBSStatusBarTapContext;

@protocol SBSStatusBarStyleOverridesCoordinatorDelegate <NSObject>
- (void)statusBarCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 invalidatedRegistrationWithError:(NSError *)arg2;

@optional
- (BOOL)statusBarCoordinator:(SBSStatusBarStyleOverridesCoordinator *)arg1 receivedTapWithContext:(id<SBSStatusBarTapContext>)arg2 completionBlock:(void (^)(void))arg3;
@end
