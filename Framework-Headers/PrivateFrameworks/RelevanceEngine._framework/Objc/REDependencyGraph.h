//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@class NSArray, NSMapTable;

@interface REDependencyGraph : NSObject <NSCopying>
{
    NSMapTable *_nodes;
}

@property (readonly, nonatomic) NSArray *allItems;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (void)_enumerateSortedFirstLevelDependenciesOfItem:(id)arg1 usingComparator:(CDUnknownBlockType)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_visitNode:(id)arg1 visited:(id)arg2 temporary:(id)arg3 result:(id)arg4 comparator:(CDUnknownBlockType)arg5 warn:(BOOL)arg6;
- (void)addItem:(id)arg1;
- (BOOL)containsItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)enumerateDependenciesOfItem:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPointerFunctions:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)item:(id)arg1 isDependencyOfItem:(id)arg2;
- (void)markItem:(id)arg1 dependentOnItem:(id)arg2;
- (void)removeItem:(id)arg1;
- (id)topologicalSortedItems;
- (id)topologicalSortedItemsWithComparator:(CDUnknownBlockType)arg1;

@end

