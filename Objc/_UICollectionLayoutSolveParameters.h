//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutSolveResult-Protocol.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutSolveParameters : NSObject <_UICollectionLayoutSolveResult>
{
    NSMutableIndexSet *_invalidatedIndexes;
    NSMutableDictionary *_invalidatedAuxillaryDict;
    BOOL _isFullResolve;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasInvalidatedItems;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *invalidatedAuxillaryKinds;
@property (readonly, nonatomic) NSIndexSet *invalidatedIndexes;
@property (readonly, nonatomic) BOOL isFullResolve;
@property (readonly) Class superclass;

+ (id)parametersForFullResolve;
- (void).cxx_destruct;
- (void)addAuxillaryIndex:(long long)arg1 elementKind:(id)arg2;
- (void)addItemIndex:(long long)arg1;
- (id)indexesForInvalidatedAuxillariesOfKind:(id)arg1;
- (id)init;
- (id)initWithInvalidatedIndexes:(id)arg1;
- (id)initWithInvalidatedIndexes:(id)arg1 isFullResolve:(BOOL)arg2;
- (id)invalidatedAuxillaryOffsets;

@end

