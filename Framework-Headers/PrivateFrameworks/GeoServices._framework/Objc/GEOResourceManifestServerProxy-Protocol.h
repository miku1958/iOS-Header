//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOActiveTileGroup, GEOResourceManifestConfiguration, NSNumber, NSObject, NSProgress, NSString;
@protocol GEOResourceManifestServerProxyDelegate, OS_dispatch_queue;

@protocol GEOResourceManifestServerProxy <NSObject>

@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (weak, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;

- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (NSString *)authToken;
- (void)cancelCurrentManifestUpdate;
- (void)closeConnection;
- (GEOResourceManifestConfiguration *)configuration;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)forceUpdate:(long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)getResourceManifestWithHandler:(void (^)(GEOResourceManifestDownload *, NSError *))arg1;
- (id)initWithDelegate:(id<GEOResourceManifestServerProxyDelegate>)arg1 configuration:(GEOResourceManifestConfiguration *)arg2;
- (unsigned long long)maximumZoomLevelForStyle:(int)arg1 scale:(int)arg2;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (NSObject<OS_dispatch_queue> *)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(NSNumber *)arg1;
- (void)setActiveTileGroupIdentifier:(NSNumber *)arg1 updateType:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)setManifestToken:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateIfNecessary:(void (^)(NSError *))arg1;
- (NSProgress *)updateProgress;
@end
