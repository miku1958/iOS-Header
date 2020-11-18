//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPSectionedIdentifierList.h>

@class MPRandomDistribution, NSMutableArray;
@protocol _MPSSILDelegate;

@interface _MPSSILImplementation : MPSectionedIdentifierList
{
    MPRandomDistribution *_randomDistribution;
    NSMutableArray *_candidateItems;
}

@property (strong, nonatomic) NSMutableArray *candidateItems; // @synthesize candidateItems=_candidateItems;
@property (weak, nonatomic) id<_MPSSILDelegate> delegate; // @dynamic delegate;
@property (readonly, nonatomic) MPRandomDistribution *randomDistribution; // @synthesize randomDistribution=_randomDistribution;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addShuffleSection:(id)arg1 dataSource:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_appendShuffledItems:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)_beforeInitWithCoder:(id)arg1;
- (id)_createShuffleCloneForItem:(id)arg1 inSection:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (void)_dequeueCandidatesWithQuota:(long long)arg1 withExclusiveAccessToken:(id)arg2;
- (void)_enumerator:(id)arg1 didEncounterEntry:(id)arg2 withExclusiveAccessToken:(id)arg3;
- (BOOL)_isSequentialSection:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)_reverseEnumeratorWillStartAtEnd:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 afterItem:(id)arg4 inSection:(id)arg5;
- (void)addDataSource:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3 afterTailOfSection:(id)arg4;
- (void)addDataSourceAtEnd:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3;
- (void)addDataSourceAtStart:(id)arg1 section:(id)arg2 sequentially:(BOOL)arg3;
- (void)dataSourceInsertItems:(id)arg1 afterItem:(id)arg2 inSection:(id)arg3;
- (void)dataSourceInsertItemsAtHead:(id)arg1 inSection:(id)arg2;
- (void)dataSourceInsertItemsAtTail:(id)arg1 inSection:(id)arg2;
- (void)dataSourceReloadItem:(id)arg1 inSection:(id)arg2;
- (void)dataSourceRemoveItem:(id)arg1 fromSection:(id)arg2;
- (void)dequeueCandidatesWithQuota:(long long)arg1;
- (void)encodeWithCoder:(id)arg1 withExclusiveAccessToken:(id)arg2;
- (id)enumeratorWithOptions:(unsigned long long)arg1 startingAtItem:(id)arg2 inSection:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithSectionedIdentifierList:(id)arg1 randomSource:(id)arg2 startingItemEntry:(id)arg3 withExclusiveAccessToken:(id)arg4;
- (long long)itemCount;
- (void)safelyReshuffleAfterItem:(id)arg1 inSection:(id)arg2;

@end
