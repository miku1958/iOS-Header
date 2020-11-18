//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVAssetInspector.h>

__attribute__((visibility("hidden")))
@interface AVFormatReaderInspector : AVAssetInspector
{
    struct OpaqueFigFormatReader *_formatReader;
    BOOL didCheckForSaveRestriction;
    BOOL hasSaveRestriction;
}

@property (strong, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader *formatReader;

- (BOOL)_hasQTSaveRestriction;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (BOOL)canContainFragments;
- (id)commonMetadata;
- (BOOL)containsFragments;
- (void)dealloc;
- (CDStruct_1b6d18a9)duration;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader *)arg1;
- (BOOL)isComposable;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExportable;
- (BOOL)isReadable;
- (id)lyrics;
- (id)metadataForFormat:(id)arg1;
- (struct CGSize)naturalSize;
- (int)naturalTimeScale;
- (CDStruct_1b6d18a9)overallDurationHint;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform)preferredTransform;
- (float)preferredVolume;
- (BOOL)providesPreciseDurationAndTiming;
- (long long)trackCount;
- (id)trackReferences;

@end

