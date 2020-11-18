//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SOConfiguration, SOConfigurationVersion;

@interface SOConfigurationHost : NSObject
{
    SOConfiguration *_configuration;
    SOConfigurationVersion *_configurationVersion;
    NSMutableArray *_removedProfiles;
}

@property (readonly, nonatomic) long long configVersion;

+ (id)_loadProfilesFromDict:(id)arg1;
+ (id)_loadProfilesFromURL:(id)arg1;
+ (id)defaultManager;
- (void).cxx_destruct;
- (id)_checkAssociatedDomainForProfiles:(id)arg1;
- (id)_checkExtensionsExistenceForProfiles:(id)arg1;
- (void)_checkNewVersion;
- (void)_configurationLoadedWithReason:(long long)arg1;
- (id)_defaultConfigurationFile;
- (id)_defaultConfigurationPath;
- (void)_extensionsLoaded:(id)arg1;
- (BOOL)_initDataVaultIfNeededWithError:(id *)arg1;
- (BOOL)_isConfigFileAvailable;
- (void)_loadConfigForFirstTime;
- (void)_reloadConfigWithReason:(long long)arg1;
- (BOOL)_saveConfigToFile:(id)arg1 error:(id *)arg2;
- (void)_startKeyBagObserverForReloadingConfiguration;
- (id)_stringWithReason:(long long)arg1;
- (id)configurationForClientWithError:(id *)arg1;
- (void)dealloc;
- (id)init;
- (id)profileForURL:(id)arg1 responseCode:(long long)arg2;
- (id)profilesWithExtensionBundleIdentifier:(id)arg1;
- (id)realms;
- (id)removedProfileForExtensionBundleIdentifier:(id)arg1;
- (BOOL)saveConfigurationData:(id)arg1 error:(id *)arg2;
- (long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3;

@end
