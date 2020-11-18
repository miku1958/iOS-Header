//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIFocusEnvironment-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusUpdateContext;
@protocol UIFocusEnvironment;

@protocol _UIFocusEnvironmentInternal <UIFocusEnvironment>

@optional
- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (id<UIFocusEnvironment>)_overridingDestinationEnvironmentForFocusUpdateInContext:(UIFocusUpdateContext *)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (BOOL)_shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)_willUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
@end

