//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface CKFetchUserIdentitiesOperation : CKOperation
{
    NSArray *_identities;
    CDUnknownBlockType _identityFetchedBlock;
    CDUnknownBlockType _fetchIdentitiesCompletionBlock;
    NSMutableDictionary *_lookupInfoToUserIdentities;
    NSMutableSet *_discoveredUserIdentities;
    NSMutableDictionary *_lookupErrors;
}

@property (strong, nonatomic) NSMutableSet *discoveredUserIdentities; // @synthesize discoveredUserIdentities=_discoveredUserIdentities;
@property (copy, nonatomic) CDUnknownBlockType fetchIdentitiesCompletionBlock; // @synthesize fetchIdentitiesCompletionBlock=_fetchIdentitiesCompletionBlock;
@property (strong, nonatomic) NSArray *identities; // @synthesize identities=_identities;
@property (copy, nonatomic) CDUnknownBlockType identityFetchedBlock; // @synthesize identityFetchedBlock=_identityFetchedBlock;
@property (strong, nonatomic) NSMutableDictionary *lookupErrors; // @synthesize lookupErrors=_lookupErrors;
@property (strong, nonatomic) NSMutableDictionary *lookupInfoToUserIdentities; // @synthesize lookupInfoToUserIdentities=_lookupInfoToUserIdentities;

- (void).cxx_destruct;
- (BOOL)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (unsigned long long)activityStart;
- (void)fillOutOperationInfo:(id)arg1;
- (id)init;
- (id)initWithIdentitiesToFetch:(id)arg1;
- (void)performCKOperation;

@end
