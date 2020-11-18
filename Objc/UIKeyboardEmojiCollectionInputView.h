//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKBKeyView.h>

#import <UIKit/UICollectionViewDataSource-Protocol.h>
#import <UIKit/UICollectionViewDelegate-Protocol.h>
#import <UIKit/UIKeyboardEmojiCategoryControl-Protocol.h>
#import <UIKit/UIKeyboardEmojiInput-Protocol.h>

@class NSIndexPath, NSString, UICollectionViewFlowLayout, UIKeyboardEmojiCategory, UIKeyboardEmojiCollectionView, UIKeyboardEmojiGraphicsTraits, UIResponder;
@protocol UIKBEmojiHitTestResponder;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCollectionInputView : UIKBKeyView <UICollectionViewDataSource, UICollectionViewDelegate, UIKeyboardEmojiInput, UIKeyboardEmojiCategoryControl>
{
    UIKeyboardEmojiCollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIKeyboardEmojiCategory *_category;
    long long _currentSection;
    NSIndexPath *_tappedSkinToneEmoji;
    UIKeyboardEmojiGraphicsTraits *_emojiGraphicsTraits;
    BOOL _isDraggingInputView;
    CDUnknownBlockType _completionBlock;
    UIResponder<UIKBEmojiHitTestResponder> *_hitTestResponder;
}

@property UIKeyboardEmojiCategory *category; // @synthesize category=_category;
@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> *hitTestResponder; // @synthesize hitTestResponder=_hitTestResponder;
@property (readonly) BOOL isDraggingInputView; // @synthesize isDraggingInputView=_isDraggingInputView;
@property (readonly) Class superclass;
@property (nonatomic) NSIndexPath *tappedSkinToneEmoji; // @synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji;

- (void)_setUserHasSelectedSkinToneEmoji:(BOOL)arg1;
- (BOOL)_shouldReverseLayoutDirection;
- (BOOL)_userHasSelectedSkinToneEmoji;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (long long)didInputSubTree:(id)arg1;
- (void)didMoveToWindow;
- (void)dimKeys:(id)arg1;
- (id)emojiBaseUnicodeString:(id)arg1;
- (long long)indexForPrettyCategoryDisplay:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadForCategory:(long long)arg1;
- (long long)reloadSectionForOffsetPercentage:(double)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)selectedChildSkinToneEmoji:(id)arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)shouldDismissModalDisplayView:(id)arg1;
- (BOOL)skinToneWasUsedForEmoji:(id)arg1;
- (double)snappedXOffsetForOffset:(double)arg1;
- (id)subTreeHitTest:(struct CGPoint)arg1;
- (void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
