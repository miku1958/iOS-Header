//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AXHearingSupport/HACCContentModuleDelegate-Protocol.h>
#import <AXHearingSupport/UIGestureRecognizerDelegate-Protocol.h>

@class AXRemoteHearingAidDevice, CCUIContentModuleContext, HACCChevronView, HACCContentViewController, MTMaterialView, NSMutableArray, NSMutableDictionary, NSString, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;
@protocol AXHAShortcutUpdateProtocol;

@interface HACCShortcutViewController : UIViewController <UIGestureRecognizerDelegate, HACCContentModuleDelegate>
{
    double _dismissalGestureYOffset;
    struct CGPoint _backgroundViewDismissalOrigin;
    BOOL _expanded;
    BOOL _bluetoothAvailable;
    id<AXHAShortcutUpdateProtocol> _delegate;
    HACCContentViewController *_expandedController;
    CCUIContentModuleContext *_contentModuleContext;
    NSMutableDictionary *_moduleToViewControllerMap;
    NSMutableDictionary *_gridToModuleMap;
    NSMutableDictionary *_moduleToPointMap;
    UIScrollView *_scrollView;
    MTMaterialView *_backgroundView;
    UIView *_platterView;
    NSMutableArray *_separatorViews;
    AXRemoteHearingAidDevice *_currentHearingDevice;
    UITapGestureRecognizer *_tapRecognizer;
    UIPanGestureRecognizer *_panRecognizer;
    HACCChevronView *_headerChevronView;
}

@property (strong, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) BOOL bluetoothAvailable; // @synthesize bluetoothAvailable=_bluetoothAvailable;
@property (strong, nonatomic) CCUIContentModuleContext *contentModuleContext; // @synthesize contentModuleContext=_contentModuleContext;
@property (strong, nonatomic) AXRemoteHearingAidDevice *currentHearingDevice; // @synthesize currentHearingDevice=_currentHearingDevice;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AXHAShortcutUpdateProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (weak, nonatomic) HACCContentViewController *expandedController; // @synthesize expandedController=_expandedController;
@property (strong, nonatomic) NSMutableDictionary *gridToModuleMap; // @synthesize gridToModuleMap=_gridToModuleMap;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HACCChevronView *headerChevronView; // @synthesize headerChevronView=_headerChevronView;
@property (strong, nonatomic) NSMutableDictionary *moduleToPointMap; // @synthesize moduleToPointMap=_moduleToPointMap;
@property (strong, nonatomic) NSMutableDictionary *moduleToViewControllerMap; // @synthesize moduleToViewControllerMap=_moduleToViewControllerMap;
@property (strong, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property (strong, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) NSMutableArray *separatorViews; // @synthesize separatorViews=_separatorViews;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;

- (void).cxx_destruct;
- (void)_cancelDismissalWithPanGesture:(id)arg1;
- (void)_endDismissalWithPanGesture:(id)arg1;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_updateDismissalWithPanGesture:(id)arg1;
- (void)_updateViewForDismissalPercentage:(double)arg1;
- (BOOL)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bluetoothAvailabilityDidChange:(id)arg1;
- (void)content:(id)arg1 shouldPreview:(BOOL)arg2 withController:(id)arg3 andCompletion:(CDUnknownBlockType)arg4;
- (void)contentCategoryDidChange:(id)arg1;
- (void)controlDidActivate:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (unsigned long long)numberOfColumnsForSize:(struct CGSize)arg1;
- (double)preferredContentWidth;
- (double)preferredExpandedContentHeight;
- (void)setAlpha:(double)arg1 forAllModulesExcept:(id)arg2;
- (BOOL)shouldDisplayControlForModule:(unsigned long long)arg1;
- (BOOL)shouldDrawBackground;
- (void)updateAvailableControlsForSize:(struct CGSize)arg1;
- (void)updateView;
- (void)updateViewForProperties:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

