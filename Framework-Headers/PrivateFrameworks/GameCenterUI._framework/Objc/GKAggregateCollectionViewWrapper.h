//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GKAggregateMapping, UICollectionView;

@interface GKAggregateCollectionViewWrapper : NSObject
{
    UICollectionView *_wrappedView;
    GKAggregateMapping *_mapping;
}

@property (strong, nonatomic) GKAggregateMapping *mapping; // @synthesize mapping=_mapping;
@property (strong, nonatomic) UICollectionView *wrappedView; // @synthesize wrappedView=_wrappedView;

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (id)wrapperForView:(id)arg1 mapping:(id)arg2;
- (id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2;
- (id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (void)_gkPerformWithoutViewReuse:(CDUnknownBlockType)arg1;
- (void)_gkRegisterCellClass:(Class)arg1;
- (void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2;
- (id)cellForItemAtIndexPath:(id)arg1;
- (void)dealloc;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexPathsForSelectedItems;
- (id)indexPathsForVisibleItems;
- (id)initWithView:(id)arg1 mapping:(id)arg2;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)insertSections:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

@end
