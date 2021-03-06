//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/SBHOccludable-Protocol.h>
#import <SpringBoard/SBHWidgetSheetViewControllerPresenter-Protocol.h>
#import <SpringBoard/WGWidgetGroupViewControllerDelegate-Protocol.h>

@class MTMaterialView, NSLayoutConstraint, NSString, SBFTodayGestureSettings, SBHRootFolderVisualConfiguration, SBHRootSidebarController, SBTitledHomeScreenButton, UIViewFloatAnimatableProperty;
@protocol SBHOccludable, SBHomeScreenOverlayViewControllerDelegate;

@interface SBHomeScreenOverlayViewController : UIViewController <WGWidgetGroupViewControllerDelegate, SBHWidgetSheetViewControllerPresenter, SBHOccludable>
{
    BOOL _occluded;
    BOOL _fromLeading;
    BOOL _shouldUseReducedMotionAnimation;
    BOOL _suppressesExtraEditingButtons;
    BOOL _showsDoneButton;
    BOOL _showsAddWidgetButton;
    double _titledButtonsAlpha;
    id<SBHomeScreenOverlayViewControllerDelegate> _delegate;
    double _presentationProgress;
    SBHRootSidebarController *_contentViewController;
    UIViewController<SBHOccludable> *_leftSidebarViewController;
    UIViewController<SBHOccludable> *_rightSidebarViewController;
    MTMaterialView *_backgroundView;
    SBHRootFolderVisualConfiguration *_rootFolderVisualConfiguration;
    NSLayoutConstraint *_contentLeadingConstraint;
    NSLayoutConstraint *_contentWidthConstraint;
    SBTitledHomeScreenButton *_doneButton;
    SBTitledHomeScreenButton *_widgetButton;
    SBFTodayGestureSettings *_gestureSettings;
    UIViewFloatAnimatableProperty *_overlayPresentationFloatAnimatableProperty;
}

@property (readonly, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) NSLayoutConstraint *contentLeadingConstraint; // @synthesize contentLeadingConstraint=_contentLeadingConstraint;
@property (readonly, nonatomic) struct CGRect contentRect;
@property (readonly, nonatomic) SBHRootSidebarController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (readonly, nonatomic) double contentWidth;
@property (strong, nonatomic) NSLayoutConstraint *contentWidthConstraint; // @synthesize contentWidthConstraint=_contentWidthConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBHomeScreenOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SBTitledHomeScreenButton *doneButton; // @synthesize doneButton=_doneButton;
@property (nonatomic, getter=isFromLeading) BOOL fromLeading; // @synthesize fromLeading=_fromLeading;
@property (strong, nonatomic) SBFTodayGestureSettings *gestureSettings; // @synthesize gestureSettings=_gestureSettings;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHeaderVisible) BOOL headerVisible;
@property (readonly, nonatomic) double layerPresentationProgress;
@property (strong, nonatomic) UIViewController<SBHOccludable> *leftSidebarViewController; // @synthesize leftSidebarViewController=_leftSidebarViewController;
@property (nonatomic, getter=isOccluded) BOOL occluded; // @synthesize occluded=_occluded;
@property (strong, nonatomic) UIViewFloatAnimatableProperty *overlayPresentationFloatAnimatableProperty; // @synthesize overlayPresentationFloatAnimatableProperty=_overlayPresentationFloatAnimatableProperty;
@property (nonatomic) double presentationProgress; // @synthesize presentationProgress=_presentationProgress;
@property (strong, nonatomic) UIViewController<SBHOccludable> *rightSidebarViewController; // @synthesize rightSidebarViewController=_rightSidebarViewController;
@property (readonly, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration; // @synthesize rootFolderVisualConfiguration=_rootFolderVisualConfiguration;
@property (nonatomic) BOOL shouldUseReducedMotionAnimation; // @synthesize shouldUseReducedMotionAnimation=_shouldUseReducedMotionAnimation;
@property (nonatomic) BOOL showsAddWidgetButton; // @synthesize showsAddWidgetButton=_showsAddWidgetButton;
@property (nonatomic) BOOL showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesExtraEditingButtons; // @synthesize suppressesExtraEditingButtons=_suppressesExtraEditingButtons;
@property (nonatomic) double titledButtonsAlpha; // @synthesize titledButtonsAlpha=_titledButtonsAlpha;
@property (strong, nonatomic) SBTitledHomeScreenButton *widgetButton; // @synthesize widgetButton=_widgetButton;

- (void).cxx_destruct;
- (void)_button:(id)arg1 appearAnimated:(BOOL)arg2;
- (void)_button:(id)arg1 disappearAnimated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_canShowWhileLocked;
- (void)_configureMatchMoveAnimationForBackgroundView:(id)arg1 withSourceView:(id)arg2;
- (struct CGSize)_suggestedTodayViewSizeForBounds:(struct CGRect)arg1;
- (void)_updateConstraintsForPresentationProgress:(double)arg1;
- (void)_updateLayoutForEditButtons;
- (void)animatePresentationProgress:(double)arg1 withGestureLiftOffVelocity:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)bs_beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)bs_endAppearanceTransition;
- (BOOL)bs_endAppearanceTransition:(BOOL)arg1;
- (double)contentWidthWithContainerWidth:(double)arg1;
- (void)doneButtonTriggered:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)makeTitledButtonOfClass:(Class)arg1;
- (id)newHomeScreenButtonBackgroundView;
- (unsigned long long)presenterType;
- (void)setPresentationProgress:(double)arg1 interactive:(BOOL)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setPresentationProgress:(double)arg1 withAnimationUpdateMode:(long long)arg2 overrideAnimationSettings:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setShowsAddWidgetButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShowsDoneButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSuppressesEditingStateForListView:(BOOL)arg1;
- (void)updateExtraButtonVisibilityAnimated:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)widgetButtonTriggered:(id)arg1;
- (struct CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;

@end

