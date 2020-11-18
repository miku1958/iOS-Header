//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@class UIKBRenderConfig, UIKeyboardEmojiGraphicsTraits, UIResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionView : UICollectionView
{
    UIKBRenderConfig *_renderConfig;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    UIResponder *_hitTestResponder;
}

@property (readonly, strong) UIKeyboardEmojiGraphicsTraits *emojiGraphicsTraits; // @synthesize emojiGraphicsTraits=_emojiGraphicsTraits;
@property (nonatomic) UIResponder *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property (strong) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;

- (double)_currentScreenScale;
- (BOOL)_shouldReverseLayoutDirection;
- (id)closestCellForPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 renderConfig:(id)arg3 emojiGraphicsTraits:(id)arg4;
- (void)layoutSubviews;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

