//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKOverlay-Protocol.h>

@class GEOTileCache, NSString;

@interface MKTileOverlay : NSObject <MKOverlay>
{
    NSString *_URLTemplate;
    struct CGSize _tileSize;
    BOOL _geometryFlipped;
    long long _minimumZ;
    long long _maximumZ;
    BOOL _canReplaceMapContent;
    unsigned int _providerID;
    GEOTileCache *_tileCache;
}

@property (readonly) NSString *URLTemplate; // @synthesize URLTemplate=_URLTemplate;
@property (readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
@property (nonatomic) BOOL canReplaceMapContent; // @synthesize canReplaceMapContent=_canReplaceMapContent;
@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isGeometryFlipped) BOOL geometryFlipped; // @synthesize geometryFlipped=_geometryFlipped;
@property (readonly) unsigned long long hash;
@property long long maximumZ; // @synthesize maximumZ=_maximumZ;
@property long long minimumZ; // @synthesize minimumZ=_minimumZ;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property struct CGSize tileSize; // @synthesize tileSize=_tileSize;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)URLForTilePath:(CDStruct_cbb88d5e)arg1;
- (void)_assignProviderID;
- (void)_flushCaches;
- (struct _GEOTileKey)_keyForPath:(CDStruct_cbb88d5e)arg1;
- (void)_loadTile:(id)arg1 result:(CDUnknownBlockType)arg2;
- (id)_tilesInMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 contentScale:(double)arg3;
- (int)_zoomLevelForScale:(double)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithURLTemplate:(id)arg1;
- (void)loadTileAtPath:(CDStruct_cbb88d5e)arg1 result:(CDUnknownBlockType)arg2;

@end
