//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMExpandableMenuButtonDelegate-Protocol.h>
#import <CameraUI/CEKApertureButtonDelegate-Protocol.h>

@class CAMCreativeCameraButton, CAMExpandableMenuButton, CAMFlashButton, CAMFlipButton, CAMHDRButton, CAMImageWell, CAMLivePhotoButton, CAMModeDial, CAMTimerButton, CAMUtilityBar, CEKApertureButton, CUShutterButton, PUReviewScreenDoneButton, UIButton;
@protocol CAMControlVisibilityUpdateDelegate;

@interface CAMBottomBar : UIView <CAMExpandableMenuButtonDelegate, CEKApertureButtonDelegate>
{
    long long _layoutStyle;
    long long _backgroundStyle;
    UIView *_backgroundView;
    id<CAMControlVisibilityUpdateDelegate> _visibilityUpdateDelegate;
    CUShutterButton *_shutterButton;
    CUShutterButton *_stillDuringVideoButton;
    CAMModeDial *_modeDial;
    CAMImageWell *_imageWell;
    UIButton *_reviewButton;
    CAMCreativeCameraButton *_creativeCameraButton;
    PUReviewScreenDoneButton *_doneButton;
    CAMFlipButton *_flipButton;
    CAMFlashButton *_flashButton;
    CAMHDRButton *_HDRButton;
    CAMTimerButton *_timerButton;
    CAMLivePhotoButton *_livePhotoButton;
    CEKApertureButton *_apertureButton;
    CAMUtilityBar *_utilityBar;
    double _utilityBarExtensionDistance;
    CAMExpandableMenuButton *__expandedMenuButton;
}

@property (strong, nonatomic) CAMHDRButton *HDRButton; // @synthesize HDRButton=_HDRButton;
@property (strong, nonatomic, setter=_setExpandedMenuButton:) CAMExpandableMenuButton *_expandedMenuButton; // @synthesize _expandedMenuButton=__expandedMenuButton;
@property (strong, nonatomic) CEKApertureButton *apertureButton; // @synthesize apertureButton=_apertureButton;
@property (nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property (readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) CAMCreativeCameraButton *creativeCameraButton; // @synthesize creativeCameraButton=_creativeCameraButton;
@property (strong, nonatomic) PUReviewScreenDoneButton *doneButton; // @synthesize doneButton=_doneButton;
@property (strong, nonatomic) CAMFlashButton *flashButton; // @synthesize flashButton=_flashButton;
@property (strong, nonatomic) CAMFlipButton *flipButton; // @synthesize flipButton=_flipButton;
@property (strong, nonatomic) CAMImageWell *imageWell; // @synthesize imageWell=_imageWell;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (strong, nonatomic) CAMLivePhotoButton *livePhotoButton; // @synthesize livePhotoButton=_livePhotoButton;
@property (strong, nonatomic) CAMModeDial *modeDial; // @synthesize modeDial=_modeDial;
@property (strong, nonatomic) UIButton *reviewButton; // @synthesize reviewButton=_reviewButton;
@property (strong, nonatomic) CUShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
@property (strong, nonatomic) CUShutterButton *stillDuringVideoButton; // @synthesize stillDuringVideoButton=_stillDuringVideoButton;
@property (strong, nonatomic) CAMTimerButton *timerButton; // @synthesize timerButton=_timerButton;
@property (strong, nonatomic) CAMUtilityBar *utilityBar; // @synthesize utilityBar=_utilityBar;
@property (nonatomic) double utilityBarExtensionDistance; // @synthesize utilityBarExtensionDistance=_utilityBarExtensionDistance;
@property (weak, nonatomic) id<CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate; // @synthesize visibilityUpdateDelegate=_visibilityUpdateDelegate;

+ (struct CGRect)shutterButtonAlignmentRectInBounds:(struct CGRect)arg1 forLayoutStyle:(long long)arg2;
+ (BOOL)wantsVerticalBarForLayoutStyle:(long long)arg1;
- (void).cxx_destruct;
- (void)_commonCAMBottomBarInitializationInitWithLayoutStyle:(long long)arg1;
- (id)_currentMenuButtons;
- (void)_ensureSubviewOrdering;
- (void)_iterateViewsInHUDManager:(id)arg1 forHUDItem:(CDUnknownBlockType)arg2;
- (void)_layoutCreativeCameraButtonForLayoutStyle:(long long)arg1;
- (void)_layoutDoneButtonForLayoutStyle:(long long)arg1;
- (void)_layoutFlipButtonForLayoutStyle:(long long)arg1;
- (void)_layoutImageWellForLayoutStyle:(long long)arg1;
- (void)_layoutMenuButtons:(id)arg1 apply:(BOOL)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(struct CGRect *)arg5;
- (void)_layoutModeDialForLayoutStyle:(long long)arg1;
- (void)_layoutReviewButtonForLayoutStyle:(long long)arg1;
- (void)_layoutShutterButtonForLayoutStyle:(long long)arg1;
- (void)_layoutStillDuringVideoButtonForLayoutStyle:(long long)arg1;
- (void)_layoutUtilityBarForLayoutStyle:(long long)arg1;
- (double)_opacityForBackgroundStyle:(long long)arg1;
- (void)_updateControlVisibilityAnimated:(BOOL)arg1;
- (void)_updateCreativeCameraButtonTappableEdgeInsets;
- (void)_updateFlipButtonTappableEdgeInsets;
- (void)_updateImageWellTappableEdgeInsets;
- (void)apertureButtonNeedsLayout:(id)arg1 animated:(BOOL)arg2;
- (void)collapseMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)collapsedFrameForMenuButton:(id)arg1;
- (void)expandMenuButton:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)expandedFrameForMenuButton:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hudItemForAccessibilityHUDManager:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)selectedByAccessibilityHUDManager:(id)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2;
- (id)touchingRecognizersToCancel;

@end

