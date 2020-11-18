//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ACAccountStore, GKThreadsafeDictionary;

@interface GKPlayerCredentialController : NSObject
{
    long long _loginCancelledCount;
    ACAccountStore *_store;
    GKThreadsafeDictionary *_primaryCredentialCache;
    GKThreadsafeDictionary *_allCredentialsCache;
}

@property (strong, nonatomic) GKThreadsafeDictionary *allCredentialsCache; // @synthesize allCredentialsCache=_allCredentialsCache;
@property long long loginCancelledCount; // @synthesize loginCancelledCount=_loginCancelledCount;
@property (readonly) BOOL loginDisabled;
@property (strong, nonatomic) GKThreadsafeDictionary *primaryCredentialCache; // @synthesize primaryCredentialCache=_primaryCredentialCache;
@property (strong, nonatomic) ACAccountStore *store; // @synthesize store=_store;

+ (id)accessQueue;
+ (void)migrateOldAccountInformation;
+ (id)sharedController;
- (void)_transact:(CDUnknownBlockType)arg1 complete:(CDUnknownBlockType)arg2;
- (id)_transactAndWait:(CDUnknownBlockType)arg1;
- (id)accessQueue;
- (void)accountStoreDidChange:(id)arg1;
- (id)allCredentialsForEnvironment:(long long)arg1;
- (id)credentialForPlayer:(id)arg1 environment:(long long)arg2;
- (id)credentialForUsername:(id)arg1 environment:(long long)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidateCredentialCaches;
- (unsigned long long)loginStatusForCredential:(id)arg1;
- (id)primaryCredentialForEnvironment:(long long)arg1;
- (id)pushCredentialForEnvironment:(long long)arg1;
- (void)removeAllCredentialsForEnvironment:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)replaceCredential:(id)arg1 withCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setPrimaryCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)suggestedUsername;

@end

