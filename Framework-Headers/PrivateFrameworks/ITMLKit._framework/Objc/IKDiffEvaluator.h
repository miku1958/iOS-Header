//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet;

__attribute__((visibility("hidden")))
@interface IKDiffEvaluator : NSObject
{
    NSArray *_objects;
    NSArray *_oldObjects;
    NSIndexSet *_addedIndexes;
    NSIndexSet *_removedIndexes;
    NSDictionary *_movedIndexesByNewIndex;
    NSDictionary *_oldIndexesByNewIndex;
}

@property (readonly, copy, nonatomic) NSIndexSet *addedIndexes; // @synthesize addedIndexes=_addedIndexes;
@property (readonly, copy, nonatomic) NSDictionary *movedIndexesByNewIndex; // @synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex;
@property (readonly, copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property (readonly, copy, nonatomic) NSDictionary *oldIndexesByNewIndex; // @synthesize oldIndexesByNewIndex=_oldIndexesByNewIndex;
@property (readonly, copy, nonatomic) NSArray *oldObjects; // @synthesize oldObjects=_oldObjects;
@property (readonly, copy, nonatomic) NSIndexSet *removedIndexes; // @synthesize removedIndexes=_removedIndexes;

- (void).cxx_destruct;
- (void)_evaluateWithHashing:(CDUnknownBlockType)arg1;
- (void)enumerateCommonObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithObjects:(id)arg1 oldObjects:(id)arg2 hashing:(CDUnknownBlockType)arg3;

@end

