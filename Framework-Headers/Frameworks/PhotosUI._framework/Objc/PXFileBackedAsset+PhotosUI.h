//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXFileBackedAsset.h>

#import <PhotosUI/PUDisplayAsset-Protocol.h>

@class CLLocation, NSDate, NSString;

@interface PXFileBackedAsset (PhotosUI) <PUDisplayAsset>

@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) BOOL canPlayLoopingVideo;
@property (readonly, nonatomic) BOOL canPlayPhotoIris;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long deferredLogInfo;
@property (readonly, nonatomic) unsigned short deferredProcessingNeeded;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic, getter=isFavorite) BOOL favorite;
@property (readonly, nonatomic) BOOL hasPhotoColorAdjustments;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isPhotoIrisPlaceholder;
@property (readonly, nonatomic) BOOL isTemporaryPlaceholder;
@property (readonly, nonatomic, getter=isLivePhoto) BOOL livePhoto;
@property (readonly, nonatomic) NSDate *localCreationDate;
@property (readonly, nonatomic) NSString *localizedGeoDescription;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) unsigned long long mediaSubtypes;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) BOOL needsDeferredProcessing;
@property (readonly, nonatomic) unsigned long long originalFilesize;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoIrisStillDisplayTime;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoIrisVideoDuration;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) long long playbackVariation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) CDStruct_1b6d18a9 videoKeyFrameSourceTime;

@end
