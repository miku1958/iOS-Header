//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDCacheBasedRequest.h>

@class CKDDiscoverUserIdentitiesURLRequest, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPublicIdentityLookupRequest : CKDCacheBasedRequest
{
    CDUnknownBlockType _perLookupInfoProgressBlock;
    CDUnknownBlockType _lookupCompletionBlock;
    NSArray *_originalLookupInfosToFetch;
    NSMutableArray *_lookupInfosToFetch;
    CKDDiscoverUserIdentitiesURLRequest *_request;
}

@property (copy, nonatomic) CDUnknownBlockType lookupCompletionBlock; // @synthesize lookupCompletionBlock=_lookupCompletionBlock;
@property (strong, nonatomic) NSMutableArray *lookupInfosToFetch; // @synthesize lookupInfosToFetch=_lookupInfosToFetch;
@property (strong, nonatomic) NSArray *originalLookupInfosToFetch; // @synthesize originalLookupInfosToFetch=_originalLookupInfosToFetch;
@property (copy, nonatomic) CDUnknownBlockType perLookupInfoProgressBlock; // @synthesize perLookupInfoProgressBlock=_perLookupInfoProgressBlock;
@property (strong, nonatomic) CKDDiscoverUserIdentitiesURLRequest *request; // @synthesize request=_request;

+ (void)removeCacheForLookupInfos:(id)arg1 inCache:(id)arg2;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_generateOONPrivateKeyWithError:(id *)arg1;
- (void)_receivedUserIdentity:(id)arg1 forLookupInfo:(id)arg2 error:(id)arg3;
- (void)_saveUserIdentity:(id)arg1 forLookupInfo:(id)arg2;
- (BOOL)_tryComplete;
- (id)ckShortDescription;
- (id)description;
- (void)finishWithError:(id)arg1;
- (id)initWithOperation:(id)arg1 lookupInfos:(id)arg2;
- (void)performRequest;
- (id)spawnURLRequests;

@end

