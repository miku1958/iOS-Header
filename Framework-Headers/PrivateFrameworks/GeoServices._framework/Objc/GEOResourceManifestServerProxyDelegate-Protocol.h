//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOActiveTileGroup;
@protocol GEOResourceManifestServerProxy;

@protocol GEOResourceManifestServerProxyDelegate <NSObject>
- (oneway void)serverProxy:(id<GEOResourceManifestServerProxy>)arg1 didChangeActiveTileGroup:(GEOActiveTileGroup *)arg2 finishedCallback:(void (^)(void))arg3;
- (oneway void)serverProxyDidStopLoadingResources:(id<GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id<GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id<GEOResourceManifestServerProxy>)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id<GEOResourceManifestServerProxy>)arg1;
@end

