//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSCollectionLayoutGroup, NSDictionary, NSIndexSet;
@protocol _UICollectionLayoutSectionCallback;

@interface NSCollectionLayoutSection : NSObject <NSCopying>
{
    NSIndexSet *_pinnedBoundarySupplementaryItemIndexes;
    BOOL _hasBackgroundDecorationItem;
    NSDictionary *_supplementaryItemsDict;
    NSDictionary *_decorationItemsDict;
    BOOL _isEmptySection;
    BOOL _prefersListSolver;
    BOOL _supplementariesFollowContentInsets;
    double _interGroupSpacing;
    long long _orthogonalScrollingBehavior;
    NSArray *_boundarySupplementaryItems;
    CDUnknownBlockType _visibleItemsInvalidationHandler;
    NSArray *_decorationItems;
    NSCollectionLayoutGroup *_group;
    NSArray *_supplementaryItems;
    NSIndexSet *_pinnedSupplementaryItemIndexes;
    NSDictionary *_decorationItemssDict;
    id<_UICollectionLayoutSectionCallback> _callback;
    struct CGSize _contentSize;
    struct NSDirectionalEdgeInsets _contentInsets;
}

@property (copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property (readonly, nonatomic, getter=_callback) id<_UICollectionLayoutSectionCallback> callback; // @synthesize callback=_callback;
@property (nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property (copy, nonatomic) NSArray *decorationItems; // @synthesize decorationItems=_decorationItems;
@property (readonly, nonatomic) NSDictionary *decorationItemssDict; // @synthesize decorationItemssDict=_decorationItemssDict;
@property (copy, nonatomic) NSCollectionLayoutGroup *group; // @synthesize group=_group;
@property (nonatomic) double interGroupSpacing; // @synthesize interGroupSpacing=_interGroupSpacing;
@property (nonatomic) long long orthogonalScrollingBehavior; // @synthesize orthogonalScrollingBehavior=_orthogonalScrollingBehavior;
@property (copy, nonatomic) NSIndexSet *pinnedSupplementaryItemIndexes; // @synthesize pinnedSupplementaryItemIndexes=_pinnedSupplementaryItemIndexes;
@property (nonatomic) BOOL prefersListSolver; // @synthesize prefersListSolver=_prefersListSolver;
@property (nonatomic) BOOL supplementariesFollowContentInsets; // @synthesize supplementariesFollowContentInsets=_supplementariesFollowContentInsets;
@property (copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property (readonly, nonatomic) NSDictionary *supplementaryItemsDict;
@property (copy, nonatomic) CDUnknownBlockType visibleItemsInvalidationHandler; // @synthesize visibleItemsInvalidationHandler=_visibleItemsInvalidationHandler;

+ (id)_emptySection;
+ (id)sectionWithGroup:(id)arg1;
- (void).cxx_destruct;
- (id)_auxillaryItemForElementKind:(id)arg1 category:(unsigned long long)arg2;
- (void)_checkForDuplicateSupplementaryItemKindsAndThrowIfFound;
- (BOOL)_containsBackgroundDecorationItem:(id)arg1;
- (BOOL)_containsEstimatedSizeElement;
- (BOOL)_hasBackgroundDecorationItem;
- (BOOL)_hasVisibleItemsHandler;
- (BOOL)_isEmptySection;
- (BOOL)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decorationItemsDict;
- (id)initWithGroup:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 supplementaryItems:(id)arg3 boundarySupplementartItems:(id)arg4 pinnedSupplementaryItemIndexes:(id)arg5 interGroupSpacing:(double)arg6 visibleItemsInvalidationHandler:(CDUnknownBlockType)arg7 supplementariesFollowInsets:(BOOL)arg8 decorationItems:(id)arg9 orthogonalScrollingBehavior:(long long)arg10 isEmptySection:(BOOL)arg11 prefersListSolver:(BOOL)arg12;
- (id)initWithLayoutGroup:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)pinnedBoundarySupplementaryItemIndexes;
- (BOOL)scrollsOrthogonally;

@end

