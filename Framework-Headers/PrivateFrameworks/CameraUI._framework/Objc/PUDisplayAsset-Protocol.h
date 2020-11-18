//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSCopying-Protocol.h>
#import <CameraUI/NSObject-Protocol.h>

@class NSDate, NSString;
@protocol PUDisplayAsset;

@protocol PUDisplayAsset <NSObject, NSCopying>

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) unsigned long long fullsizeDataFormat;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) NSString *uuid;

- (unsigned long long)isContentEqualTo:(id<PUDisplayAsset>)arg1;
@end

