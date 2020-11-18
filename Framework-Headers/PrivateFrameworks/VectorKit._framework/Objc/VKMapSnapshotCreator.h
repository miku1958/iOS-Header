//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/MapEngineDelegate-Protocol.h>
#import <VectorKit/VKImageCanvasDelegate-Protocol.h>

@class GEOResourceManifestConfiguration, NSLocale, NSString, VKGlobeImageCanvas, VKMapImageCanvas, VKMemoryObserver;

@interface VKMapSnapshotCreator : NSObject <VKImageCanvasDelegate, MapEngineDelegate>
{
    VKMapImageCanvas *_mapCanvas;
    VKGlobeImageCanvas *_globeCanvas;
    long long _mapType;
    CDStruct_80aa614a _mapDisplayStyle;
    BOOL _didBecomeFullyDrawn;
    BOOL _hasFailedTiles;
    CDUnknownBlockType _completion;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    struct unique_ptr<md::MapEngine, std::__1::default_delete<md::MapEngine>> _mapEngine;
    shared_ptr_e963992e _taskContext;
    unsigned char _emphasis;
    BOOL _didSoftDealloc;
    VKMemoryObserver *_memoryObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char emphasis; // @synthesize emphasis=_emphasis;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long labelScaleFactor;
@property (nonatomic) BOOL localizeLabels;
@property (nonatomic) CDStruct_80aa614a mapDisplayStyle; // @synthesize mapDisplayStyle=_mapDisplayStyle;
@property (nonatomic) long long mapType;
@property (nonatomic) BOOL showsBuildings;
@property (nonatomic) BOOL showsPointLabels;
@property (nonatomic) BOOL showsPointsOfInterest;
@property (nonatomic) BOOL showsVenues;
@property (readonly) struct CGSize size;
@property (readonly) Class superclass;

+ (BOOL)supportsSharingThumbnails;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_transferSettingsFrom:(id)arg1 to:(id)arg2;
- (id)activeCanvas;
- (void)addCustomFeatureDataSource:(id)arg1;
- (void)cancel;
- (void)cancelFlushingTileDecodes:(BOOL)arg1;
- (void)dealloc;
- (void)didPresent;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3;
- (id)initWithSize:(struct CGSize)arg1 scale:(double)arg2 homeQueue:(id)arg3 manifestConfiguration:(id)arg4 locale:(id)arg5;
- (BOOL)isRoadClassDisabled:(int)arg1;
- (void)lookAtX:(unsigned long long)arg1 y:(unsigned long long)arg2 z:(unsigned long long)arg3;
- (void)nearestVenueDidChange:(const struct Venue *)arg1 building:(const struct VenueBuilding *)arg2;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)renderSnapshot:(CDUnknownBlockType)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)softDealloc;
- (BOOL)wantsTimerTick;
- (void)willLayoutWithTimestamp:(double)arg1;

@end

