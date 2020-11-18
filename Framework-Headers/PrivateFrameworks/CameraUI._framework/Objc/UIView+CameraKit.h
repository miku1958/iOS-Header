//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (CameraKit)
+ (double)cam_setHiddenAnimationDuration;
+ (struct CGAffineTransform)cam_transformForInterfaceOrientation:(long long)arg1;
- (void)cam_ensureSubview:(id)arg1;
- (BOOL)cam_isOnScreen:(id)arg1;
- (void)cam_rotateWithInterfaceOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)cam_setBorder;
- (void)cam_setBorderColor:(id)arg1;
- (void)cam_setBorderColor:(id)arg1 width:(double)arg2;
- (void)cam_setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)cam_setHidden:(BOOL)arg1 delay:(double)arg2 animated:(BOOL)arg3;
@end

