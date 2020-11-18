//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMExpandableMenuButtonDelegate-Protocol.h>

@class CAMElapsedTimeView, CAMExpandableMenuButton, CAMFilterButton, CAMFlashButton, CAMFlipButton, CAMFramerateIndicatorView, CAMHDRButton, CAMImageWell, CAMIrisButton, CAMModeDial, CAMTimerButton, CUShutterButton;
@protocol CAMControlVisibilityUpdateDelegate;

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate>
{
    id<CAMControlVisibilityUpdateDelegate> _visibilityUpdateDelegate;
    long long _backgroundStyle;
    UIView *_backgroundView;
    CUShutterButton *_shutterButton;
    CUShutterButton *_stillDuringVideoButton;
    CAMModeDial *_modeDial;
    CAMImageWell *_imageWell;
    CAMFilterButton *_filterButton;
    CAMFramerateIndicatorView *_framerateIndicatorView;
    CAMFlipButton *_flipButton;
    CAMFlashButton *_flashButton;
    CAMElapsedTimeView *_elapsedTimeView;
    CAMHDRButton *_HDRButton;
    CAMTimerButton *_timerButton;
    CAMIrisButton *_irisButton;
    CAMExpandableMenuButton *__expandedMenuButton;
}

@property (strong, nonatomic) CAMHDRButton *HDRButton; // @synthesize HDRButton=_HDRButton;
@property (strong, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton; // @synthesize _expandedMenuButton=__expandedMenuButton;
@property (nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) CAMElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property (strong, nonatomic) CAMFilterButton *filterButton; // @synthesize filterButton=_filterButton;
@property (strong, nonatomic) CAMFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property (strong, nonatomic) CAMFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property (strong, nonatomic) CAMFramerateIndicatorView *framerateIndicatorView; // @synthesize framerateIndicatorView=_framerateIndicatorView;
@property (strong, nonatomic) CAMImageWell *imageWell; // @synthesize imageWell=_imageWell;
@property (strong, nonatomic) CAMIrisButton *irisButton; // @synthesize irisButton=_irisButton;
@property (strong, nonatomic) CAMModeDial *modeDial; // @synthesize modeDial=_modeDial;
@property (strong, nonatomic) CUShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property (strong, nonatomic) CUShutterButton *stillDuringVideoButton; // @synthesize stillDuringVideoButton=_stillDuringVideoButton;
@property (strong, nonatomic) CAMTimerButton *timerButton; // @synthesize timerButton=_timerButton;
@property (weak, nonatomic) id<CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate; // @synthesize visibilityUpdateDelegate=_visibilityUpdateDelegate;

+ (BOOL)wantsVerticalBarForTraitCollection:(id)arg1;
- (void).cxx_destruct;
- (void)_commonCAMBottomBarInitialization;
- (id)_currentMenuButtons;
- (void)_layoutElapsedTimeViewForTraitCollection:(id)arg1;
- (void)_layoutFilterButtonForTraitCollection:(id)arg1;
- (void)_layoutFlipButtonForTraitCollection:(id)arg1;
- (void)_layoutFramerateIndicatorForTraitCollection:(id)arg1;
- (void)_layoutImageWellForTraitCollection:(id)arg1;
- (void)_layoutIrisButtonForTraitCollection:(id)arg1;
- (void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (void)_layoutModeDialForTraitCollection:(id)arg1;
- (void)_layoutShutterButtonForTraitCollection:(id)arg1;
- (void)_layoutStillDuringVideoButtonForTraitCollection:(id)arg1;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (void)_updateControlVisibilityAnimated:(BOOL)arg1;
- (void)_updateImageWellTappableEdgeInsets;
- (void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (void)expandMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2;
- (BOOL)shouldHideElapsedTimeViewForMode:(long long)arg1 device:(long long)arg2;
- (BOOL)shouldHideFlashButtonForMode:(long long)arg1 device:(long long)arg2;
- (BOOL)shouldHideHDRButtonForMode:(long long)arg1 device:(long long)arg2;
- (BOOL)shouldHideTimerButtonForMode:(long long)arg1 device:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end

