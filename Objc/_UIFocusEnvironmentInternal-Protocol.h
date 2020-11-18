//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIFocusEnvironmentPrivate-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusUpdateContext;
@protocol UIFocusEnvironment, _UIFocusRegionContainer;

@protocol _UIFocusEnvironmentInternal <_UIFocusEnvironmentPrivate>

@property (readonly, weak, nonatomic, getter=_focusMapContainer) id<_UIFocusRegionContainer> focusMapContainer;


@optional
- (void)_didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (id<UIFocusEnvironment>)_overridingPreferredFocusEnvironment;
- (BOOL)_shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)_willUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
@end

