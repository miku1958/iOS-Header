//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface AVCapturePhotoSettingsInternal : NSObject
{
    NSDictionary *format;
    unsigned int rawPhotoPixelFormatType;
    long long uniqueID;
    long long flashMode;
    long long HDRMode;
    BOOL autoShallowDepthOfFieldEffectEnabled;
    BOOL originalPhotoDeliveryEnabled;
    BOOL autoStillImageStabilizationEnabled;
    BOOL highResolutionPhotoEnabled;
    NSURL *livePhotoMovieFileURL;
    NSURL *livePhotoMovieFileURLForOriginalPhoto;
    NSArray *livePhotoMovieMetadata;
    NSArray *livePhotoMovieMetadataForOriginalPhoto;
    NSDictionary *previewFormat;
    BOOL squareCropEnabled;
    unsigned int shutterSound;
    BOOL turboModeEnabled;
    BOOL autoDualCameraFusionEnabled;
    NSString *livePhotoContentIdentifier;
    NSString *livePhotoContentIdentifierForOriginalPhoto;
}

@end

