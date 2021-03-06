//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRSUIWallpaper : NSObject
{
    BOOL _supportsDynamicAppearance;
    BOOL _supportsDashboardPlatterMaterials;
    BOOL _iconLabelsRequireBackground;
    NSString *_wallpaperIdentifier;
    NSString *_wallpaperAssetCatalogName;
    NSString *_thumbnailAssetCatalogName;
}

@property (readonly, nonatomic) BOOL iconLabelsRequireBackground; // @synthesize iconLabelsRequireBackground=_iconLabelsRequireBackground;
@property (readonly, nonatomic) BOOL supportsDashboardPlatterMaterials; // @synthesize supportsDashboardPlatterMaterials=_supportsDashboardPlatterMaterials;
@property (readonly, nonatomic) BOOL supportsDynamicAppearance; // @synthesize supportsDynamicAppearance=_supportsDynamicAppearance;
@property (strong, nonatomic) NSString *thumbnailAssetCatalogName; // @synthesize thumbnailAssetCatalogName=_thumbnailAssetCatalogName;
@property (strong, nonatomic) NSString *wallpaperAssetCatalogName; // @synthesize wallpaperAssetCatalogName=_wallpaperAssetCatalogName;
@property (readonly, copy, nonatomic) NSString *wallpaperIdentifier; // @synthesize wallpaperIdentifier=_wallpaperIdentifier;

+ (id)_wallpaperInfo;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWallpaperIdentifier:(id)arg1;
- (id)thumbnailColor;
- (id)thumbnailImageCompatibleWithTraitCollection:(id)arg1;
- (id)wallpaperColor;
- (id)wallpaperImageCompatibleWithTraitCollection:(id)arg1;

@end

