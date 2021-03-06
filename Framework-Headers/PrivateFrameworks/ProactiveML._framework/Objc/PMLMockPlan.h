//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLPlanProtocol-Protocol.h>

@class NSString, PMLTrainingStore;

@interface PMLMockPlan : NSObject <PMLPlanProtocol>
{
    PMLTrainingStore *_store;
    BOOL _returnValue;
    BOOL _didRun;
    NSString *_planId;
    unsigned long long _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL didRun; // @synthesize didRun=_didRun;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *planId; // @synthesize planId=_planId;
@property (readonly) Class superclass;
@property unsigned long long version; // @synthesize version=_version;

+ (void)clearLastDeserializedPlans;
+ (id)lastDeserializedPlanWithId:(id)arg1;
+ (id)lastDeserializedPlansMap;
+ (void)setLastDeserializedPlanWithId:(id)arg1 toPlan:(id)arg2;
- (void).cxx_destruct;
- (id)initWithPlanId:(id)arg1;
- (id)initWithPlanId:(id)arg1 store:(id)arg2;
- (id)initWithPlanId:(id)arg1 store:(id)arg2 version:(unsigned long long)arg3 returningAfterRunning:(BOOL)arg4;
- (id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2;
- (id)initWithPlanId:(id)arg1 version:(unsigned long long)arg2 returningAfterRunning:(BOOL)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithVersion:(unsigned long long)arg1;
- (id)runWithError:(id *)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end

