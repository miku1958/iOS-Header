//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, PLManagedObjectContext, PLPhotoLibrary;

@interface PLWallpaperImporter : NSObject
{
    NSData *_wallpaperFileHash;
    NSArray *_allWallpaperURLs;
    PLPhotoLibrary *photoLibrary;
}

@property (readonly, strong, nonatomic) NSArray *allWallpaperURLs;
@property (readonly, strong, nonatomic) PLManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary;

+ (void)importWallpaperAssetsIntoPhotoLibrary:(id)arg1;
+ (id)posterImageURL;
- (id)_sortWallpaperFileKeys:(id)arg1;
- (void)addWallpaperURLsForModel:(id)arg1 toURLs:(id)arg2;
- (id)allExistingWallpaperAssets;
- (void)dealloc;
- (void)deleteAll;
- (void)importAll;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)updateAsNeeded;
- (id)wallpaperFileHash;

@end

