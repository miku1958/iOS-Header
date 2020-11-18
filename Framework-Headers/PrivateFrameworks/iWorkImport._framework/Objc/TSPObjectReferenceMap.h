//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSPObjectContext;
@protocol TSPExternalReferenceDelegate;

__attribute__((visibility("hidden")))
@interface TSPObjectReferenceMap : NSObject
{
    TSPObjectContext *_context;
    id<TSPExternalReferenceDelegate> _delegate;
    struct unordered_map<const long long, TSP::ReferenceMapInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ReferenceMapInfo>>> _inverseReferenceMap;
    struct unordered_map<const long long, __unsafe_unretained Class, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, __unsafe_unretained Class>>> _classMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObjectReferenceMap:(id)arg1;
- (void)addReferenceFromObjectIdentifier:(long long)arg1 toObjectIdentifier:(long long)arg2;
- (void)addReferenceFromObjectIdentifier:(long long)arg1 toObjectOrLazyReference:(id)arg2;
- (void)addReferencesFromObject:(id)arg1 archiver:(id)arg2;
- (id)descriptionOfAllPossiblePathsToObject:(id)arg1 withLimit:(unsigned long long)arg2;
- (id)descriptionOfAllPossiblePathsToObjectIdentifier:(long long)arg1 withLimit:(unsigned long long)arg2;
- (BOOL)hasParentsForObjectIdentifier:(long long)arg1;
- (id)init;
- (id)initWithContext:(id)arg1 delegate:(id)arg2;
- (id)initWithContext:(id)arg1 delegate:(id)arg2 externalReferencesFromComponent:(id)arg3;
- (void)mergeWithObjectReferenceMap:(id)arg1;
- (id)parentObjectPathsForObjectIdentifier:(long long)arg1 limit:(unsigned long long)arg2 totalParentObjects:(unsigned long long *)arg3;
- (id)parentObjectsForObject:(id)arg1;
- (id)parentObjectsForObjectIdentifier:(long long)arg1;
- (unsigned long long)visitObjectWithIdentifier:(long long)arg1 level:(unsigned long long)arg2 mode:(int)arg3 limit:(unsigned long long)arg4 pathSuffix:(id)arg5 visitedObjectIdentifiers:(id)arg6 updatingParentObjectPaths:(id)arg7;

@end

