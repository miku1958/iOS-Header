//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoServices/NSProgressReporting-Protocol.h>

@class NSError, NSProgress, NSString, NSURL, NSUUID, PFMediaCapabilities, PHMediaFormatConversionCompositeRequest, PHMediaFormatConversionDestination, PHMediaFormatConversionSource;

@interface PHMediaFormatConversionRequest : NSObject <NSProgressReporting>
{
    double _formatConversionExpansionFactor;
    BOOL _forceFormatConversion;
    BOOL _shouldPadOutputFileToEstimatedLength;
    BOOL _useTransferBehaviorUserPreference;
    BOOL _requiresSinglePassVideoConversion;
    BOOL _preflighted;
    long long _livePhotoPairingIdentifierBehavior;
    NSString *_livePhotoPairingIdentifier;
    long long _status;
    NSProgress *_progress;
    NSError *_error;
    NSString *_outputFilename;
    PHMediaFormatConversionDestination *_destination;
    id _userInfo;
    NSUUID *_identifier;
    PHMediaFormatConversionSource *_source;
    PFMediaCapabilities *_destinationCapabilities;
    PHMediaFormatConversionCompositeRequest *_parentRequest;
    NSURL *_directoryForTemporaryFiles;
    long long _transferBehaviorUserPreference;
    CDUnknownBlockType _singlePassVideoConversionUpdateHandler;
    long long _passthroughConversionAdditionalByteCount;
}

@property (readonly) long long backwardsCompatibilityStatus;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) PHMediaFormatConversionDestination *destination; // @synthesize destination=_destination;
@property (strong) PFMediaCapabilities *destinationCapabilities; // @synthesize destinationCapabilities=_destinationCapabilities;
@property (strong) NSURL *directoryForTemporaryFiles; // @synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles;
@property (strong) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long estimatedOutputFileLength;
@property BOOL forceFormatConversion; // @synthesize forceFormatConversion=_forceFormatConversion;
@property (nonatomic) double formatConversionExpansionFactor;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (readonly) BOOL isCompositeRequest;
@property (copy) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property long long livePhotoPairingIdentifierBehavior; // @synthesize livePhotoPairingIdentifierBehavior=_livePhotoPairingIdentifierBehavior;
@property (readonly) NSString *outputFileType;
@property (strong) NSString *outputFilename; // @synthesize outputFilename=_outputFilename;
@property (readonly) NSString *outputPathExtension;
@property (weak) PHMediaFormatConversionCompositeRequest *parentRequest; // @synthesize parentRequest=_parentRequest;
@property (nonatomic) long long passthroughConversionAdditionalByteCount; // @synthesize passthroughConversionAdditionalByteCount=_passthroughConversionAdditionalByteCount;
@property BOOL preflighted; // @synthesize preflighted=_preflighted;
@property (strong) NSProgress *progress; // @synthesize progress=_progress;
@property (readonly) BOOL requiresFormatConversion;
@property (readonly) BOOL requiresMetadataChanges;
@property (readonly) BOOL requiresPassthroughConversion;
@property BOOL requiresSinglePassVideoConversion; // @synthesize requiresSinglePassVideoConversion=_requiresSinglePassVideoConversion;
@property BOOL shouldPadOutputFileToEstimatedLength; // @synthesize shouldPadOutputFileToEstimatedLength=_shouldPadOutputFileToEstimatedLength;
@property (copy) CDUnknownBlockType singlePassVideoConversionUpdateHandler; // @synthesize singlePassVideoConversionUpdateHandler=_singlePassVideoConversionUpdateHandler;
@property (strong) PHMediaFormatConversionSource *source; // @synthesize source=_source;
@property long long status; // @synthesize status=_status;
@property (readonly) NSString *statusString;
@property (readonly) Class superclass;
@property long long transferBehaviorUserPreference; // @synthesize transferBehaviorUserPreference=_transferBehaviorUserPreference;
@property BOOL useTransferBehaviorUserPreference; // @synthesize useTransferBehaviorUserPreference=_useTransferBehaviorUserPreference;
@property (strong) id userInfo; // @synthesize userInfo=_userInfo;

+ (double)bitsPerPixelWithImageDimensions:(struct CGSize)arg1 fileLength:(unsigned long long)arg2;
+ (double)heifToJPEGFactorForBitsPerPixel:(double)arg1;
+ (double)heifToJPEGFactorWithImageDimensions:(struct CGSize)arg1 fileLength:(unsigned long long)arg2;
+ (id)requestForSource:(id)arg1 destinationCapabilities:(id)arg2 error:(id *)arg3;
+ (id)stringForRequestStatus:(long long)arg1;
- (void).cxx_destruct;
- (void)didFinishProcessing;
- (void)enableSinglePassVideoEncodingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)markAsCancelled;
- (void)padOutputFileToEstimatedLength;
- (void)preflightWithConversionManager:(id)arg1;
- (BOOL)prepareWithError:(id *)arg1;
- (BOOL)requiresLivePhotoPairingIdentifierChange;
- (void)setupProgress;
- (void)updateSinglePassVideoConversionStatus:(long long)arg1 addedRange:(struct _NSRange)arg2 error:(id)arg3;
- (BOOL)userPreferenceProhibitsFormatConversion;

@end

