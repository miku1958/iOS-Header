//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSLayoutConstraint, NSMutableDictionary, UIButton, UICompatibilityInputViewController, UIKBSystemLayoutViewController, UIKeyboard, UIResponder, UIView;
@protocol UITextInput;

@interface UISystemInputViewController : UIViewController
{
    NSMutableDictionary *_accessoryViewControllers;
    NSMutableDictionary *_accessoryConstraints;
    BOOL _needsSetupAgain;
    BOOL _isVisible;
    BOOL _supportsTouchInput;
    BOOL _isAutomaticResponderTransition;
    BOOL _willPresentFullscreen;
    UIResponder<UITextInput> *_persistentDelegate;
    UIKeyboard *_keyboard;
    NSArray *_keyboardConstraints;
    UICompatibilityInputViewController *_keyboardVC;
    NSArray *_editorConstraints;
    UIKBSystemLayoutViewController *_editorVC;
    UIButton *_doneButton;
    UIViewController *_inputVC;
    NSLayoutConstraint *_verticalAlignment;
    NSLayoutConstraint *_horizontalAlignment;
    UIResponder<UITextInput> *_nextInputDelegate;
    UIView *_containingView;
    UIView *_contentLayoutView;
}

@property (strong, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
@property (strong, nonatomic) UIView *contentLayoutView; // @synthesize contentLayoutView=_contentLayoutView;
@property (strong, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property (strong, nonatomic) NSArray *editorConstraints; // @synthesize editorConstraints=_editorConstraints;
@property (strong, nonatomic) UIKBSystemLayoutViewController *editorVC; // @synthesize editorVC=_editorVC;
@property (strong, nonatomic) NSLayoutConstraint *horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property (strong, nonatomic) UIViewController *inputVC; // @synthesize inputVC=_inputVC;
@property (nonatomic) BOOL isAutomaticResponderTransition; // @synthesize isAutomaticResponderTransition=_isAutomaticResponderTransition;
@property (strong, nonatomic) UIKeyboard *keyboard; // @synthesize keyboard=_keyboard;
@property (strong, nonatomic) NSArray *keyboardConstraints; // @synthesize keyboardConstraints=_keyboardConstraints;
@property (strong, nonatomic) UICompatibilityInputViewController *keyboardVC; // @synthesize keyboardVC=_keyboardVC;
@property (strong, nonatomic) UIResponder<UITextInput> *nextInputDelegate; // @synthesize nextInputDelegate=_nextInputDelegate;
@property (strong, nonatomic) UIResponder<UITextInput> *persistentDelegate; // @synthesize persistentDelegate=_persistentDelegate;
@property (nonatomic) BOOL supportsTouchInput; // @synthesize supportsTouchInput=_supportsTouchInput;
@property (nonatomic) struct UIEdgeInsets unfocusedFocusGuideOutsets;
@property (strong, nonatomic) NSLayoutConstraint *verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property (nonatomic) BOOL willPresentFullscreen; // @synthesize willPresentFullscreen=_willPresentFullscreen;

+ (BOOL)canUseSystemInputViewControllerForResponder:(id)arg1;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2;
+ (id)systemInputViewControllerForResponder:(id)arg1 editorView:(id)arg2 containingResponder:(id)arg3;
- (id)_accessoryViewControllerForEdge:(long long)arg1;
- (void)_addAccessoryViewController:(id)arg1;
- (void)_didSuspend:(id)arg1;
- (BOOL)_disableAutomaticKeyboardBehavior;
- (void)_dismissSystemInputViewController;
- (unsigned long long)_horizontalLayoutTypeForEdge:(long long)arg1;
- (void)_removeAccessoryViewController:(id)arg1;
- (void)_returnButtonPressed;
- (unsigned long long)_verticalLayoutTypeForEdge:(long long)arg1;
- (void)_willResume:(id)arg1;
- (id)accessoryViewControllerForEdge:(long long)arg1;
- (id)alignmentConstraintForAxis:(long long)arg1;
- (id)constraintFromView:(id)arg1 attribute:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4;
- (id)constraintsForEdge:(long long)arg1;
- (void)dealloc;
- (id)doneButtonStringForCurrentInputDelegate;
- (void)findNextInputDelegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)inputModeDidChange:(id)arg1;
- (void)populateCoreHierarchy;
- (id)preferredFocusedItem;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reloadInputViewsForPersistentDelegate;
- (void)setAccessoryViewController:(id)arg1 forEdge:(long long)arg2;
- (void)setAlignmentConstraint:(id)arg1 forAxis:(long long)arg2;
- (void)setConstraints:(id)arg1 forEdge:(long long)arg2;
- (void)setupKeyboard;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
