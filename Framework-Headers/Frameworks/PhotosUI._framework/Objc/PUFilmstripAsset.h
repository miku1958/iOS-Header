//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUDisplayAsset-Protocol.h>

@class AVAsset, CLLocation, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface PUFilmstripAsset : NSObject <PUDisplayAsset>
{
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    BOOL __isSourceTimeAccurate;
    double _sourceTime;
    AVAsset *__asset;
    double __normalizedTime;
}

@property (nonatomic, setter=_setAsset:) AVAsset *_asset; // @synthesize _asset=__asset;
@property (nonatomic, setter=_setSourceTimeAccurate:) BOOL _isSourceTimeAccurate; // @synthesize _isSourceTimeAccurate=__isSourceTimeAccurate;
@property (nonatomic, setter=_setNormalizedTime:) double _normalizedTime; // @synthesize _normalizedTime=__normalizedTime;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) unsigned long long fullsizeDataFormat;
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (nonatomic) double sourceTime; // @synthesize sourceTime=_sourceTime;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithNormalizedTime:(double)arg1 asset:(id)arg2;
- (unsigned long long)isContentEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)loadSourceTimeWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

