//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface UIInputSetHostView : UIView
{
}

+ (BOOL)_notifyOnExplicitLayout;
+ (BOOL)_shouldHitTestInputViewFirst;
+ (BOOL)requiresConstraintBasedLayout;
- (unsigned long long)_clipCornersOfView:(id)arg1;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutIfNeeded;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;

@end

