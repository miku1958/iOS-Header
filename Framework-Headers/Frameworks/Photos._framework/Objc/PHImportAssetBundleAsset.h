//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHImportAsset.h>

@class PFAssetBundle;

@interface PHImportAssetBundleAsset : PHImportAsset
{
    PFAssetBundle *_assetBundle;
}

@property (strong, nonatomic) PFAssetBundle *assetBundle; // @synthesize assetBundle=_assetBundle;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)assetDescription;
- (id)exifImageDate;
- (id)exifTimeZone;
- (id)initWithAssetBundleAtURL:(id)arg1 withImportSource:(id)arg2;
- (id)keywordTitles;
- (id)title;

@end

