//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUPhotoEditToolController.h>

#import <PhotosUI/PUAdjustmentViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUAdjustmentsDataSourceDelegate-Protocol.h>
#import <PhotosUI/PUAdjustmentsToolControllerPPT-Protocol.h>
#import <PhotosUI/UIGestureRecognizerDelegate-Protocol.h>

@class CEKBadgeTextView, NSString, PUAdjustmentsDataSource, PUAdjustmentsToolControllerSpec, PUAdjustmentsViewController, PUAutoAdjustmentController, PXUISnappingController, UIView, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface PUAdjustmentsToolController : PUPhotoEditToolController <UIGestureRecognizerDelegate, PUAdjustmentsDataSourceDelegate, PUAdjustmentViewControllerDelegate, PUAdjustmentsToolControllerPPT>
{
    PUAdjustmentsViewController *_adjustmentsViewController;
    UIView *_adjustmentPickerView;
    _UIBackdropView *_backdropBackgroundView;
    UIView *_solidBackgroundView;
    BOOL _useTranslucentBackground;
    BOOL _ppt_EverAdjusted;
    double _ppt_scrollDelta;
    long long _viewLoadingStartTime;
    PUAutoAdjustmentController *_autoAdjustmentController;
    PXUISnappingController *__snappingController;
    PUAdjustmentsDataSource *_dataSource;
    CEKBadgeTextView *_badgeView;
}

@property (strong, nonatomic, setter=_setSnappingController:) PXUISnappingController *_snappingController; // @synthesize _snappingController=__snappingController;
@property (strong, nonatomic) PUAutoAdjustmentController *autoAdjustmentController; // @synthesize autoAdjustmentController=_autoAdjustmentController;
@property (strong, nonatomic) CEKBadgeTextView *badgeView; // @synthesize badgeView=_badgeView;
@property (strong, nonatomic) PUAdjustmentsDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUAdjustmentsToolControllerSpec *toolControllerSpec; // @dynamic toolControllerSpec;

- (void).cxx_destruct;
- (void)_ppt_scrollAfterDelay:(CDUnknownBlockType)arg1;
- (double)_sliderLength;
- (void)_updateBackgroundAnimated:(BOOL)arg1;
- (void)_updateBadgeTextWithInfo:(id)arg1;
- (void)adjustmentsDataChanged:(id)arg1;
- (id)adjustmentsRenderer:(id)arg1;
- (void)adjustmentsViewControllerDidUpdateSelectedControl:(id)arg1;
- (void)autoEnhanceActionStateChanged;
- (BOOL)canResetToDefaultValue;
- (id)centerToolbarView;
- (void)compositionControllerDidChangeForAdjustments:(id)arg1;
- (void)didBecomeActiveTool;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (BOOL)installTogglePreviewGestureRecognizer:(id)arg1;
- (id)localizedName;
- (id)localizedResetToolActionTitle;
- (void)mediaViewIsReady;
- (void)ppt_scrollSelectedSliderByDelta;
- (void)ppt_selectBWSlider:(CDUnknownBlockType)arg1;
- (void)ppt_selectColorSlider:(CDUnknownBlockType)arg1;
- (void)ppt_selectLightSlider:(CDUnknownBlockType)arg1;
- (void)ppt_setSteps:(long long)arg1;
- (void)resetToDefaultValueAnimated:(BOOL)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setUseGradientBackground:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setupWithAsset:(id)arg1 compositionController:(id)arg2 editSource:(id)arg3 overcaptureEditSource:(id)arg4 valuesCalculator:(id)arg5;
- (void)specDidChange;
- (long long)toolControllerTag;
- (id)toolbarIcon;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAdjustmentControls;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsZoomAndPanEnabled;
- (void)willBecomeActiveTool;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

