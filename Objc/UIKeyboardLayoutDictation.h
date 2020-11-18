//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKeyboardLayout.h>

@class UIKBBackgroundView, UIKBTree;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutDictation : UIKeyboardLayout
{
    UIKBBackgroundView *_backgroundView;
    UIKBTree *_keyplane;
}

+ (id)activeInstance;
+ (struct CGSize)keyboardSizeForInputMode:(id)arg1 screenTraits:(id)arg2 keyboardType:(long long)arg3;
- (int)_clipCornersOfView:(id)arg1;
- (void)_moveWithEvent:(id)arg1;
- (id)currentKeyplane;
- (void)didEndIndirectSelectionGesture;
- (struct CGRect)dragGestureRectInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setRenderConfig:(id)arg1;
- (void)setupBackgroundViewForNewSplitTraits:(id)arg1;
- (BOOL)shouldFadeFromLayout;
- (BOOL)shouldFadeToLayout;
- (void)showKeyboardWithInputTraits:(id)arg1 screenTraits:(id)arg2 splitTraits:(id)arg3;
- (struct CGSize)splitLeftSize;
- (BOOL)usesAutoShift;
- (BOOL)visible;
- (void)willBeginIndirectSelectionGesture;

@end

