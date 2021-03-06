//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetsLibraryServices/PLXPCObject.h>

#import <Photos/PHPerformChangesRequest-Protocol.h>
#import <Photos/PLPerformChangesRequest-Protocol.h>
#import <Photos/PLPerformChangesRequestService-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSOrderedSet, NSString, PHPerformChangesInstrumentation;
@protocol PLPerformChangesRequestService;

@interface PHPerformChangesRequest : PLXPCObject <PHPerformChangesRequest, PLPerformChangesRequestService, PLPerformChangesRequest>
{
    PHPerformChangesInstrumentation *_instrumentation;
    NSMutableOrderedSet *_inserts;
    NSMutableOrderedSet *_updates;
    NSMutableOrderedSet *_deletes;
    BOOL _inService;
    id<PLPerformChangesRequestService> _service;
    NSMutableOrderedSet *_failedOnDemandRequests;
    NSMutableDictionary *_changeRequestsByUUID;
}

@property (readonly, nonatomic) long long accessLevel;
@property (readonly, nonatomic) long long accessScopeOptionsRequiredForRequestedChanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSOrderedSet *deletes; // @synthesize deletes=_deletes;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasChangeRequests;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSOrderedSet *inserts; // @synthesize inserts=_inserts;
@property (strong, nonatomic) PHPerformChangesInstrumentation *instrumentation; // @synthesize instrumentation=_instrumentation;
@property (readonly, nonatomic) NSArray *requestSets;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSOrderedSet *updates; // @synthesize updates=_updates;

+ (struct _xpc_type_s *)type;
- (void).cxx_destruct;
- (BOOL)_isSupportedLimitedLibraryChangeRequest:(id)arg1;
- (id)changeRequestForUUID:(id)arg1;
- (id)clientDescription;
- (void)decodeWithService:(id)arg1 clientAuthorization:(id)arg2;
- (long long)determineAuthorizationStatusForChanges;
- (void)discardUnsupportedLimitedLibraryChangeRequests;
- (void)encodeWithCoder:(id)arg1;
- (id)errorWithLocalizedDescription:(id)arg1;
- (void)executeWithService:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)libraryServicesManager;
- (void)notifyChangesTransactionFailedWithLazyPhotoLibrary:(id)arg1 error:(id)arg2;
- (id)persistentStoreCoordinator;
- (void)recordDeleteRequest:(id)arg1;
- (void)recordFailedOnDemandRequest:(id)arg1;
- (void)recordInsertRequest:(id)arg1;
- (void)recordUpdateRequest:(id)arg1;
- (void)setChangeRequest:(id)arg1 forUUID:(id)arg2;

@end

