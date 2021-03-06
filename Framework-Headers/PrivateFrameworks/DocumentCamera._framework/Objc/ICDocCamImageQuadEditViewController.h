//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentCamera/DCUnsavedDataDelegate-Protocol.h>
#import <DocumentCamera/ICDocCamImageQuadEditOverlayDelegate-Protocol.h>
#import <DocumentCamera/UIScrollViewDelegate-Protocol.h>

@class CAShapeLayer, ICDocCamImageQuad, ICDocCamImageQuadEditImageView, ICDocCamImageQuadEditOverlay, NSLayoutConstraint, NSNumber, NSString, UIBezierPath, UIButton, UIColor, UIImage, UILabel, UIScrollView, UIView;
@protocol DCScanDataDelegate;

@interface ICDocCamImageQuadEditViewController : UIViewController <UIScrollViewDelegate, ICDocCamImageQuadEditOverlayDelegate, DCUnsavedDataDelegate>
{
    BOOL _showImageAsAspectFit;
    BOOL _inCaptureMode;
    BOOL _didAdjustQuad;
    BOOL _shouldAdjustForApectFitIfNecessary;
    BOOL _invisibleButtonContainer;
    BOOL _didPressSave;
    BOOL _didCallCompletion;
    UIScrollView *_scrollView;
    ICDocCamImageQuadEditImageView *_imageView;
    ICDocCamImageQuadEditImageView *_backgroundImageView;
    UIView *_buttonContainer;
    ICDocCamImageQuadEditOverlay *_overlay;
    double _knobHeight;
    UIColor *_knobColor;
    UIView *_placard;
    UIImage *_image;
    id<DCScanDataDelegate> _scanDataDelegate;
    CAShapeLayer *_overlayMask;
    UIBezierPath *_overlayMaskPath;
    ICDocCamImageQuad *_quad;
    ICDocCamImageQuad *_initialQuad;
    long long _orientation;
    CDUnknownBlockType _completionHandler;
    UIButton *_cancelButton;
    UIButton *_saveButton;
    UILabel *_userPromptLabel;
    NSLayoutConstraint *_buttonContainerHeightConstraint;
    NSNumber *_startOrientationIsPortrait;
}

@property (strong, nonatomic) ICDocCamImageQuadEditImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property (weak, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property (weak, nonatomic) NSLayoutConstraint *buttonContainerHeightConstraint; // @synthesize buttonContainerHeightConstraint=_buttonContainerHeightConstraint;
@property (weak, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didAdjustQuad; // @synthesize didAdjustQuad=_didAdjustQuad;
@property (nonatomic) BOOL didCallCompletion; // @synthesize didCallCompletion=_didCallCompletion;
@property (nonatomic) BOOL didPressSave; // @synthesize didPressSave=_didPressSave;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) ICDocCamImageQuadEditImageView *imageView; // @synthesize imageView=_imageView;
@property (nonatomic) BOOL inCaptureMode; // @synthesize inCaptureMode=_inCaptureMode;
@property (strong, nonatomic) ICDocCamImageQuad *initialQuad; // @synthesize initialQuad=_initialQuad;
@property (nonatomic) BOOL invisibleButtonContainer; // @synthesize invisibleButtonContainer=_invisibleButtonContainer;
@property (readonly, nonatomic) UIColor *knobColor; // @synthesize knobColor=_knobColor;
@property (readonly, nonatomic) double knobHeight; // @synthesize knobHeight=_knobHeight;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (strong, nonatomic) ICDocCamImageQuadEditOverlay *overlay; // @synthesize overlay=_overlay;
@property (strong, nonatomic) CAShapeLayer *overlayMask; // @synthesize overlayMask=_overlayMask;
@property (strong, nonatomic) UIBezierPath *overlayMaskPath; // @synthesize overlayMaskPath=_overlayMaskPath;
@property (weak, nonatomic) UIView *placard; // @synthesize placard=_placard;
@property (strong, nonatomic) ICDocCamImageQuad *quad; // @synthesize quad=_quad;
@property (weak, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property (readonly, nonatomic) id<DCScanDataDelegate> scanDataDelegate; // @synthesize scanDataDelegate=_scanDataDelegate;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) BOOL shouldAdjustForApectFitIfNecessary; // @synthesize shouldAdjustForApectFitIfNecessary=_shouldAdjustForApectFitIfNecessary;
@property (nonatomic) BOOL showImageAsAspectFit; // @synthesize showImageAsAspectFit=_showImageAsAspectFit;
@property (strong, nonatomic) NSNumber *startOrientationIsPortrait; // @synthesize startOrientationIsPortrait=_startOrientationIsPortrait;
@property (readonly) Class superclass;
@property (weak, nonatomic) UILabel *userPromptLabel; // @synthesize userPromptLabel=_userPromptLabel;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)adjustedQuad;
- (void)applicationWillResignActive:(id)arg1;
- (void)callCompletionHandler:(BOOL)arg1 withImage:(id)arg2 quad:(id)arg3 preparingForDismissal:(BOOL)arg4;
- (void)cancelButtonPressed:(id)arg1;
- (void)centerAndScaleImageInScrollView;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (double)currentZoomFactorForOverlay;
- (void)dealloc;
- (id)finalQuad;
- (id)finalQuadFromOverlay;
- (struct CGRect)imageFrameInOverlayCoordinates;
- (id)initWithImage:(id)arg1 quad:(id)arg2 scanDataDelegate:(id)arg3 orientation:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)overlayDidLayout:(id)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForDismissal;
- (id)quadForOverlay;
- (id)quadForOverlay:(id)arg1;
- (struct CGRect)rectAvailableForDefaultRect;
- (void)saveButtonPressed:(id)arg1;
- (void)scanWasDeleted:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)selectedKnobDidChange:(id)arg1;
- (void)selectedKnobDidPanToRect:(struct CGRect)arg1;
- (void)setUpImageView;
- (void)setupAccessibility;
- (id)uiInitialQuadForOverlay:(id)arg1;
- (id)uiQuadForOverlay:(id)arg1;
- (struct CGRect)unitImageRectForOverlayRect:(struct CGRect)arg1;
- (void)updateButtonTitles;
- (void)updateFonts;
- (void)updateOverlayScrimMask;
- (void)updateToAspectFitIfNecessary;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

