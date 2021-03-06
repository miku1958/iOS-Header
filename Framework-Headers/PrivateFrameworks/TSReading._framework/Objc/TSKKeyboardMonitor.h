//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, UIWindow;
@protocol TSKKeyboardObserver;

@interface TSKKeyboardMonitor : NSObject
{
    UIWindow *_rootWindow;
    BOOL _keyboardIsVisibleAndDocked;
    BOOL _keyboardIsAnimatingInOrDocking;
    BOOL _keyboardIsAnimatingOutOrUndocking;
    BOOL _weAreFakingAHideEvent;
    BOOL _lastHideWasFake;
    BOOL _suppressDidHide;
    struct CGRect _keyboardFrame;
    double _onScreenHeight;
    struct __CFArray *_keyboardObservers;
    NSMutableArray *_completionBlocks;
    id<TSKKeyboardObserver> _exclusiveKeyboardObserver;
    double _keyboardAnimationDuration;
}

@property (readonly) double keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
@property (readonly) struct CGRect keyboardFrame; // @synthesize keyboardFrame=_keyboardFrame;
@property (readonly) BOOL keyboardIsAnimating;
@property (readonly) BOOL keyboardIsAnimatingInOrDocking; // @synthesize keyboardIsAnimatingInOrDocking=_keyboardIsAnimatingInOrDocking;
@property (readonly) BOOL keyboardIsAnimatingOutOrUndocking; // @synthesize keyboardIsAnimatingOutOrUndocking=_keyboardIsAnimatingOutOrUndocking;
@property (readonly) BOOL keyboardIsVisibleAndDocked; // @synthesize keyboardIsVisibleAndDocked=_keyboardIsVisibleAndDocked;
@property (readonly) double onScreenHeight; // @synthesize onScreenHeight=_onScreenHeight;
@property (nonatomic) UIWindow *rootWindow; // @synthesize rootWindow=_rootWindow;

+ (id)_singletonAlloc;
+ (void)addKeyboardObserver:(id)arg1;
+ (void)afterKeyboardAnimationPerformBlock:(CDUnknownBlockType)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)keyboardIsAnimating;
+ (BOOL)keyboardIsAnimatingInOrDocking;
+ (BOOL)keyboardIsAnimatingOutOrUndocking;
+ (BOOL)keyboardIsVisibleAndDocked;
+ (void)removeKeyboardObserver:(id)arg1;
+ (void)setKeyboardHiddenByModalObserver:(id)arg1;
+ (void)setModalKeyboardObserver:(id)arg1;
+ (id)sharedKeyboardMonitor;
- (void)addKeyboardObserver:(id)arg1;
- (void)afterKeyboardAnimationPerformBlock:(CDUnknownBlockType)arg1;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (double)keyboardHeightInView:(id)arg1;
- (void)p_KeyboardDidChangeFrame:(id)arg1;
- (void)p_KeyboardWillChangeFrame:(id)arg1;
- (void)p_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)p_installKeyboardNotifications;
- (void)p_keyboardDidHideOrUndock:(id)arg1;
- (void)p_keyboardDidShowOrDock:(id)arg1;
- (id)p_keyboardFrameView;
- (void)p_keyboardWillHideOrUndock:(id)arg1;
- (void)p_keyboardWillShowOrDock:(id)arg1;
- (void)p_performAnimationCompletionBlocksWithVisible:(BOOL)arg1;
- (void)p_removeKeyboardNotifications;
- (void)p_updateKeyboardInfoFromNotification:(id)arg1;
- (oneway void)release;
- (void)removeKeyboardObserver:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setKeyboardHiddenByModalObserver:(id)arg1;
- (void)setModalKeyboardObserver:(id)arg1;

@end

