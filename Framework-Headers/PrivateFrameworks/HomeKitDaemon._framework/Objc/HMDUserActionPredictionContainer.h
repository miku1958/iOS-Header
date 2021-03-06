//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSArray, NSMutableArray;

@interface HMDUserActionPredictionContainer : HMFObject
{
    HMFUnfairLock *_lock;
    BOOL _sortedPredictionsByServiceGroupNeedsUpdate;
    NSArray *_sortedPredictionsByServiceGroup;
    NSMutableArray *_sortedPredictionGroups;
}

@property (readonly, copy) NSArray *allPredictions;
@property (strong, nonatomic) NSMutableArray *sortedPredictionGroups; // @synthesize sortedPredictionGroups=_sortedPredictionGroups;
@property (copy) NSArray *sortedPredictionsByServiceGroup; // @synthesize sortedPredictionsByServiceGroup=_sortedPredictionsByServiceGroup;

- (void).cxx_destruct;
- (unsigned long long)_insertPredictionGroup:(id)arg1;
- (id)_movePrediction:(id)arg1 fromGroup:(id)arg2 intoGroup:(id)arg3;
- (unsigned long long)addOrUpdatePrediction:(id)arg1;
- (id)createPredictionGroupForPrediction:(id)arg1;
- (id)init;
- (unsigned long long)removePrediction:(id)arg1;

@end

