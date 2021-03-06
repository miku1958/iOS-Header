//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBApplicationServerShortcutDelegate-Protocol.h>

@class FBServiceClientAuthenticator, NSString;

@interface SBApplicationShortcutService : NSObject <SBApplicationServerShortcutDelegate>
{
    FBServiceClientAuthenticator *_serviceClientFullAccessEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientCustomImageEntitlementAuthenticator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_authenticateClient:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_checkEntitlementsForClient:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_sanitizeApplicationShortcutItems:(id)arg1 withEntitlements:(unsigned long long)arg2;
- (void)applicationServer:(id)arg1 client:(id)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)applicationServer:(id)arg1 client:(id)arg2 setDynamicApplicationShortcutItems:(id)arg3 forBundleIdentifier:(id)arg4;
- (id)init;

@end

