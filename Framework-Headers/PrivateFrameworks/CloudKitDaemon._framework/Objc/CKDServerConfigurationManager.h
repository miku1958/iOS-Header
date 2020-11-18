//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDSystemAvailabilityWatcher-Protocol.h>

@class CKDServerConfiguration, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDServerConfigurationManager : NSObject <CKDSystemAvailabilityWatcher>
{
    BOOL _shouldDropAllConfigurations;
    int _iCloudEnvNotifToken;
    NSObject<OS_dispatch_source> *_switchNotifSource;
    NSOperationQueue *_configurationQueue;
    CKDServerConfiguration *_globalConfiguration;
    NSMutableSet *_globalConfigurationOps;
    NSOperationQueue *_containerSpecificInfoQueue;
    NSMutableDictionary *_containerSpecificInfos;
    NSMutableDictionary *_containerSpecificInfoOperations;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (strong, nonatomic) NSOperationQueue *configurationQueue; // @synthesize configurationQueue=_configurationQueue;
@property (strong, nonatomic) NSMutableDictionary *containerSpecificInfoOperations; // @synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations;
@property (strong, nonatomic) NSOperationQueue *containerSpecificInfoQueue; // @synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue;
@property (strong, nonatomic) NSMutableDictionary *containerSpecificInfos; // @synthesize containerSpecificInfos=_containerSpecificInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CKDServerConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;
@property (strong, nonatomic) NSMutableSet *globalConfigurationOps; // @synthesize globalConfigurationOps=_globalConfigurationOps;
@property (readonly) unsigned long long hash;
@property (nonatomic) int iCloudEnvNotifToken; // @synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (nonatomic) BOOL shouldDropAllConfigurations; // @synthesize shouldDropAllConfigurations=_shouldDropAllConfigurations;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *switchNotifSource; // @synthesize switchNotifSource=_switchNotifSource;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_behaviorOptionsChanged:(id)arg1;
- (void)_dropAllConfigurations;
- (void)_fetchContainerSpecificInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchGlobalConfigForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_reallyDropAllConfigurations;
- (id)_uniqueStringForContainerAndAccount:(id)arg1;
- (void)_watchForSwitchPrefFileChanges;
- (void)configurationForOperation:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)containerInfoForOperation:(id)arg1 requireUserIDs:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)expireConfigurationForContext:(id)arg1;
- (void)expireGlobalConfiguration;
- (id)init;
- (void)systemAvailabilityChanged:(unsigned long long)arg1;

@end

