//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputViewController.h>

#import <UIKit/_UIKBDelegateAwareInputController-Protocol.h>

@class NSArray, NSString, UIKeyboard, UIKeyboardInputMode, UIViewController;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController <_UIKBDelegateAwareInputController>
{
    UIKeyboardInputMode *_inputMode;
    UIKeyboard *_deferredSystemView;
    UIKeyboardInputMode *_incomingExtensionInputMode;
    double _incomingExtensionInputModeTime;
    double _lastSuspendedTime;
    BOOL _shouldRegenerateSizingConstraints;
    BOOL _shouldSuppressRemoteInputController;
    BOOL _tearingDownInputController;
    double _resetInputModeTime;
    UIViewController *_inputController;
    NSArray *_internalEdgeMatchConstraints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIViewController *inputController; // @synthesize inputController=_inputController;
@property (strong, nonatomic) NSArray *internalEdgeMatchConstraints; // @synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints;
@property (readonly) Class superclass;

+ (BOOL)_requiresProxyInterface;
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;
+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2;
+ (id)inputViewControllerWithView:(id)arg1;
- (id)_compatView;
- (id)_compatibilityController;
- (id)_initAsDeferredController;
- (id)_keyboard;
- (id)_keyboardForThisViewController;
- (id)_systemViewControllerForInputMode:(id)arg1;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;
- (void)addSnapshotViewForInputMode:(id)arg1;
- (void)assertCurrentInputModeIfNecessary;
- (id)childCompatibilityController;
- (void)dealloc;
- (void)didFinishTranslation;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didSuspend:(id)arg1;
- (void)finishSplitTransition:(BOOL)arg1;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;
- (void)killIncomingExtension;
- (void)loadView;
- (id)preferredFocusedView;
- (void)rebuildChildConstraints;
- (void)removeSnapshotView;
- (void)resetInputMode;
- (void)resetInputModeInMainThread;
- (void)setInputMode:(id)arg1;
- (void)setTearingDownInputController;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)shouldUpdateInputMode:(id)arg1;
- (void)takeSnapshotView;
- (void)tearDownInputController;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willBeginTranslation;
- (void)willResume:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end

