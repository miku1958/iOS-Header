//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeManagerObserver-Protocol.h>
#import <Home/HFHomeObserver-Protocol.h>

@class HFReaderWriterCache, HFWallpaperFileManager, HFWallpaperImageCache, HFWallpaperLegacyFileManager, NSString, NSUserDefaults;
@protocol HFNamedWallpaperSource;

@interface HFWallpaperManager : NSObject <HFHomeManagerObserver, HFHomeObserver>
{
    BOOL _wallpaperSourceRegistered;
    BOOL _hasPreheatedCache;
    id<HFNamedWallpaperSource> _namedWallpaperSource;
    HFWallpaperFileManager *_fileManager;
    HFWallpaperLegacyFileManager *_legacyFileManager;
    HFWallpaperImageCache *_imageCache;
    NSUserDefaults *_userDefaults;
    HFReaderWriterCache *_wallpapersCache;
    HFReaderWriterCache *_wallpaperSlicesCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) HFWallpaperFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property (nonatomic) BOOL hasPreheatedCache; // @synthesize hasPreheatedCache=_hasPreheatedCache;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFWallpaperImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property (strong, nonatomic) HFWallpaperLegacyFileManager *legacyFileManager; // @synthesize legacyFileManager=_legacyFileManager;
@property (strong, nonatomic) id<HFNamedWallpaperSource> namedWallpaperSource; // @synthesize namedWallpaperSource=_namedWallpaperSource;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property (strong, nonatomic) HFReaderWriterCache *wallpaperSlicesCache; // @synthesize wallpaperSlicesCache=_wallpaperSlicesCache;
@property (readonly, nonatomic) BOOL wallpaperSourceRegistered; // @synthesize wallpaperSourceRegistered=_wallpaperSourceRegistered;
@property (strong, nonatomic) HFReaderWriterCache *wallpapersCache; // @synthesize wallpapersCache=_wallpapersCache;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_cachedWallpaperForKey:(id)arg1;
- (id)_cachedWallpaperSliceForIdentifier:(id)arg1;
- (void)_dispatchWallpaperChangedForKey:(id)arg1;
- (void)_logUserMetricsAfterSettingWallpaper;
- (void)_migrateIfNeeded;
- (long long)_namedCollectionTypeForKey:(id)arg1;
- (id)_originalImageForWallpaper:(id)arg1;
- (void)_preloadWallpaperSlicesForKey:(id)arg1;
- (void)_preloadWallpapersForHome:(id)arg1;
- (void)_pruneUnusedWallpapers;
- (void)_pruneUnusedWallpapersWithExistingHomeKitIdentifiers:(id)arg1;
- (id)_resolveHomeKitObjectForKey:(id)arg1;
- (void)_setImageCacheForWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forHomeKitIdentifier:(id)arg3;
- (void)_setWallpaper:(id)arg1 image:(id)arg2 forKey:(id)arg3;
- (id)_sliceFromWallpaper:(id)arg1 variant:(long long)arg2 preloading:(BOOL)arg3;
- (id)_wallpaperForKey:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)allNamedWallpapersForCollection:(long long)arg1;
- (id)defaultNamedWallpaperForCollection:(long long)arg1;
- (id)generateProcessedImageFromWallpaper:(id)arg1 originalImage:(id)arg2;
- (void)home:(id)arg1 didRemoveRoom:(id)arg2;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;
- (id)imageForNamedWallpaper:(id)arg1;
- (id)init;
- (void)preheatCache;
- (void)registerWallpaperSource:(id)arg1 processedSource:(id)arg2;
- (void)setWallpaper:(id)arg1 image:(id)arg2 forHomeKitObject:(id)arg3;
- (id)sliceFromWallpaper:(id)arg1 variant:(long long)arg2;
- (id)wallpaperForHomeKitObject:(id)arg1;

@end

