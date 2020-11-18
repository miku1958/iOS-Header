//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BKSAnimationFenceHandle, BSAnimationSettings, NSArray, NSData, NSString, NSValue, UIFocusMovementAction, _UITextServiceSessionContext;
@protocol UITimingCurveProvider;

@protocol _UIRemoteViewController_ViewControllerOperatorInterface
- (void)__dismissTextServiceSessionAnimated:(BOOL)arg1;
- (void)__handleFocusMovementAction:(UIFocusMovementAction *)arg1;
- (void)__setSupportedInterfaceOrientations:(NSArray *)arg1;
- (void)__setViewServiceIsDisplayingPopover:(BOOL)arg1;
- (void)__showEditAlertViewWithToken:(long long)arg1 canUndo:(BOOL)arg2 canRedo:(BOOL)arg3;
- (void)__showServiceForText:(NSString *)arg1 selectedTextRangeValue:(NSValue *)arg2 type:(long long)arg3 fromRectValue:(NSValue *)arg4 replyHandler:(void (^)(id, NSError *))arg5;
- (void)__showServiceForText:(NSString *)arg1 type:(long long)arg2 fromRectValue:(NSValue *)arg3 replyHandler:(void (^)(id, NSError *))arg4;
- (void)__showServiceForType:(long long)arg1 withContext:(_UITextServiceSessionContext *)arg2 replyHandler:(void (^)(id, NSError *))arg3;
- (void)__trampolineButtonPressData:(NSData *)arg1 canceled:(BOOL)arg2;
- (void)__viewServiceCompleteInteractiveSheetTransitionInHost:(BOOL)arg1 immediately:(BOOL)arg2 offset:(double)arg3 duration:(double)arg4 timingCurve:(id<UITimingCurveProvider>)arg5;
- (void)__viewServiceDidPromoteFirstResponder;
- (void)__viewServiceDidRegisterScrollToTopView;
- (void)__viewServiceDidUnregisterScrollToTopView;
- (void)__viewServiceDidUpdatePreferredScreenEdgesDeferringSystemGestures:(long long)arg1;
- (void)__viewServiceDidUpdatePreferredStatusBarStyle:(long long)arg1 preferredStatusBarVisibility:(int)arg2 updateAnimation:(long long)arg3 currentAnimationSettings:(BSAnimationSettings *)arg4;
- (void)__viewServiceDidUpdatePreferredUserInterfaceStyle:(long long)arg1;
- (void)__viewServiceDidUpdatePreferredWhitePointAdaptationStyle:(long long)arg1 animationSettings:(BSAnimationSettings *)arg2;
- (void)__viewServiceDidUpdatePrefersHomeIndicatorAutoHidden:(BOOL)arg1;
- (void)__viewServiceInstrinsicContentSizeDidChange:(struct CGSize)arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServicePopoverDidChangeContentSize:(struct CGSize)arg1 animated:(BOOL)arg2 fence:(BKSAnimationFenceHandle *)arg3 withReplyHandler:(void (^)(struct CGSize))arg4;
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)arg1;
- (void)__viewServicePreferredContentSizeDidChange:(struct CGSize)arg1 fence:(BKSAnimationFenceHandle *)arg2;
- (void)__viewServiceStartInteractiveSheetTransitionInHostWithProgress:(double)arg1 offset:(double)arg2;
- (void)__viewServiceUpdateInteractiveSheetTransitionInHostWithProgress:(double)arg1 offset:(double)arg2;
@end

