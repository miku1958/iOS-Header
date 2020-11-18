//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <coreroutine/RTVisitPipelineModule-Protocol.h>

@class NSMutableArray, NSString, RTHintManager, RTLearnedLocationManager, RTVisitHyperParameter, RTVisitSCIStayCluster;

@interface RTVisitPipelineModuleSCI : NSObject <RTVisitPipelineModule>
{
    BOOL _useLowConfidence;
    BOOL _checkedForHintNearEntryLocation;
    NSMutableArray *_clusters;
    RTVisitSCIStayCluster *_workingHypothesis;
    unsigned long long _fsmState;
    unsigned long long _lcFSMState;
    RTHintManager *_hintManager;
    RTVisitHyperParameter *_hyperParameter;
    RTLearnedLocationManager *_learnedLocationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned long long fsmState; // @synthesize fsmState=_fsmState;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RTHintManager *hintManager; // @synthesize hintManager=_hintManager;
@property (strong, nonatomic) RTVisitHyperParameter *hyperParameter; // @synthesize hyperParameter=_hyperParameter;
@property (readonly, nonatomic) unsigned long long lcFSMState; // @synthesize lcFSMState=_lcFSMState;
@property (strong, nonatomic) RTLearnedLocationManager *learnedLocationManager; // @synthesize learnedLocationManager=_learnedLocationManager;
@property (readonly) Class superclass;
@property (readonly, nonatomic) RTVisitSCIStayCluster *workingHypothesis; // @synthesize workingHypothesis=_workingHypothesis;

+ (id)FSMEventToString:(unsigned long long)arg1;
+ (id)FSMStateToString:(unsigned long long)arg1;
+ (id)LCFSMStateToString:(unsigned long long)arg1;
+ (double)MinStaticIntervalForSLVArrival;
+ (double)MinStaticIntervalForSLVArrivalWithHint;
- (void).cxx_destruct;
- (void)addToClusters:(id)arg1;
- (void)addVisitFromWorkingHypothesis:(long long)arg1 confidence:(double)arg2;
- (void)exitFromWorkingHypothesis;
- (void)exitUntilNotInWorkingHypotheisWithBlock:(CDUnknownBlockType)arg1;
- (id)fetchKnownLOINearLocation:(id)arg1;
- (id)handleFSM:(unsigned long long)arg1 point:(id)arg2;
- (id)init;
- (id)initWithHintManager:(id)arg1 hyperParameter:(id)arg2 learnedLocationManager:(id)arg3 useLowConfidence:(BOOL)arg4;
- (BOOL)isInWorkingHypothesis;
- (BOOL)isNearHint:(id)arg1;
- (BOOL)isVisitInFlight;
- (id)process:(id)arg1;
- (void)processPoints:(id)arg1;
- (void)resetWorkingHypothesis;

@end
