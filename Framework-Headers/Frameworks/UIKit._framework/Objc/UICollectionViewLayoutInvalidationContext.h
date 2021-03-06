//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSMutableIndexSet, NSMutableSet;

@interface UICollectionViewLayoutInvalidationContext : NSObject
{
    NSMutableSet *_invalidatedItemIndexPaths;
    NSMutableDictionary *_invalidatedSupplementaryIndexPaths;
    NSMutableDictionary *_invalidatedDecorationIndexPaths;
    NSArray *_updateItems;
    NSArray *_previousIndexPathsForReorderedItems;
    NSArray *_targetIndexPathsForReorderedItems;
    struct CGPoint _reorderingTarget;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
    struct {
        unsigned int invalidateDataSource:1;
        unsigned int invalidateEverything:1;
    } _invalidationContextFlags;
    BOOL _retainExistingSizingInfoForEstimates;
    long long _intent;
}

@property (readonly, nonatomic) NSMutableIndexSet *_orthogonalSectionsWithContentSizeChanges;
@property (nonatomic) struct CGPoint contentOffsetAdjustment;
@property (nonatomic) struct CGSize contentSizeAdjustment;
@property (nonatomic, getter=_intent, setter=_setIntent:) long long intent; // @synthesize intent=_intent;
@property (nonatomic, setter=_setInteractiveMovementTarget:) struct CGPoint interactiveMovementTarget;
@property (nonatomic, setter=_setInvalidateDataSourceCounts:) BOOL invalidateDataSourceCounts;
@property (nonatomic, setter=_setInvalidateEverything:) BOOL invalidateEverything;
@property (readonly, nonatomic) NSDictionary *invalidatedDecorationIndexPaths;
@property (readonly, nonatomic) NSArray *invalidatedItemIndexPaths;
@property (readonly, nonatomic) NSDictionary *invalidatedSupplementaryIndexPaths;
@property (copy, nonatomic, setter=_setPreviousIndexPathsForInteractivelyMovingItems:) NSArray *previousIndexPathsForInteractivelyMovingItems;
@property (nonatomic, getter=_retainExistingSizingInfoForEstimates, setter=_setRetainExistingSizingInfoForEstimates:) BOOL retainExistingSizingInfoForEstimates; // @synthesize retainExistingSizingInfoForEstimates=_retainExistingSizingInfoForEstimates;
@property (copy, nonatomic, setter=_setTargetIndexPathsForInteractivelyMovingItems:) NSArray *targetIndexPathsForInteractivelyMovingItems;
@property (strong, nonatomic, getter=_updateItems, setter=_setUpdateItems:) NSArray *updateItems;

- (void).cxx_destruct;
- (void)_invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (id)_invalidatedSupplementaryViews;
- (void)_setInvalidatedSupplementaryViews:(id)arg1;
- (void)invalidateDecorationElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;
- (void)invalidateItemsAtIndexPaths:(id)arg1;
- (void)invalidateSupplementaryElementsOfKind:(id)arg1 atIndexPaths:(id)arg2;

@end

