//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSIndexSet;

@interface IKElementChangeSet : NSObject
{
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
    NSDictionary *_movedIndexesByNewIndex;
    NSDictionary *_updatedIndexesByNewIndex;
}

@property (readonly, copy, nonatomic) NSIndexSet *addedIndexes; // @synthesize addedIndexes=_addedIndexes;
@property (readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex; // @synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex;
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;
@property (readonly, copy, nonatomic) NSDictionary *updatedIndexesByNewIndex; // @synthesize updatedIndexesByNewIndex=_updatedIndexesByNewIndex;

- (void).cxx_destruct;
- (id)changesetByConcatenatingChangeset:(id)arg1;
- (id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4;
- (long long)newIndexForOldIndex:(long long)arg1;
- (long long)oldIndexForNewIndex:(long long)arg1;

@end
