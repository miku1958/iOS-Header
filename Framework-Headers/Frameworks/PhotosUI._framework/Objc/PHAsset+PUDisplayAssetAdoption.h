//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAsset.h>

#import <PhotosUI/PUDisplayAsset-Protocol.h>

@class NSDate, NSString;

@interface PHAsset (PUDisplayAssetAdoption) <PUDisplayAsset>

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) unsigned long long fullsizeDataFormat;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;

- (unsigned long long)isContentEqualTo:(id)arg1;
@end

