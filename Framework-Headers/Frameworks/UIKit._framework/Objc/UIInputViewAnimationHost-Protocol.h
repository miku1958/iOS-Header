//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIInputViewSetPlacement, UIView;

@protocol UIInputViewAnimationHost <NSObject>
- (void)setInputViewsHidden:(BOOL)arg1;
- (void)syncToExistingAnimations;
- (struct CGRect)transitioningFrame;
- (UIView *)transitioningView;
- (void)updateToPlacement:(UIInputViewSetPlacement *)arg1 withNormalAnimationsAndNotifications:(BOOL)arg2;
- (UIView *)viewForTransitionScreenSnapshot;
@end

