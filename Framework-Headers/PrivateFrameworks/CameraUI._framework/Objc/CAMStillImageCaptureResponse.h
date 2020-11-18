//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureResponse.h>

#import <CameraUI/CAMTransientAssetConvertible-Protocol.h>

@class NSDate, NSDictionary, NSString, NSURL, UIImage;

@interface CAMStillImageCaptureResponse : CAMCaptureResponse <CAMTransientAssetConvertible>
{
    BOOL _originalForHDR;
    BOOL _originalForPortraitEffect;
    BOOL _expectingPairedVideo;
    NSString *_persistenceUUID;
    NSDate *_captureDate;
    NSDictionary *_metadata;
    NSString *_burstIdentifier;
    unsigned long long _burstRepresentedCount;
    UIImage *_imageWellImage;
}

@property (readonly, copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property (readonly, nonatomic) unsigned long long burstRepresentedCount; // @synthesize burstRepresentedCount=_burstRepresentedCount;
@property (readonly, nonatomic) NSDate *captureDate; // @synthesize captureDate=_captureDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CDStruct_1b6d18a9 duration;
@property (readonly, nonatomic, getter=isExpectingPairedVideo) BOOL expectingPairedVideo; // @synthesize expectingPairedVideo=_expectingPairedVideo;
@property (readonly, nonatomic) BOOL flashFired;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIImage *imageWellImage; // @synthesize imageWellImage=_imageWellImage;
@property (readonly, nonatomic) CDStruct_1b6d18a9 irisStillDisplayTime;
@property (readonly, nonatomic) NSString *irisStillImageUUID;
@property (readonly, nonatomic) NSURL *irisVideoPersistenceURL;
@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, copy, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) unsigned long long numberOfRepresentedAssets;
@property (readonly, nonatomic, getter=isOriginal) BOOL original;
@property (readonly, nonatomic, getter=isOriginalForHDR) BOOL originalForHDR; // @synthesize originalForHDR=_originalForHDR;
@property (readonly, nonatomic, getter=isOriginalForPortraitEffect) BOOL originalForPortraitEffect; // @synthesize originalForPortraitEffect=_originalForPortraitEffect;
@property (readonly, copy, nonatomic) NSURL *persistenceURL;
@property (readonly, copy, nonatomic) NSString *persistenceUUID; // @synthesize persistenceUUID=_persistenceUUID;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) unsigned short sessionIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *stillImageMetadata;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid;

- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1 captureSession:(unsigned short)arg2 captureDate:(id)arg3 metadata:(id)arg4 burstIdentifier:(id)arg5 burstRepresentedCount:(unsigned long long)arg6 imageWellImage:(id)arg7 originalForHDR:(BOOL)arg8 originalForPortraitEffect:(BOOL)arg9 expectingPairedVideo:(BOOL)arg10;

@end

