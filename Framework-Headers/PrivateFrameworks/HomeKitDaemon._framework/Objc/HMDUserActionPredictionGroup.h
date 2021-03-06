//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDUserActionPredictionGroup-Protocol.h>

@class HMUserActionPrediction, NSArray, NSMutableArray, NSString, NSUUID;

@interface HMDUserActionPredictionGroup : HMFObject <HMDUserActionPredictionGroup>
{
    double _maxScore;
    NSMutableArray *_mutablePredictions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSUUID *groupUUID;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSMutableArray *mutablePredictions; // @synthesize mutablePredictions=_mutablePredictions;
@property (readonly) double predictionScore;
@property (readonly, copy) NSArray *predictions;
@property (readonly) Class superclass;
@property (readonly, copy) HMUserActionPrediction *userActionRepresentation;

- (void).cxx_destruct;
- (void)_updateMaxScore;
- (BOOL)containsPrediction:(id)arg1;
- (unsigned long long)frameworkPredictionTypeForGroup;
- (id)initWithPredictions:(id)arg1;
- (BOOL)shouldContainPrediction:(id)arg1;
- (unsigned long long)targetGroupType;
- (void)updateWithPrediction:(id)arg1;

@end

