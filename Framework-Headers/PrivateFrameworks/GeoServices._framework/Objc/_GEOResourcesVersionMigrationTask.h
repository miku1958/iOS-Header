//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrationTask-Protocol.h>

@class GEOActiveTileGroup, GEOReportedProgress, GEOResourceLoader, GEOResourceManifestConfiguration, GEOResources, GEOResourcesVersionMigrator, GEOTileGroup, NSArray, NSProgress, NSSet, NSString;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOResourcesVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>
{
    GEOResourcesVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _running;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOTileGroup *_newTileGroup;
    GEOResources *_resourceManifest;
    GEOActiveTileGroup *_oldTileGroup;
    NSSet *_activeScales;
    NSSet *_activeScenarios;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOResourceLoader *_immediateResourceLoader;
    GEOResourceLoader *_wifiOnlyResourceLoader;
    NSArray *_loadedResources;
    NSArray *_unloadedConditionalResources;
    GEOReportedProgress *_progress;
    id<NSObject> _transaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long estimatedWeight;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<NSObject> transaction; // @synthesize transaction=_transaction;

+ (Class)_resourceLoaderClass;
+ (id)_resourcesDirectory:(id)arg1;
- (void).cxx_destruct;
- (void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_resourcesDirectory;
- (id)_staleResourceForResource:(id)arg1;
- (void)cancel;
- (id)init;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 activeScales:(id)arg6 activeScenarios:(id)arg7;
- (void)populateTileGroup:(id)arg1;
- (void)removeOldData:(id)arg1;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;

@end

