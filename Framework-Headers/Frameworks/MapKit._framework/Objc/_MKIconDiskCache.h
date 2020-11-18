//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSLock, NSMutableArray, NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _MKIconDiskCache : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSURL *_directoryURL;
    NSObject<OS_dispatch_queue> *_storingQueue;
    NSLock *_lock;
    NSMutableArray *_inProgressUUIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateVersionsInfo;
- (void)dealloc;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 drawingBlock:(CDUnknownBlockType)arg4;
- (id)imageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 isCarplay:(BOOL)arg4 isTransit:(BOOL)arg5 isTransparent:(BOOL)arg6 drawingBlock:(CDUnknownBlockType)arg7;
- (id)initWithDirectoryURL:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;

@end

