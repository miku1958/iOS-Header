//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLProtoBufTracker.h>

@class NSArray, PMLTrackerMockAdapter;

@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker
{
    PMLTrackerMockAdapter *_adapter;
}

@property (readonly, nonatomic) NSArray *trackedGradients; // @dynamic trackedGradients;
@property (readonly, nonatomic) NSArray *trackedWeights; // @dynamic trackedWeights;

+ (id)mockTracker;
+ (id)mockTrackerForPlanId:(id)arg1;
- (void).cxx_destruct;
- (void)clearTrackedMessages;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;
- (id)initWithModel:(id)arg1;

@end

