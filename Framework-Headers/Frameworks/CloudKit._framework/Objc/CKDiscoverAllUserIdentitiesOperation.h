//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

#import <CloudKit/CKDiscoverAllUserIdentitiesOperationCallbacks-Protocol.h>

@class CKDiscoverUserIdentitiesOperationInfo, NSMutableDictionary;
@protocol CKDiscoverAllUserIdentitiesOperationCallbacks;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation <CKDiscoverAllUserIdentitiesOperationCallbacks>
{
    CDUnknownBlockType _userIdentityDiscoveredBlock;
    CDUnknownBlockType _discoverAllUserIdentitiesCompletionBlock;
    NSMutableDictionary *_identityToContactIdentifiers;
}

@property (readonly, nonatomic) id<CKDiscoverAllUserIdentitiesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property (copy, nonatomic) CDUnknownBlockType discoverAllUserIdentitiesCompletionBlock; // @synthesize discoverAllUserIdentitiesCompletionBlock=_discoverAllUserIdentitiesCompletionBlock;
@property (strong, nonatomic) NSMutableDictionary *identityToContactIdentifiers; // @synthesize identityToContactIdentifiers=_identityToContactIdentifiers;
@property (readonly, nonatomic) CKDiscoverUserIdentitiesOperationInfo *operationInfo; // @dynamic operationInfo;
@property (copy, nonatomic) CDUnknownBlockType userIdentityDiscoveredBlock; // @synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock;

+ (Class)operationInfoClass;
- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)handleUserIdentityDiscovery:(id)arg1;
- (id)init;
- (void)performCKOperation;

@end

