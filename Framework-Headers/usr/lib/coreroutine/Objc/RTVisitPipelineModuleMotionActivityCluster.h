//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTVisitPipelineModule-Protocol.h>

@class NSDate, NSString, RTMotionActivityManager;

@interface RTVisitPipelineModuleMotionActivityCluster : NSObject <RTVisitPipelineModule>
{
    RTMotionActivityManager *_motionActivityManager;
    NSDate *_lastProcessedDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *lastProcessedDate; // @synthesize lastProcessedDate=_lastProcessedDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activitiesWithinDateInterval:(id)arg1 error:(id *)arg2;
- (id)automotiveDateIntervalsWithinDateInterval:(id)arg1 activities:(id)arg2;
- (id)init;
- (id)initWithMotionActivityManager:(id)arg1;
- (id)motionActivityVisitClustersFromVisitCluster:(id)arg1 automotiveDateIntervals:(id)arg2;
- (id)motionActivityVisitClustersFromVisitCluster:(id)arg1 error:(id *)arg2;
- (id)process:(id)arg1;

@end
