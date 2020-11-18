//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKTileSetBackedTileSource.h>

__attribute__((visibility("hidden")))
@interface VKLabelTileSource : VKTileSetBackedTileSource
{
    shared_ptr_e1d4bd06 _labelManager;
    BOOL _localizeLabels;
    unsigned char _labelScaleFactor;
}

@property (nonatomic) unsigned char labelScaleFactor; // @synthesize labelScaleFactor=_labelScaleFactor;
@property (nonatomic) BOOL localizeLabels; // @synthesize localizeLabels=_localizeLabels;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned char)_labelTileType;
- (void)dealloc;
- (long long)defaultMaximumZoomLevel;
- (id)initWithTileSet:(id)arg1 resourceManifestConfiguration:(id)arg2 locale:(id)arg3 sharedResources:(id)arg4 taskContext:(shared_ptr_e963992e)arg5 labelManager:(const shared_ptr_e1d4bd06 *)arg6;
- (unsigned int)maximumDownloadZoomLevel;
- (BOOL)maximumZoomLevelBoundsCamera;
- (BOOL)minimumZoomLevelBoundsCamera;
- (BOOL)shouldObeyHybridUnavailableRegions;
- (struct TaskQueue *)tileDecodeQueue;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3 userInfo:(id)arg4;

@end

