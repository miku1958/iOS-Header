//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SPUISearchPluginWrapperInterface

@property (nonatomic, getter=isDisplayLayoutElementActive) BOOL displayLayoutElementActive;
@property (nonatomic) BOOL needsFakeStatusBarForModalPresentation;
@property (nonatomic) BOOL needsStatusBarLayoutLayer;

- (double)_accessibilityActivationAnimationStartDelay;
- (void)requestGestureResetAnimated:(BOOL)arg1;
- (void)searchViewControllerWillTriggerLaunch;
@end
