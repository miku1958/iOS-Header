//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIInputViewController, UIKeyboard, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject
{
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UIView *_inputAssistantView;
    BOOL _isSplit;
    double _splitHeightDelta;
    UIResponder *_restorableResponder;
    UIResponder *_accessoryViewNextResponder;
    BOOL _restoreUsingBecomeFirstResponder;
    BOOL _isNullInputView;
    BOOL _isCustomInputView;
    BOOL _isRemoteKeyboard;
    UIInputViewController *_inputViewController;
    UIInputViewController *_assistantViewController;
    UIInputViewController *_accessoryViewController;
    struct CGRect _inputAssistantViewBounds;
}

@property (readonly, nonatomic) BOOL _inputViewIsSplit;
@property (strong, nonatomic) UIInputViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property (nonatomic) UIResponder *accessoryViewNextResponder; // @synthesize accessoryViewNextResponder=_accessoryViewNextResponder;
@property (strong, nonatomic) UIInputViewController *assistantViewController; // @synthesize assistantViewController=_assistantViewController;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (strong, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property (readonly, nonatomic) struct CGRect inputAccessoryViewBounds;
@property (strong, nonatomic) UIView *inputAssistantView; // @synthesize inputAssistantView=_inputAssistantView;
@property (readonly, nonatomic) struct CGRect inputAssistantViewBounds; // @synthesize inputAssistantViewBounds=_inputAssistantViewBounds;
@property (strong, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property (readonly, nonatomic) struct CGRect inputViewBounds;
@property (strong, nonatomic) UIInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property (readonly, nonatomic) BOOL inputViewKeyboardCanSplit;
@property (nonatomic) BOOL isCustomInputView; // @synthesize isCustomInputView=_isCustomInputView;
@property (readonly, nonatomic) BOOL isInputAccessoryViewPlaceholder;
@property (readonly, nonatomic) BOOL isInputAssistantViewPlaceholder;
@property (readonly, nonatomic) BOOL isInputViewPlaceholder;
@property (readonly, nonatomic) BOOL isNullInputView; // @synthesize isNullInputView=_isNullInputView;
@property (nonatomic) BOOL isRemoteKeyboard; // @synthesize isRemoteKeyboard=_isRemoteKeyboard;
@property (readonly, nonatomic) BOOL isSplit; // @synthesize isSplit=_isSplit;
@property (readonly, nonatomic) UIKeyboard *keyboard;
@property (readonly, nonatomic) UIView *layeringView;
@property (weak, nonatomic) UIResponder *restorableResponder; // @synthesize restorableResponder=_restorableResponder;
@property (nonatomic) BOOL restoreUsingBecomeFirstResponder;
@property (readonly, nonatomic) UIView *splitExemptSubview;
@property (nonatomic) double splitHeightDelta; // @synthesize splitHeightDelta=_splitHeightDelta;
@property (readonly, nonatomic) BOOL supportsSplit;

+ (id)emptyInputSet;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;
- (BOOL)__isCKAccessoryView;
- (BOOL)_accessorySuppressesShadow;
- (BOOL)_actLikeInputAccessoryViewSupportsSplit;
- (void)_beginSplitTransitionIfNeeded;
- (void)_endSplitTransitionIfNeeded;
- (BOOL)_inputAccessoryViewSupportsSplit;
- (BOOL)_inputViewIsVisible;
- (BOOL)_inputViewSetSupportsSplit;
- (BOOL)_inputViewSupportsSplit;
- (BOOL)_isFullscreen;
- (BOOL)_isKeyboard;
- (struct CGRect)_leftInputViewSetFrame;
- (struct CGRect)_rightInputViewSetFrame;
- (void)_setRenderConfig:(id)arg1;
- (void)_setSplitProgress:(double)arg1;
- (id)_splittableInputAccessoryView;
- (id)_themableInputAccessoryView;
- (BOOL)canAnimateToInputViewSet:(id)arg1;
- (BOOL)containsResponder:(id)arg1;
- (BOOL)containsView:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(BOOL)arg4;
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;
- (id)inputSetWithInputAccessoryViewOnly;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isStrictSupersetOfViewSet:(id)arg1;
- (long long)keyboardOrientation:(id)arg1;
- (id)normalisePlaceholders;
- (void)refreshPresentation;
- (BOOL)setAccessoryViewVisible:(BOOL)arg1 delay:(double)arg2;
- (void)setAssistantBarVisible:(BOOL)arg1 delay:(double)arg2 animated:(BOOL)arg3;
- (void)setKeyboardAssistantBar:(id)arg1;
- (BOOL)usesKeyClicks;
- (BOOL)visible;

@end

