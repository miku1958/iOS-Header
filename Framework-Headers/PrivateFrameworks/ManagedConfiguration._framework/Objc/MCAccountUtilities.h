//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface MCAccountUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_signInQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *signInQueue; // @synthesize signInQueue=_signInQueue;

+ (id)accountDataclassesForBundleID:(id)arg1;
+ (id)appStoreAccountIdentifierForPersona:(id)arg1;
+ (BOOL)hasManagedAccountOfDataclasses:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_signIniCloudAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id *)arg4;
- (BOOL)_signIniTunesAccountWithAuthenticationResult:(id)arg1 personaID:(id)arg2 baseViewController:(id)arg3 outError:(id *)arg4;
- (id)init;
- (void)signInAccountsWithTypes:(id)arg1 authenticationResult:(id)arg2 personaID:(id)arg3 baseViewController:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end

