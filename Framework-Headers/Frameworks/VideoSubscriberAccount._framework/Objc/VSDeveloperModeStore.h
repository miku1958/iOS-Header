//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSDeveloperServiceProtocol-Protocol.h>

@class NSString, VSPersistentContainer, VSRemoteNotifier;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VSDeveloperModeStore : NSObject <VSDeveloperServiceProtocol>
{
    VSPersistentContainer *_persistentContainer;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    VSRemoteNotifier *_serviceChangeRemoteNotifier;
    VSRemoteNotifier *_settingsChangeRemoteNotifier;
    VSRemoteNotifier *_providersChangeRemoteNotifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
@property (strong, nonatomic) VSRemoteNotifier *providersChangeRemoteNotifier; // @synthesize providersChangeRemoteNotifier=_providersChangeRemoteNotifier;
@property (strong, nonatomic) VSRemoteNotifier *serviceChangeRemoteNotifier; // @synthesize serviceChangeRemoteNotifier=_serviceChangeRemoteNotifier;
@property (strong, nonatomic) VSRemoteNotifier *settingsChangeRemoteNotifier; // @synthesize settingsChangeRemoteNotifier=_settingsChangeRemoteNotifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *settingsQueue; // @synthesize settingsQueue=_settingsQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_developerIdentityProviderInContext:(id)arg1;
- (id)_identityProviderFetchRequest;
- (void)_noteProvidersDidChange;
- (void)_noteServiceDidChange;
- (void)_noteSettingsDidChange;
- (id)_nullableObjectOrNSNull:(id)arg1;
- (void)_performIdentityProviderBlock:(CDUnknownBlockType)arg1;
- (void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchDeveloperIdentityProvidersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchDeveloperSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)legacySettingsPropertiesPath;
- (void)migrateSettingsPropertyFileIfNecessary;
- (void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)settingsPropertiesURL;
- (void)updateDeveloperSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

