//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKConcept, HKConceptIdentifier, HKSample, NSURL;

@protocol HKConceptStoreServerInterface <NSObject>
- (void)remote_breakAssociationFromSample:(HKSample *)arg1 toConcept:(HKConcept *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_cleanUpAfterUnitTestWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_currentIndexingState:(void (^)(unsigned long long))arg1;
- (void)remote_makeAssociationFromSample:(HKSample *)arg1 toConcept:(HKConcept *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_ontologyVersionWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)remote_queryConceptByIdentifier:(HKConceptIdentifier *)arg1 loadRelationships:(BOOL)arg2 completion:(void (^)(HKConcept *, NSError *))arg3;
- (void)remote_queryCountOfConceptsAssociatedToUserRecordsWithCompletion:(void (^)(long long, NSError *))arg1;
- (void)remote_queryRelationshipsForNodeWithID:(HKConceptIdentifier *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)remote_resetOntologyUsingAssetAtLocation:(NSURL *)arg1 rememberLocation:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)remote_startTaskServerIfNeeded;
- (void)remote_testTaskServerWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end
