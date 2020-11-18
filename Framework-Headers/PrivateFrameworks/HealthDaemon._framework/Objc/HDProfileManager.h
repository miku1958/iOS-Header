//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDaemon, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDProfileManager : NSObject
{
    HDDaemon *_daemon;
    NSMutableDictionary *_profiles;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

- (void).cxx_destruct;
- (id)_directoryNameForProfileIdentifier:(id)arg1;
- (id)_directoryURLForProfileIdentifier:(id)arg1;
- (id)_profileIdentifierForDirectoryName:(id)arg1 error:(id *)arg2;
- (void)_resourceQueue_addProfile:(id)arg1;
- (id)_resourceQueue_createProfileOfType:(long long)arg1 name:(id)arg2 error:(id *)arg3;
- (BOOL)_resourceQueue_deleteProfile:(id)arg1 error:(id *)arg2;
- (void)_resourceQueue_invalidateAndWait;
- (void)_resourceQueue_loadSecondaryProfiles;
- (id)_resourceQueue_profileForIdentifier:(id)arg1;
- (void)addProfile:(id)arg1;
- (id)allProfileIdentifiers;
- (id)createProfileOfType:(long long)arg1 displayName:(id)arg2 error:(id *)arg3;
- (void)deleteProfile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDaemon:(id)arg1;
- (void)invalidateAndWait;
- (id)newProfileOfType:(long long)arg1 profileIdentifier:(id)arg2 daemon:(id)arg3 directoryPath:(id)arg4;
- (id)profileAssociatedWithNRDeviceUUID:(id)arg1;
- (id)profileForIdentifier:(id)arg1;
- (id)profileIdentifierForUUID:(id)arg1;
- (void)reloadSecondaryProfiles;

@end
