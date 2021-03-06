//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexSet, NSSet;

@interface HFUniqueArrayDiff : NSObject
{
    NSArray *_fromArray;
    NSArray *_toArray;
    NSIndexSet *_deletedIndexes;
    NSIndexSet *_insertedIndexes;
    NSIndexSet *_changedIndexes;
    NSSet *_movedIndexes;
}

@property (strong, nonatomic) NSIndexSet *changedIndexes; // @synthesize changedIndexes=_changedIndexes;
@property (strong, nonatomic) NSIndexSet *deletedIndexes; // @synthesize deletedIndexes=_deletedIndexes;
@property (strong, nonatomic) NSArray *fromArray; // @synthesize fromArray=_fromArray;
@property (strong, nonatomic) NSIndexSet *insertedIndexes; // @synthesize insertedIndexes=_insertedIndexes;
@property (strong, nonatomic) NSSet *movedIndexes; // @synthesize movedIndexes=_movedIndexes;
@property (readonly, nonatomic) unsigned long long numberOfOperations;
@property (strong, nonatomic) NSArray *toArray; // @synthesize toArray=_toArray;

+ (id)_createContainerSetFromArray:(id)arg1 options:(id)arg2;
+ (id)diffFromArray:(id)arg1 toArray:(id)arg2 options:(id)arg3;
- (void).cxx_destruct;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDeletesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateInsertsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMovesUsingBlock:(CDUnknownBlockType)arg1;

@end

