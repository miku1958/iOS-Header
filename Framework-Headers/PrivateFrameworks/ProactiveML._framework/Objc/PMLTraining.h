//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProactiveML/PMLAWDMetricQueryDelegate-Protocol.h>
#import <ProactiveML/PMLTrainingProtocol-Protocol.h>

@class DESRecordStore, NSSet, NSString, PMLAWDAvailableSessionsTracker, PMLTrainingStore;

@interface PMLTraining : NSObject <PMLAWDMetricQueryDelegate, PMLTrainingProtocol>
{
    DESRecordStore *_fidesStore;
    PMLAWDAvailableSessionsTracker *_availableSessionsTracker;
    NSSet *_multiLabelModels;
    PMLTrainingStore *_store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) PMLTrainingStore *store; // @synthesize store=_store;
@property (readonly) Class superclass;

+ (BOOL)isEnabled;
+ (id)sharedSingletonWithDirectory:(id)arg1;
- (void).cxx_destruct;
- (void)_deleteAllSavedRecordsFromFidesStoreSync;
- (void)_sendSessionStatsToFides;
- (void)_sendStatsToFidesForModel:(id)arg1 sessionCount:(unsigned long long)arg2 positivesCount:(unsigned long long)arg3 support:(float)arg4;
- (void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(BOOL)arg5;
- (void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(BOOL)arg6;
- (void)availableSessionsStatsReportedToAWD;
- (void)deleteSessionsWithBundleID:(id)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)enumerateAvailableSessionsStatsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithStore:(id)arg1 fidesStore:(id)arg2 availableSessionsTracker:(id)arg3;
- (BOOL)isMultiLabelModel:(id)arg1;
- (BOOL)modelServerUpdateWithPayload:(id)arg1 error:(id *)arg2;
- (id)planReceivedWithPayload:(id)arg1 error:(id *)arg2;
- (void)trainWhile:(CDUnknownBlockType)arg1;
- (void)trainWhileDoneForTesting;
- (void)trimDb;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

