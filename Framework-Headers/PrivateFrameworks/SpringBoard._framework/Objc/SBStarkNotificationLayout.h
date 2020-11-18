//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, UICollectionViewLayoutAttributes;

@interface SBStarkNotificationLayout : UICollectionViewLayout
{
    UICollectionViewLayoutAttributes *_notificationAttributes;
    UICollectionViewLayoutAttributes *_previousNotificationAttributes;
    NSArray *_subActionsAttributes;
    NSArray *_previousSubActionsAttributes;
    UICollectionViewLayoutAttributes *_backgroundAttributes;
    UICollectionViewLayoutAttributes *_previousBackgroundAttributes;
    double _notificationHeight;
    double _transitionSpacing;
    struct UIEdgeInsets _subActionsInsets;
    double _subActionPadding;
    double _subActionHeight;
}

@property (nonatomic) double notificationHeight; // @synthesize notificationHeight=_notificationHeight;
@property (nonatomic) double subActionHeight; // @synthesize subActionHeight=_subActionHeight;
@property (nonatomic) double subActionPadding; // @synthesize subActionPadding=_subActionPadding;
@property (nonatomic) struct UIEdgeInsets subActionsInsets; // @synthesize subActionsInsets=_subActionsInsets;
@property (nonatomic) double transitionSpacing; // @synthesize transitionSpacing=_transitionSpacing;

- (void).cxx_destruct;
- (id)_indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)_indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)_transitionAttributesForAction:(long long)arg1 withLayoutAttributes:(id)arg2;
- (struct CGSize)collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (id)init;
- (id)initialLayoutAttributesForAppearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;

@end
