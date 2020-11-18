//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSNumber, NSString, PLSpatialOverCaptureInformation;

@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>

@property (readonly, strong, nonatomic) NSNumber *embeddedThumbnailHeight;
@property (readonly, strong, nonatomic) NSNumber *embeddedThumbnailLength;
@property (readonly, strong, nonatomic) NSNumber *embeddedThumbnailOffset;
@property (readonly, strong, nonatomic) NSNumber *embeddedThumbnailWidth;
@property (readonly, strong, nonatomic) NSString *exifTimestampString;
@property (readonly, copy, nonatomic) NSString *originatingAssetIdentifier;
@property (readonly, nonatomic) long long ptpTrashedState;
@property (readonly, strong, nonatomic) PLSpatialOverCaptureInformation *spatialOverCaptureInformation;

@end
