//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class SBUIAnimationController;

@protocol SBUIAnimationControllerObserver <BSTransactionObserver>

@optional
- (void)animationController:(SBUIAnimationController *)arg1 willBeginAnimation:(BOOL)arg2;
- (void)animationControllerDidFinishAnimation:(SBUIAnimationController *)arg1;
- (void)animationControllerDidRevealApplication:(SBUIAnimationController *)arg1;
@end

