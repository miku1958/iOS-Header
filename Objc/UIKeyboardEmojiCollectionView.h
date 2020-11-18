//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class UIKBRenderConfig, UIKeyboardEmojiGraphicsTraits, UIKeyboardEmojiInputController, UIKeyboardEmojiView, UIResponder, UITouch, UIView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionView : UICollectionView
{
    UITouch *_activeTouch;
    UIKeyboardEmojiView *_touched;
    UIKeyboardEmojiView *_pendingDisplay;
    UIKeyboardEmojiView *_onDisplay;
    UIKBRenderConfig *_renderConfig;
    UIKeyboardEmojiInputController *_inputController;
    UIView *_pressIndicator;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    UIResponder *_hitTestResponder;
}

@property (strong) UITouch *activeTouch; // @synthesize activeTouch=_activeTouch;
@property (readonly, strong) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
@property (nonatomic) UIResponder *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property (strong) UIKeyboardEmojiInputController *inputController; // @synthesize inputController=_inputController;
@property (strong) UIKeyboardEmojiView *onDisplay; // @synthesize onDisplay=_onDisplay;
@property (strong) UIKeyboardEmojiView *pendingDisplay; // @synthesize pendingDisplay=_pendingDisplay;
@property (strong) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property (strong) UIKeyboardEmojiView *touched; // @synthesize touched=_touched;

- (double)_currentScreenScale;
- (BOOL)_shouldReverseLayoutDirection;
- (id)closestCellForPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 renderConfig:(id)arg3 inputController:(id)arg4 emojiGraphicsTraits:(id)arg5;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
