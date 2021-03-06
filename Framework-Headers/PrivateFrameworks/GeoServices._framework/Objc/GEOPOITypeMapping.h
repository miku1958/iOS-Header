//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class GEOResourceManager, GEOResourceManifestManager, NSDictionary, NSSet, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEOPOITypeMapping : NSObject <GEOResourceManifestTileGroupObserver>
{
    NSSet *_alwaysVisibleTypes;
    NSDictionary *_categoryToTypeMapping;
    NSDictionary *_typeToCategoryMapping;
    geo_isolater *_accessLock;
    GEOResourceManifestManager *_manifestManager;
    GEOResourceManager *_resourceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMapping;
- (void).cxx_destruct;
- (void)_tearDown;
- (id)alwaysVisibleTypes;
- (id)categoryForPOIType:(int)arg1;
- (id)categoryToTypeMapping;
- (void)clearCachedValues;
- (void)dealloc;
- (id)init;
- (id)initWithResourceManifestManager:(id)arg1 resourceManager:(id)arg2;
- (BOOL)isAlwaysVisiblePOIType:(int)arg1;
- (void)loadPOICategoriesJSON;
- (BOOL)parseCategoryMappingJSON:(id)arg1 categoryToPOIType:(id *)arg2 POITypeToCategory:(id *)arg3;
- (void)parsePOICategoriesJSON:(id)arg1;
- (id)parseVisiblePOITypesJSON:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)typeToCategoryMapping;
- (id)typesForPOICategories:(id)arg1;

@end

