//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKContentContainerObserver-Protocol.h>
#import <PassKitUI/PKViewWindowObserver-Protocol.h>
#import <PassKitUI/UIGestureRecognizerDelegate-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, PKCompactNavigationContainedNavigationController, PKCompactNavigationContainedNavigationWrapperViewController, UITapGestureRecognizer, UIView;
@protocol PKCompactNavigationContainerControllerDelegate, UICoordinateSpace;

@interface PKCompactNavigationContainerController : UIViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIGestureRecognizerDelegate, PKContentContainerObserver, PKViewWindowObserver>
{
    BOOL _centeredCard;
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
    BOOL _requiresMasking;
    UIView *_maskingContainerView;
    struct CGRect _maximumModalPresentationFrame;
    PKCompactNavigationContainedNavigationWrapperViewController *_presentationContextVC;
    CDStruct_47050b7f _topVCInfo;
    struct CGRect _statusBarFrame;
    unsigned short _layoutGroupCounter;
    unsigned short _contentSizeUpdateDeferralCounter;
    BOOL _deferredContentSizeUpdate;
    BOOL _deferredContentSizeUpdateIsAnimated;
    BOOL _deferredContentSizeUpdateIsForced;
    UIViewController *_topVC;
    BOOL _topVCIsExpectedClass;
    BOOL _topVCIsInInitialLayout;
    UIViewController *_pendingTopVC;
    unsigned long long _pendingTopVCIdentifier;
    unsigned long long _updateChildViewControllerSizeCounter;
    UITapGestureRecognizer *_tapGestureRecognizer;
    unsigned char _visibility;
    BOOL _keyboardVisible;
    struct CGRect _keyboardFrame;
    struct CGRect _lastKeyboardFrame;
    BOOL _didMoveToWindowDirtiesLayout;
    BOOL _presentingNavigationController;
    PKCompactNavigationContainedNavigationController *_containedNavigationController;
    unsigned long long _style;
    id<UICoordinateSpace> _exclusionCoordinateSpace;
    id<PKCompactNavigationContainerControllerDelegate> _delegate;
    struct CGRect _exclusionRect;
}

@property (readonly, nonatomic) PKCompactNavigationContainedNavigationController *containedNavigationController; // @synthesize containedNavigationController=_containedNavigationController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKCompactNavigationContainerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didMoveToWindowDirtiesLayout; // @synthesize didMoveToWindowDirtiesLayout=_didMoveToWindowDirtiesLayout;
@property (readonly, nonatomic) id<UICoordinateSpace> exclusionCoordinateSpace; // @synthesize exclusionCoordinateSpace=_exclusionCoordinateSpace;
@property (readonly, nonatomic) struct CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isPresentingNavigationController) BOOL presentingNavigationController; // @synthesize presentingNavigationController=_presentingNavigationController;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;

+ (id)dimmingColor;
- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)_beginLayoutGroup;
- (BOOL)_canShowWhileLocked;
- (void)_endLayoutGroup;
- (CDStruct_47050b7f)_infoForViewController:(id)arg1;
- (struct CGSize)_navigationControllerSizeForChildViewControllerInfo:(CDStruct_47050b7f)arg1 withCurrentInfo:(CDStruct_47050b7f)arg2;
- (struct CGRect)_targetNavigationControllerFrameForInfo:(CDStruct_47050b7f)arg1;
- (void)_updateForKeyboardIfNecessary;
- (void)_updateLayoutForKeyboardAction:(CDUnknownBlockType)arg1;
- (void)_updateStatusBarFrame;
- (void)_updateTopViewController:(id)arg1 animated:(BOOL)arg2;
- (void)_updateTopViewControllerAsync:(id)arg1 animated:(BOOL)arg2;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (struct CGSize)childViewControllerPreferredContentSizeForSize:(struct CGSize)arg1 isRoot:(BOOL)arg2;
- (struct CGSize)childViewControllerSizeForNavigationControllerSize:(struct CGSize)arg1;
- (void)contentContainer:(id)arg1 preferredContentSizeDidChangeForChildContentContainer:(id)arg2;
- (void)dealloc;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (id)initWithNavigationController:(id)arg1;
- (id)initWithNavigationController:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)insertBackgroundLevelView:(id)arg1;
- (void)keyboardWillChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)loadView;
- (struct CGSize)modalPresentationSize;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (struct CGSize)navigationControllerSizeForChildViewControllerPreferredContentSize:(struct CGSize)arg1 isRoot:(BOOL)arg2;
- (void)observedView:(id)arg1 didMoveToWindow:(id)arg2;
- (long long)preferredUserInterfaceStyle;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (void)setExclusionRect:(struct CGRect)arg1 withCoordinateSpace:(id)arg2;
- (void)setSupportedInterfaceOrientations:(unsigned long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tapGestureRecognized:(id)arg1;
- (void)updateChildViewControllerSizeAnimated:(BOOL)arg1;
- (void)updateChildViewControllerSizeAnimated:(BOOL)arg1 forceUpdate:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

