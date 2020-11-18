//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraKit/CMKExpandableMenuButtonDelegate-Protocol.h>

@class CMKElapsedTimeView, CMKExpandableMenuButton, CMKFilterButton, CMKFlashButton, CMKFlipButton, CMKHDRButton, CMKImageWell, CMKModeDial, CMKShutterButton, CMKSlalomIndicatorView, CMKTimerButton, UIButton;
@protocol CMKBottomBarDelegate;

@interface CMKBottomBar : UIView <CMKExpandableMenuButtonDelegate>
{
    id<CMKBottomBarDelegate> _delegate;
    long long _orientation;
    long long _backgroundStyle;
    UIView *_backgroundView;
    CMKModeDial *_modeDial;
    CMKImageWell *_imageWell;
    CMKShutterButton *_stillDuringVideoButton;
    CMKShutterButton *_shutterButton;
    CMKFilterButton *_filterButton;
    CMKFlipButton *_flipButton;
    CMKFlashButton *_flashButton;
    CMKElapsedTimeView *_elapsedTimeView;
    CMKHDRButton *_HDRButton;
    CMKTimerButton *_timerButton;
    CMKSlalomIndicatorView *_slalomIndicatorView;
    UIButton *_cancelButton;
    CMKExpandableMenuButton *__expandedMenuButton;
    UIView *__shutterButtomBottomLayoutSpacer;
    UIView *__imageWellBottomLayoutSpacer;
    UIView *__filterButtonBottomLayoutSpacer;
    UIView *__slalomIndicatorBottomLayoutSpacer;
    UIView *__stillDuringVideoButtonBottomLayoutSpacer;
    UIView *__elapsedTimeViewCenteringLayoutSpacer;
    UIView *__hdrButtonCenteringLayoutSpacer;
}

@property (strong, nonatomic) CMKHDRButton *HDRButton; // @synthesize HDRButton=_HDRButton;
@property (readonly, nonatomic) UIView *_elapsedTimeViewCenteringLayoutSpacer; // @synthesize _elapsedTimeViewCenteringLayoutSpacer=__elapsedTimeViewCenteringLayoutSpacer;
@property (strong, nonatomic, setter=_setExpandedMenuButton:) CMKExpandableMenuButton *_expandedMenuButton; // @synthesize _expandedMenuButton=__expandedMenuButton;
@property (readonly, nonatomic) UIView *_filterButtonBottomLayoutSpacer; // @synthesize _filterButtonBottomLayoutSpacer=__filterButtonBottomLayoutSpacer;
@property (readonly, nonatomic) UIView *_hdrButtonCenteringLayoutSpacer; // @synthesize _hdrButtonCenteringLayoutSpacer=__hdrButtonCenteringLayoutSpacer;
@property (readonly, nonatomic) UIView *_imageWellBottomLayoutSpacer; // @synthesize _imageWellBottomLayoutSpacer=__imageWellBottomLayoutSpacer;
@property (readonly, nonatomic) UIView *_shutterButtomBottomLayoutSpacer; // @synthesize _shutterButtomBottomLayoutSpacer=__shutterButtomBottomLayoutSpacer;
@property (readonly, nonatomic) UIView *_slalomIndicatorBottomLayoutSpacer; // @synthesize _slalomIndicatorBottomLayoutSpacer=__slalomIndicatorBottomLayoutSpacer;
@property (readonly, nonatomic) UIView *_stillDuringVideoButtonBottomLayoutSpacer; // @synthesize _stillDuringVideoButtonBottomLayoutSpacer=__stillDuringVideoButtonBottomLayoutSpacer;
@property (nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property (weak, nonatomic) id<CMKBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) CMKElapsedTimeView *elapsedTimeView; // @synthesize elapsedTimeView=_elapsedTimeView;
@property (strong, nonatomic) CMKFilterButton *filterButton; // @synthesize filterButton=_filterButton;
@property (strong, nonatomic) CMKFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property (strong, nonatomic) CMKFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property (strong, nonatomic) CMKImageWell *imageWell; // @synthesize imageWell=_imageWell;
@property (strong, nonatomic) CMKModeDial *modeDial; // @synthesize modeDial=_modeDial;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (strong, nonatomic) CMKShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property (strong, nonatomic) CMKSlalomIndicatorView *slalomIndicatorView; // @synthesize slalomIndicatorView=_slalomIndicatorView;
@property (strong, nonatomic) CMKShutterButton *stillDuringVideoButton; // @synthesize stillDuringVideoButton=_stillDuringVideoButton;
@property (strong, nonatomic) CMKTimerButton *timerButton; // @synthesize timerButton=_timerButton;

+ (BOOL)requiresConstraintBasedLayout;
- (void).cxx_destruct;
- (void)_commonCMKBottomBarInitialization;
- (id)_currentMenuButtons;
- (void)_layoutForHorizontalOrientation;
- (void)_layoutForVerticalOrientation;
- (void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (void)_removeAllConstraints;
- (void)_setupHorizontalBackgroundViewConstraints;
- (void)_setupHorizontalCancelButtonConstraints;
- (void)_setupHorizontalConstraints;
- (void)_setupHorizontalFilterButtonConstraints;
- (void)_setupHorizontalImageWellConstraints;
- (void)_setupHorizontalModeDialConstraints;
- (void)_setupHorizontalShutterButtonConstraints;
- (void)_setupHorizontalSlalomIndicatorConstraints;
- (void)_setupHorizontalStillDuringVideoButtonConstraints;
- (void)_setupVerticalBackgroundViewConstraints;
- (void)_setupVerticalCancelButtonConstraints;
- (void)_setupVerticalConstraints;
- (void)_setupVerticalElapsedTimeViewConstraints;
- (void)_setupVerticalFlipButtonConstraints;
- (void)_setupVerticalImageWellConstraints;
- (void)_setupVerticalModeDialConstraints;
- (void)_setupVerticalShutterButtonConstraints;
- (void)_setupVerticalSlalomIndicatorConstraints;
- (BOOL)_shouldHideElapsedTimeView;
- (BOOL)_shouldHideFlashButton;
- (BOOL)_shouldHideHDRButton;
- (BOOL)_shouldHideTimerButton;
- (void)_updateBackgroundStyleAnimated:(BOOL)arg1;
- (void)_updateHiddenViewsForButtonExpansionAnimated:(BOOL)arg1;
- (void)_updateImageWellInsetsForOrientation;
- (void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (void)expandMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithOrientation:(long long)arg1;
- (void)layoutSubviews;
- (void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;

@end

