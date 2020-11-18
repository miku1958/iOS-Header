//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKDGlobalConfigurationOperation, CKDServerConfiguration, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CKDServerConfigurationManager : NSObject
{
    BOOL _usesBackgroundSession;
    BOOL _allowsCellularAccess;
    int _iCloudEnvNotifToken;
    NSObject<OS_dispatch_source> *_switchNotifSource;
    NSOperationQueue *_configurationQueue;
    CKDServerConfiguration *_globalConfiguration;
    CKDGlobalConfigurationOperation *_globalConfigurationOp;
    NSOperationQueue *_containerSpecificInfoQueue;
    NSMutableDictionary *_containerSpecificInfos;
    NSMutableDictionary *_containerSpecificInfoOperations;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property (strong, nonatomic) NSOperationQueue *configurationQueue; // @synthesize configurationQueue=_configurationQueue;
@property (strong, nonatomic) NSMutableDictionary *containerSpecificInfoOperations; // @synthesize containerSpecificInfoOperations=_containerSpecificInfoOperations;
@property (strong, nonatomic) NSOperationQueue *containerSpecificInfoQueue; // @synthesize containerSpecificInfoQueue=_containerSpecificInfoQueue;
@property (strong, nonatomic) NSMutableDictionary *containerSpecificInfos; // @synthesize containerSpecificInfos=_containerSpecificInfos;
@property (strong, nonatomic) CKDServerConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;
@property (strong, nonatomic) CKDGlobalConfigurationOperation *globalConfigurationOp; // @synthesize globalConfigurationOp=_globalConfigurationOp;
@property (nonatomic) int iCloudEnvNotifToken; // @synthesize iCloudEnvNotifToken=_iCloudEnvNotifToken;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *switchNotifSource; // @synthesize switchNotifSource=_switchNotifSource;
@property (nonatomic) BOOL usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;

+ (void)expireConfigurationForContext:(id)arg1;
+ (void)expireGlobalConfiguration;
+ (id)sharedManagerUsingBackgroundSession:(BOOL)arg1 allowsCellularAccess:(BOOL)arg2;
- (void).cxx_destruct;
- (id)CKStatusReportArray;
- (void)_behaviorOptionsChanged:(id)arg1;
- (void)_dropAllConfigurations;
- (void)_expireConfigurationForContext:(id)arg1;
- (void)_expireGlobalConfiguration;
- (id)_uniqueStringForContainerAndAccount:(id)arg1;
- (void)_watchForSwitchPrefFileChanges;
- (void)configurationForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)containerScopedUserIDForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)fetchContainerSpecificInfoForContext:(id)arg1 needUserID:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)fetchGlobalConfigWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)publicURLForServerType:(long long)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)serverEnvironmentForContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

