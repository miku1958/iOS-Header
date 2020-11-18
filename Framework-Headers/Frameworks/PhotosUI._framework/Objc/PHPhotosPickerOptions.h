//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, PHAsset, PHAssetCollection;

@interface PHPhotosPickerOptions : NSObject
{
    BOOL _hideTabBar;
    NSDictionary *_initialAssetsToSelect;
    PHAsset *_keyAsset;
    PHAssetCollection *_keyAssetCollection;
    NSArray *_excludedContentModes;
}

@property (copy, nonatomic) NSArray *excludedContentModes; // @synthesize excludedContentModes=_excludedContentModes;
@property (nonatomic) BOOL hideTabBar; // @synthesize hideTabBar=_hideTabBar;
@property (copy, nonatomic) NSDictionary *initialAssetsToSelect; // @synthesize initialAssetsToSelect=_initialAssetsToSelect;
@property (strong, nonatomic) PHAsset *keyAsset; // @synthesize keyAsset=_keyAsset;
@property (strong, nonatomic) PHAssetCollection *keyAssetCollection; // @synthesize keyAssetCollection=_keyAssetCollection;

- (void).cxx_destruct;

@end
