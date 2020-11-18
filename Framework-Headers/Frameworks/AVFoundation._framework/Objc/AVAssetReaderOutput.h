//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetReaderOutputInternal, AVWeakReference, NSDictionary, NSString;

@interface AVAssetReaderOutput : NSObject
{
    AVAssetReaderOutputInternal *_internal;
}

@property (nonatomic) BOOL alwaysCopiesSampleData;
@property (nonatomic, getter=_extractionID, setter=_setExtractionID:) int extractionID;
@property (readonly, nonatomic, getter=_figAssetReaderExtractionOptions) NSDictionary *figAssetReaderExtractionOptions;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic, getter=_trimsSampleDurations) BOOL trimsSampleDurations;
@property (readonly, nonatomic, getter=_weakReferenceToAssetReader) AVWeakReference *weakReferenceToAssetReader;

+ (id)_figAssetReaderVideoScalingPropertiesFromVideoSettings:(id)arg1 withFormatDescription:(id)arg2;
+ (void)initialize;
- (id)_asset;
- (void)_attachToWeakReferenceToAssetReader:(id)arg1;
- (void)_cancelReading;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (id)_errorForOSStatus:(int)arg1;
- (struct OpaqueFigAssetReader *)_figAssetReader;
- (void)_figAssetReaderDecodeError;
- (void)_figAssetReaderFailed;
- (void)_figAssetReaderSampleBufferDidBecomeAvailableForExtractionID:(int)arg1;
- (BOOL)_isFinished;
- (void)_markAsFinished;
- (BOOL)_prepareForReadingReturningError:(id *)arg1;
- (void)_setFigAssetReader:(struct OpaqueFigAssetReader *)arg1;
- (long long)_status;
- (BOOL)_updateTimeRangesOnFigAssetReaderReturningError:(id *)arg1;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (id)currentTimeRanges;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)markConfigurationAsFinal;
- (void)resetForReadingTimeRanges:(id)arg1;
- (void)setSupportsRandomAccess:(BOOL)arg1;
- (BOOL)supportsRandomAccess;

@end

