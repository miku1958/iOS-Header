//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/TRIArtifactProvider-Protocol.h>

@class CKContainer, CKRecordZoneID, NSString;
@protocol TRIDateProviding, TRINamespaceDescriptorProviding, TRIPaths;

@interface TRICKNativeArtifactProvider : NSObject <TRIArtifactProvider>
{
    CKContainer *_container;
    CKRecordZoneID *_zoneID;
    NSString *_teamId;
    id<TRIDateProviding> _dateProvider;
    id<TRINamespaceDescriptorProviding> _namespaceDescriptorProvider;
    id<TRIPaths> _paths;
    NSString *_bundleId;
}

@property (readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (readonly, nonatomic) id<TRIDateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property (readonly, nonatomic) id<TRINamespaceDescriptorProviding> namespaceDescriptorProvider; // @synthesize namespaceDescriptorProvider=_namespaceDescriptorProvider;
@property (readonly, nonatomic) id<TRIPaths> paths; // @synthesize paths=_paths;
@property (readonly, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property (readonly, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

+ (id)cloudkitIdentifierForContainer:(int)arg1;
+ (id)containerForIdentifier:(id)arg1;
+ (int)containerFromCkContainer:(id)arg1;
+ (id)mockSQLiteContainerWithIdentifier:(id)arg1;
+ (id)providerForContainer:(int)arg1 teamId:(id)arg2 bundleId:(id)arg3 dateProvider:(id)arg4 namespaceDescriptorProvider:(id)arg5 paths:(id)arg6;
+ (id)recordZoneForContainerIdentifier:(id)arg1 teamId:(id)arg2;
- (void).cxx_destruct;
- (void)_fetchExperimentWithExperimentId:(id)arg1 deploymentId:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchExperimentsWithCursor:(id)arg1 withNamespaceNames:(id)arg2 sinceDate:(id)arg3 fetchRollbacksOnly:(BOOL)arg4 options:(id)arg5 resultsHandler:(CDUnknownBlockType)arg6;
- (void)_fetchNotificationsWithQueryType:(unsigned long long)arg1 withCursor:(id)arg2 withNamespaceNames:(id)arg3 sinceDate:(id)arg4 options:(id)arg5 resultsHandler:(CDUnknownBlockType)arg6;
- (id)_selectAssetIndexesFromTreatment:(id)arg1 requestedAssetIndexes:(id)arg2;
- (id)configurationFromOptions:(id)arg1;
- (void)fetchExperimentNotificationsWithNamespaceNames:(id)arg1 rollbacksOnly:(BOOL)arg2 lastFetchDateOverride:(id)arg3 options:(id)arg4 resultsHandler:(CDUnknownBlockType)arg5;
- (void)fetchExperimentWithExperimentDeployment:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchExperimentWithLatestDeploymentForExperimentId:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchTreatmentWithId:(id)arg1 assetIndexes:(id)arg2 options:(id)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)initWithCloudKitContainer:(int)arg1 teamId:(id)arg2 bundleId:(id)arg3 dateProvider:(id)arg4 namespaceDescriptorProvider:(id)arg5 paths:(id)arg6;
- (id)queryOperationForRecordType:(id)arg1 predicate:(id)arg2 options:(id)arg3 recordFetchedBlock:(CDUnknownBlockType)arg4 queryCompletionBlock:(CDUnknownBlockType)arg5;
- (id)queryOperationWithCursor:(id)arg1 options:(id)arg2 recordFetchedBlock:(CDUnknownBlockType)arg3 queryCompletionBlock:(CDUnknownBlockType)arg4;

@end
