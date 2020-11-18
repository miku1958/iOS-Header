//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHAsset;

@interface PHAssetOriginalMetadataProperties : NSObject
{
    short _originalHeight;
    short _originalWidth;
    short _originalExifOrientation;
    int _originalFilesize;
    PHAsset *_asset;
    NSString *_originalAssetsUUID;
    NSString *_originalFilename;
    NSString *_originalPath;
}

@property (readonly, weak, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) NSString *originalAssetsUUID; // @synthesize originalAssetsUUID=_originalAssetsUUID;
@property (readonly, nonatomic) short originalExifOrientation; // @synthesize originalExifOrientation=_originalExifOrientation;
@property (readonly, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property (readonly, nonatomic) int originalFilesize; // @synthesize originalFilesize=_originalFilesize;
@property (readonly, nonatomic) short originalHeight; // @synthesize originalHeight=_originalHeight;
@property (readonly, nonatomic) NSString *originalPath; // @synthesize originalPath=_originalPath;
@property (readonly, nonatomic) short originalWidth; // @synthesize originalWidth=_originalWidth;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2;

@end

