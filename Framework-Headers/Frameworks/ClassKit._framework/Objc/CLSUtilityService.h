//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSEndpointConnection;
@protocol OS_dispatch_queue;

@interface CLSUtilityService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    CLSEndpointConnection *_endpointConnection;
}

@property (strong, nonatomic) CLSEndpointConnection *endpointConnection; // @synthesize endpointConnection=_endpointConnection;

+ (Class)endpointClass;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDevModePerson:(id)arg1 role:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authorizationStatusForContextAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)databasePathWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchReportsWithPredicate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getClassKitCatalogEnvironmentWithCompletion:(CDUnknownBlockType)arg1;
- (void)getDevModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)getUserDefaultForDefaultNamed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)recreateDatabase:(BOOL)arg1 andTerminateDaemonWithCompletion:(CDUnknownBlockType)arg2;
- (void)recreateDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)recreateDevelopmentDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAuthorizationStatus:(unsigned long long)arg1 forContextAtPath:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setClassKitCatalogEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setDevMode:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setUserDefaultValue:(id)arg1 forDefaultNamed:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)statusWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncFetchWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncGetClassKitCatalogEnvironmentWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncGetDevModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncPushWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncRecreateDevelopmentDatabaseWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncSetClassKitCatalogEnvironment:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncSetDevMode:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)syncStatsWithCompletion:(CDUnknownBlockType)arg1;
- (id)syncUtilityServer:(CDUnknownBlockType)arg1;
- (void)userDefaultsConfigurationDictionaryWithCompletion:(CDUnknownBlockType)arg1;
- (id)utilityServer:(CDUnknownBlockType)arg1;

@end
