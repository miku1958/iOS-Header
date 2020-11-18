//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue;

@interface WKWallpaperBundleImporter : NSObject
{
    NSObject<OS_dispatch_queue> *__bundleImportQueue;
    NSArray *__wallpaperTypesOrdering;
    NSDictionary *__wallpaperTypeToBundleCollection;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *_bundleImportQueue; // @synthesize _bundleImportQueue=__bundleImportQueue;
@property (strong, nonatomic) NSDictionary *_wallpaperTypeToBundleCollection; // @synthesize _wallpaperTypeToBundleCollection=__wallpaperTypeToBundleCollection;
@property (strong, nonatomic) NSArray *_wallpaperTypesOrdering; // @synthesize _wallpaperTypesOrdering=__wallpaperTypesOrdering;
@property (readonly, nonatomic) long long numberOfWallpaperBundleCollections;

+ (id)defaultWallpaperBundleImporter;
+ (id)wallpapersConfigurationFileURL;
- (void).cxx_destruct;
- (void)_loadWallpapersFromDisk;
- (void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1;
- (id)init;
- (id)wallpaperBundleCollectionForWallpaperType:(unsigned long long)arg1;
- (id)wallpaperBundleWithIdentifier:(long long)arg1;
- (unsigned long long)wallpaperTypeAtIndex:(long long)arg1;

@end
