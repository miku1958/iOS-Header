//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MCManifest : NSObject
{
    NSString *_systemFilePath;
    NSString *_userFilePath;
    NSMutableDictionary *_systemManifest;
    NSMutableDictionary *_userManifest;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (void)_setSystemManifestPath:(id)arg1 userManifestPath:(id)arg2;
+ (id)installedProfileDataWithIdentifier:(id)arg1;
+ (id)installedProfileWithIdentifier:(id)arg1;
+ (id)installedSystemProfileDataWithIdentifier:(id)arg1;
+ (id)installedSystemProfileWithIdentifier:(id)arg1;
+ (id)installedUserProfileDataWithIdentifier:(id)arg1;
+ (id)installedUserProfileWithIdentifier:(id)arg1;
+ (id)sharedManifest;
- (void).cxx_destruct;
- (void)_setSystemManifest:(id)arg1 userManifest:(id)arg2;
- (id)_systemManifest;
- (id)_userManifest;
- (void)addIdentifierToManifest:(id)arg1 flag:(int)arg2;
- (id)allInstalledProfileIdentifiers;
- (id)allInstalledSystemProfileIdentifiers;
- (id)allInstalledUserProfileIdentifiers;
- (id)allProfileIdentifiersInstalledNonInteractivelyWithFilterFlags:(int)arg1;
- (void)dealloc;
- (id)identifiersOfProfilesWithFilterFlags:(int)arg1;
- (id)init;
- (id)installedProfileDataWithIdentifier:(id)arg1;
- (id)installedProfileWithIdentifier:(id)arg1;
- (id)installedSystemProfileWithIdentifier:(id)arg1;
- (id)installedUserProfileWithIdentifier:(id)arg1;
- (void)invalidateCache;
- (void)removeIdentifierFromSystemManifest:(id)arg1;
- (void)removeIdentifierFromUserManifest:(id)arg1;
- (id)systemManifest;
- (id)userManifest;

@end

