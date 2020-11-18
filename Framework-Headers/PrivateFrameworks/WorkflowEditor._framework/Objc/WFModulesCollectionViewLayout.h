//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSDictionary, NSMutableDictionary, UIColor;

@interface WFModulesCollectionViewLayout : UICollectionViewLayout
{
    NSArray *_collectionViewIndexPaths;
    NSMutableDictionary *_itemSizes;
    NSMutableDictionary *_itemHidden;
    NSMutableDictionary *_itemOffsets;
    NSMutableDictionary *_itemConnections;
    NSMutableDictionary *_supplementaryViewSizes;
    NSMutableDictionary *_itemAttributes;
    NSMutableDictionary *_supplementaryViewAttributes;
    NSMutableDictionary *_decorationViewAttributes;
    NSMutableDictionary *_decorationViewAttributesToDisappear;
    NSMutableDictionary *_deletedSupplementaryIndexPaths;
    NSMutableDictionary *_insertedSupplementaryIndexPaths;
    NSMutableDictionary *_deletedDecorationIndexPaths;
    NSMutableDictionary *_insertedDecorationIndexPaths;
    NSDictionary *_previousItemAttributes;
    BOOL _invalidatedAndWaitingForPrepareLayout;
    BOOL _disableItemAnimations;
    BOOL _showsFooterConnector;
    UIColor *_connectorColor;
    double _connectorWidth;
    struct UIEdgeInsets _sectionInset;
}

@property (readonly, nonatomic) UIColor *connectorColor; // @synthesize connectorColor=_connectorColor;
@property (readonly, nonatomic) double connectorWidth; // @synthesize connectorWidth=_connectorWidth;
@property (nonatomic) BOOL disableItemAnimations; // @synthesize disableItemAnimations=_disableItemAnimations;
@property (nonatomic) struct UIEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property (nonatomic) BOOL showsFooterConnector; // @synthesize showsFooterConnector=_showsFooterConnector;

+ (Class)invalidationContextClass;
+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (void)calculateAttributes;
- (struct CGSize)collectionViewContentSize;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)initWithConnectorColor:(id)arg1 connectorWidth:(double)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)populateInvalidatedDelegateCache;
- (void)populateUpdatedDelegateCache;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 movedFromIndexPath:(id)arg2;
- (id)proposedLayoutAttributesForItemAtIndexPath:(id)arg1 withSize:(struct CGSize)arg2 fromAbove:(BOOL)arg3;
- (id)proposedLayoutAttributesForNewItemAtIndexPath:(id)arg1 withSize:(struct CGSize)arg2;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)updateIndexPaths;

@end
