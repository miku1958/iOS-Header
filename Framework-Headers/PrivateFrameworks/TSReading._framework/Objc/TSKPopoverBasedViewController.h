//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TSReading/TSKKeyboardObserver-Protocol.h>
#import <TSReading/TSKModalShieldDelegate-Protocol.h>
#import <TSReading/TSKPopoverBasedViewControllerDismissible-Protocol.h>
#import <TSReading/UINavigationControllerDelegate-Protocol.h>
#import <TSReading/UIPopoverControllerDelegate-Protocol.h>

@class NSString, TSKHideOnTouchOutsideViewGestureRecognizer, TSKModalShieldView, TSKPopoverController, UIView;
@protocol TSKPopoverBasedViewControllerDelegate;

@interface TSKPopoverBasedViewController : UIViewController <TSKModalShieldDelegate, UIPopoverControllerDelegate, UINavigationControllerDelegate, TSKPopoverBasedViewControllerDismissible, TSKKeyboardObserver>
{
    TSKPopoverController *mPopoverController;
    TSKHideOnTouchOutsideViewGestureRecognizer *mHideOnTouchGestureRecognizer;
    BOOL mWrapInNavigationController;
    BOOL mUseDoneButton;
    BOOL mViewResizesWithKeyboard;
    BOOL mAllowsOutsideTouch;
    BOOL mStaysOpenOnOutsideTouches;
    UIView *mPopoverToggleView;
    id<TSKPopoverBasedViewControllerDelegate> mPopoverDelegate;
    UIViewController *mHalfHeightViewController;
    CDUnknownBlockType mHalfHeightCloseBlock;
    BOOL mHalfHeightAnimated;
    TSKModalShieldView *mHalfHeightTapShield;
    struct CGRect mHalfHeightOriginalFrame;
    UIView *mHalfHeightParentView;
    BOOL mViewControllerVisible;
    BOOL mDismissOnUndo;
    BOOL mUndoManagerNotificationsRegistered;
    BOOL mImposeContentSizeOnViewControllers;
}

@property (nonatomic) BOOL allowsOutsideTouch; // @synthesize allowsOutsideTouch=mAllowsOutsideTouch;
@property (readonly, nonatomic) struct CGSize contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissOnUndo; // @synthesize dismissOnUndo=mDismissOnUndo;
@property (strong, nonatomic) UIViewController *halfHeightViewController; // @synthesize halfHeightViewController=mHalfHeightViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL imposeContentSizeOnViewControllers; // @synthesize imposeContentSizeOnViewControllers=mImposeContentSizeOnViewControllers;
@property (readonly, nonatomic) BOOL isPopoverGestureInFlight;
@property (readonly, strong, nonatomic) TSKPopoverController *popoverController; // @synthesize popoverController=mPopoverController;
@property (nonatomic) id<TSKPopoverBasedViewControllerDelegate> popoverDelegate; // @synthesize popoverDelegate=mPopoverDelegate;
@property (strong, nonatomic) UIView *popoverToggleView; // @synthesize popoverToggleView=mPopoverToggleView;
@property (readonly, nonatomic) BOOL shouldHideToolbar;
@property (nonatomic) BOOL staysOpenOnOutsideTouches; // @synthesize staysOpenOnOutsideTouches=mStaysOpenOnOutsideTouches;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDoneButton; // @synthesize useDoneButton=mUseDoneButton;
@property (nonatomic) BOOL viewResizesWithKeyboard; // @synthesize viewResizesWithKeyboard=mViewResizesWithKeyboard;
@property (nonatomic) BOOL wrapInNavigationController; // @synthesize wrapInNavigationController=mWrapInNavigationController;

- (void)clearOutsideTouchWatchView;
- (void)closeButtonPressed;
- (void)dealloc;
- (void)dismissAnimated:(BOOL)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (struct CGRect)frameForCurrentiPhoneOrientation;
- (void)i_configureCloseItem:(id)arg1;
- (id)i_contentViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isPopoverVisible;
- (BOOL)isVisible;
- (void)keyboardDidHideOrUndock:(id)arg1;
- (void)keyboardWillHideOrUndock:(id)arg1;
- (void)keyboardWillShowOrDock:(id)arg1;
- (id)navigationBar;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)outsideTouch:(id)arg1;
- (void)p_applicationWillEnterFullScreen:(id)arg1;
- (void)p_didDismissPopover:(id)arg1;
- (void)p_dismissFullscreenModalAnimated:(BOOL)arg1;
- (void)p_dismissFullscreenModalFromCloseButton;
- (void)p_dismissHalfHeight;
- (void)p_dismissHalfHeightFromCloseButton;
- (void)p_dismissPopoverAnimated:(BOOL)arg1;
- (void)p_informDelegateOfDidDismiss;
- (void)p_informDelegateOfWillDismiss;
- (void)p_informDelegateOfWillShow;
- (void)p_installHideOnTouchGesture;
- (void)p_keyboardWillHide:(BOOL)arg1 withNotification:(id)arg2;
- (id)p_newCloseImageBarButtonWithTarget:(id)arg1 action:(SEL)arg2;
- (id)p_newRootViewController;
- (double)p_originOffsetForKeyboardFrame:(struct CGRect)arg1;
- (id)p_outsideTouchWatchView;
- (void)p_registerPopoverBasedViewControllerNotifications;
- (void)p_removeHideOnTouchGesture;
- (BOOL)p_shouldResizeViewWithKeyboard;
- (void)p_showModalInViewController:(id)arg1 withTitle:(id)arg2 animated:(BOOL)arg3 withDoneButton:(BOOL)arg4;
- (id)p_topParentViewController;
- (void)p_willPresentPopover;
- (void)presentInRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 modal:(BOOL)arg4 closeBlock:(CDUnknownBlockType)arg5;
- (void)presentInRect:(struct CGRect)arg1 inView:(id)arg2 animated:(BOOL)arg3 modal:(BOOL)arg4 closeBlock:(CDUnknownBlockType)arg5 animations:(CDUnknownBlockType)arg6;
- (void)presentModallyFromBarItem:(id)arg1 viewController:(id)arg2;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(BOOL)arg5;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(BOOL)arg5 withDoneButton:(BOOL)arg6;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 arrowDirection:(unsigned long long)arg4 animated:(BOOL)arg5 withDoneButton:(BOOL)arg6 constrainToView:(BOOL)arg7 withPadding:(double)arg8 fromToolbar:(BOOL)arg9;
- (void)presentModallyFromRect:(struct CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 withDoneButton:(BOOL)arg4;
- (void)presentModallyWithTitle:(id)arg1 viewController:(id)arg2 animated:(BOOL)arg3 withDoneButton:(BOOL)arg4;
- (void)resetOutsideTouchWatchView;
- (void)shieldViewReceivedTap;
- (void)showPopoverFromBarItem:(id)arg1;
- (void)showPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)showPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 arrowDirection:(unsigned long long)arg3 animated:(BOOL)arg4;
- (void)showPopoverFromRect:(struct CGRect)arg1 inView:(id)arg2 arrowDirection:(unsigned long long)arg3 animated:(BOOL)arg4 constrainToView:(BOOL)arg5 withPadding:(double)arg6 fromToolbar:(BOOL)arg7;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)wantsDismissButton;

@end

