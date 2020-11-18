//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UILayoutGuide;

@interface AVPlayerViewControllerCustomControlsView : UIView
{
    BOOL _needsInitialConstraints;
    NSLayoutConstraint *_transportControlsVisibleConstraint;
    NSLayoutConstraint *_transportControlsHiddenConstraint;
    NSLayoutConstraint *_volumeControlsVisibleConstraint;
    NSLayoutConstraint *_volumeControlsHiddenConstraint;
    BOOL _areTransportControlsVisible;
    BOOL _areVolumeControlsVisible;
    UILayoutGuide *_transportControlsAreaLayoutGuide;
    UILayoutGuide *_displayModeControlsAreaLayoutGuide;
    UILayoutGuide *_volumeControlsAreaLayoutGuide;
    UILayoutGuide *_unobscuredCenterAreaLayoutGuide;
    UILayoutGuide *_animatedUnobscuredCenterAreaLayoutGuide;
    UILayoutGuide *_unobscuredTopAreaLayoutGuide;
    UIView *_transportControlsAreaLayoutGuideProvidingView;
    UIView *_displayModeControlsAreaLayoutGuideProvidingView;
    UIView *_volumeControlsAreaLayoutGuideProvidingView;
    UIView *_unobscuredTopAreaLayoutGuideProvidingView;
    UIView *_unobscuredCenterAreaLayoutGuideProvidingView;
    UIView *_animatedUnobscuredCenterAreaLayoutGuideProvidingView;
}

@property (readonly, nonatomic) UILayoutGuide *animatedUnobscuredCenterAreaLayoutGuide; // @synthesize animatedUnobscuredCenterAreaLayoutGuide=_animatedUnobscuredCenterAreaLayoutGuide;
@property (readonly, nonatomic) UIView *animatedUnobscuredCenterAreaLayoutGuideProvidingView; // @synthesize animatedUnobscuredCenterAreaLayoutGuideProvidingView=_animatedUnobscuredCenterAreaLayoutGuideProvidingView;
@property (nonatomic) BOOL areTransportControlsVisible; // @synthesize areTransportControlsVisible=_areTransportControlsVisible;
@property (nonatomic) BOOL areVolumeControlsVisible; // @synthesize areVolumeControlsVisible=_areVolumeControlsVisible;
@property (readonly, nonatomic) UILayoutGuide *displayModeControlsAreaLayoutGuide; // @synthesize displayModeControlsAreaLayoutGuide=_displayModeControlsAreaLayoutGuide;
@property (readonly, nonatomic) UIView *displayModeControlsAreaLayoutGuideProvidingView; // @synthesize displayModeControlsAreaLayoutGuideProvidingView=_displayModeControlsAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UILayoutGuide *transportControlsAreaLayoutGuide; // @synthesize transportControlsAreaLayoutGuide=_transportControlsAreaLayoutGuide;
@property (readonly, nonatomic) UIView *transportControlsAreaLayoutGuideProvidingView; // @synthesize transportControlsAreaLayoutGuideProvidingView=_transportControlsAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UILayoutGuide *unobscuredCenterAreaLayoutGuide; // @synthesize unobscuredCenterAreaLayoutGuide=_unobscuredCenterAreaLayoutGuide;
@property (readonly, nonatomic) UIView *unobscuredCenterAreaLayoutGuideProvidingView; // @synthesize unobscuredCenterAreaLayoutGuideProvidingView=_unobscuredCenterAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UILayoutGuide *unobscuredTopAreaLayoutGuide; // @synthesize unobscuredTopAreaLayoutGuide=_unobscuredTopAreaLayoutGuide;
@property (readonly, nonatomic) UIView *unobscuredTopAreaLayoutGuideProvidingView; // @synthesize unobscuredTopAreaLayoutGuideProvidingView=_unobscuredTopAreaLayoutGuideProvidingView;
@property (readonly, nonatomic) UILayoutGuide *volumeControlsAreaLayoutGuide; // @synthesize volumeControlsAreaLayoutGuide=_volumeControlsAreaLayoutGuide;
@property (readonly, nonatomic) UIView *volumeControlsAreaLayoutGuideProvidingView; // @synthesize volumeControlsAreaLayoutGuideProvidingView=_volumeControlsAreaLayoutGuideProvidingView;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end
