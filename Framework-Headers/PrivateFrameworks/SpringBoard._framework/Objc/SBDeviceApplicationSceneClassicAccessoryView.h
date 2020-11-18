//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>

@class NSLayoutConstraint, NSString, SBDeviceApplicationSceneHandle, SBOrientationTransformWrapperView, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, UIApplicationSceneSettingsDiffInspector, UIButton;
@protocol SBDeviceApplicationSceneClassicAccessoryViewDelegate;

@interface SBDeviceApplicationSceneClassicAccessoryView : UIView <BSInvalidatable>
{
    SBDeviceApplicationSceneHandle *_sceneHandle;
    id<SBDeviceApplicationSceneClassicAccessoryViewDelegate> _delegate;
    UIView *_zoomButtonWrapperView;
    UIButton *_zoomButton;
    long long _buttonOrientation;
    SBOrientationTransformWrapperView *_transformWrapperView;
    SBSceneHandleBlockObserver *_sceneHandleObserver;
    UIApplicationSceneClientSettingsDiffInspector *_clientSettingsInspector;
    UIApplicationSceneSettingsDiffInspector *_sceneSettingsInspector;
    NSLayoutConstraint *_zoomButtonHorizontalConstraint;
    NSLayoutConstraint *_zoomButtonVerticalConstraint;
    NSLayoutConstraint *_zoomButtonWidthConstraint;
    NSLayoutConstraint *_zoomButtonHeightConstraint;
}

@property (nonatomic) long long buttonOrientation; // @synthesize buttonOrientation=_buttonOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBDeviceApplicationSceneClassicAccessoryViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_changeZoom:(id)arg1;
- (BOOL)_isZoomed;
- (void)_sceneHandleDidUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2;
- (void)_sceneHandleDidUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2;
- (void)_setupPositioningAndRotationForInterfaceOrientation:(long long)arg1 offscreen:(BOOL)arg2;
- (void)_updateOrientationFrom:(long long)arg1 toOrientation:(long long)arg2 animationSettings:(id)arg3;
- (void)_updateZoomButton;
- (void)_updateZoomButtonVisibilityAnimated:(BOOL)arg1;
- (BOOL)_zoomButtonShouldBeVisible;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 sceneHandle:(id)arg2;
- (void)invalidate;
- (void)layoutSubviews;

@end
