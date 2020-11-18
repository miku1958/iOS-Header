//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOSearchAttributionServerProxy-Protocol.h>

@class GEOSearchAttributionManifest, NSLock, NSMapTable, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOSearchAttributionServerProxy>
{
    NSMapTable *_listeners;
    NSLock *_listenersLock;
    BOOL _updatingManifest;
    NSMutableArray *_updateManifestCompletionHandlers;
    NSMutableArray *_updateManifestErrorHandlers;
    GEOSearchAttributionManifest *_attributionManifest;
    NSLock *_attributionManifestLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_attributionManifest;
- (void)_loadAttributionInfoForListener:(id)arg1 hasUpdatedManifest:(BOOL)arg2;
- (void)_pruneOldAttributionLogos;
- (void)_sendError:(id)arg1 toListener:(id)arg2;
- (void)_sendInfo:(id)arg1 updatedManifest:(BOOL)arg2 toListener:(id)arg3;
- (void)_updateManifestWithCompletionHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)loadAttributionInfoForIdentifier:(id)arg1 version:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;

@end

