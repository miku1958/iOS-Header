//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSMutableArray;

@interface CKDiscoverAllUserIdentitiesOperation : CKOperation
{
    CDUnknownBlockType _userIdentityDiscoveredBlock;
    CDUnknownBlockType _discoverAllUserIdentitiesCompletionBlock;
    NSMutableArray *_discoveredIdentities;
}

@property (copy, nonatomic) CDUnknownBlockType discoverAllUserIdentitiesCompletionBlock; // @synthesize discoverAllUserIdentitiesCompletionBlock=_discoverAllUserIdentitiesCompletionBlock;
@property (strong, nonatomic) NSMutableArray *discoveredIdentities; // @synthesize discoveredIdentities=_discoveredIdentities;
@property (copy, nonatomic) CDUnknownBlockType userIdentityDiscoveredBlock; // @synthesize userIdentityDiscoveredBlock=_userIdentityDiscoveredBlock;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)init;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setLongLived:(BOOL)arg1;

@end
