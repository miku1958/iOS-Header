//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/SBHMultiplexingViewControllerObserver-Protocol.h>
#import <SpringBoardHome/SBIconViewCustomImageViewControlling-Protocol.h>

@class APUIAppPredictionViewController, NSArray, NSHashTable, NSString, SBIcon, UIView, _UILegibilitySettings;
@protocol SBLeafIconDataSource;

@interface SBHAppPredictionWrapperViewController : UIViewController <SBHMultiplexingViewControllerObserver, SBIconViewCustomImageViewControlling>
{
    NSHashTable *_observers;
    BOOL _editing;
    BOOL _showingContextMenu;
    BOOL _overlapping;
    BOOL _userInteractionEnabled;
    BOOL _backgroundBlurEnabled;
    BOOL _showsSquareCorners;
    SBIcon *_icon;
    CDUnknownBlockType _backgroundViewProvider;
    unsigned long long _imageViewAlignment;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _pauseReasons;
    UIViewController *_multiplexingViewController;
    APUIAppPredictionViewController *_appPredictionViewController;
    NSString *_location;
    UIView *_containerView;
    UIView *_backgroundView;
    unsigned long long _backgroundAnimationCount;
    struct SBIconImageInfo _iconImageInfo;
}

@property (readonly, weak, nonatomic) APUIAppPredictionViewController *appPredictionViewController; // @synthesize appPredictionViewController=_appPredictionViewController;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (nonatomic) unsigned long long backgroundAnimationCount; // @synthesize backgroundAnimationCount=_backgroundAnimationCount;
@property (nonatomic, getter=isBackgroundBlurEnabled) BOOL backgroundBlurEnabled; // @synthesize backgroundBlurEnabled=_backgroundBlurEnabled;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (copy, nonatomic) CDUnknownBlockType backgroundViewProvider; // @synthesize backgroundViewProvider=_backgroundViewProvider;
@property (nonatomic) double brightness;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, nonatomic) double continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_editing;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SBIcon *icon; // @synthesize icon=_icon;
@property (nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
@property (nonatomic) unsigned long long imageViewAlignment; // @synthesize imageViewAlignment=_imageViewAlignment;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (copy, nonatomic) NSString *location; // @synthesize location=_location;
@property (readonly, nonatomic) UIViewController *multiplexingViewController; // @synthesize multiplexingViewController=_multiplexingViewController;
@property (nonatomic, getter=isOverlapping) BOOL overlapping; // @synthesize overlapping=_overlapping;
@property (nonatomic) unsigned long long pauseReasons; // @synthesize pauseReasons=_pauseReasons;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, getter=isPrivateModeEnabled) BOOL privateModeEnabled;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu; // @synthesize showingContextMenu=_showingContextMenu;
@property (nonatomic) BOOL showsSquareCorners; // @synthesize showsSquareCorners=_showsSquareCorners;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property (readonly, nonatomic) struct CGRect visibleBounds;
@property (readonly, nonatomic) id<SBLeafIconDataSource> visiblyActiveDataSource;
@property (nonatomic, getter=isVisiblySettled) BOOL visiblySettled;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (readonly, nonatomic) BOOL wantsLabelHidden;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)_setBackgroundViewWeighting:(double)arg1;
- (void)_updateAppPredictionViewControllerModeAnimated:(BOOL)arg1;
- (void)_updateWidgetViewHitTesting;
- (id)_widgetContextMenuController;
- (void)addCustomImageViewControllerObserver:(id)arg1;
- (void)didSelectApplicationShortcutItem:(id)arg1;
- (unsigned long long)expectedAppPredictionViewControllerMode;
- (id)initWithIcon:(id)arg1 location:(id)arg2 multiplexingViewController:(id)arg3 appPredictionViewController:(id)arg4;
- (void)loadView;
- (void)multiplexingViewControllerDidActivate:(id)arg1;
- (void)removeCustomImageViewControllerObserver:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)sourceView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willShowContextMenuAtLocation:(struct CGPoint)arg1;

@end

