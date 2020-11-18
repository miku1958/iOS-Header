//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIFocusAnimationCoordinator, UIFocusUpdateContext, UIView;

@protocol UIFocusEnvironment <NSObject>

@property (readonly, weak, nonatomic) UIView *preferredFocusedView;

- (void)didUpdateFocusInContext:(UIFocusUpdateContext *)arg1 withAnimationCoordinator:(UIFocusAnimationCoordinator *)arg2;
- (void)setNeedsFocusUpdate;
- (BOOL)shouldUpdateFocusInContext:(UIFocusUpdateContext *)arg1;
- (void)updateFocusIfNeeded;
@end

