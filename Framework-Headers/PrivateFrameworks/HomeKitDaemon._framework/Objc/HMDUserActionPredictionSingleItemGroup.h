//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDUserActionPredictionGroup-Protocol.h>

@class HMUserActionPrediction, NSArray, NSString, NSUUID;

@interface HMDUserActionPredictionSingleItemGroup : HMFObject <HMDUserActionPredictionGroup>
{
    HMUserActionPrediction *_prediction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSUUID *groupUUID;
@property (readonly) unsigned long long hash;
@property (strong) HMUserActionPrediction *prediction; // @synthesize prediction=_prediction;
@property (readonly) double predictionScore;
@property (readonly, copy) NSArray *predictions;
@property (readonly) Class superclass;
@property (readonly, copy) HMUserActionPrediction *userActionRepresentation;

- (void).cxx_destruct;
- (BOOL)containsPrediction:(id)arg1;
- (id)initWithPrediction:(id)arg1;
- (BOOL)shouldContainPrediction:(id)arg1;
- (void)updateWithPrediction:(id)arg1;

@end

