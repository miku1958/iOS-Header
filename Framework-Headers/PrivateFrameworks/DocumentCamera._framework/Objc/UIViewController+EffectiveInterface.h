//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface UIViewController (EffectiveInterface)

@property (readonly, nonatomic) BOOL dc_isRTL;

+ (void)dc_enableUIViewAnimations:(BOOL)arg1 forBlock:(CDUnknownBlockType)arg2;
- (long long)dc_effectiveInterfaceOrientation;
- (void)dc_getEffectiveInterfaceOrientation:(long long *)arg1 andEffectiveInterfaceIdiom:(long long *)arg2;
- (BOOL)dc_isViewVisible;
- (double)dc_safeAreaDistanceFromBottom;
- (double)dc_safeAreaDistanceFromTop;
- (id)dc_safeAreaLayoutGuide;
- (void)dc_showViewController:(id)arg1 animated:(BOOL)arg2 sender:(id)arg3;
@end
