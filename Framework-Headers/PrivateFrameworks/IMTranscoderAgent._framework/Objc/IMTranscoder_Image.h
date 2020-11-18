//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMTranscoderAgent/IMTranscoder.h>

@interface IMTranscoder_Image : IMTranscoder
{
    BOOL _stripImageMetadata;
    double _overrideJPEGCompressionQuality;
}

@property (nonatomic) double overrideJPEGCompressionQuality; // @synthesize overrideJPEGCompressionQuality=_overrideJPEGCompressionQuality;
@property (nonatomic) BOOL stripImageMetadata; // @synthesize stripImageMetadata=_stripImageMetadata;

+ (BOOL)_canConvertPNGToJPEG:(struct CGImage *)arg1;
+ (id)excludedUTIs;
+ (id)supportedUTIs;
- (id)_checkAndSaveImageData:(id)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString *)arg3 withMaxByteSize:(unsigned long long)arg4 actualSize:(unsigned long long *)arg5 usedLengthIndex:(int *)arg6 currentIndex:(int)arg7;
- (unsigned long long)_getImageWidth:(struct CGImageSource *)arg1;
- (id)_getScaleFactorArray:(id)arg1 transferURL:(id)arg2 outputURLs:(id)arg3;
- (BOOL)_isHEIFImageFormat:(struct CGImageSource *)arg1;
- (BOOL)_isWideGamutImage:(struct CGImageSource *)arg1;
- (id)_newGeneratedImage:(struct CGImageSource *)arg1 target:(long long)arg2 hardwareEncoder:(id)arg3 inFormat:(struct __CFString *)arg4 fromFormat:(struct __CFString *)arg5 withMaxLength:(unsigned long long)arg6 withMaxCount:(unsigned long long)arg7 withCompressionQuality:(double)arg8 enforceMaxes:(BOOL)arg9 subsampling:(int)arg10;
- (void)_setWideGamutProperties:(id)arg1 scaledImage:(struct CGImage *)arg2 imageDestination:(struct CGImageDestination *)arg3 index:(unsigned long long)arg4;
- (id)_writeHEIFImage:(struct CGImageSource *)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString *)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long *)arg6 startingLengthIndex:(int)arg7 usedLengthIndex:(int *)arg8 telemetry:(id)arg9;
- (id)_writeImage:(struct CGImageSource *)arg1 sourceURL:(id)arg2 target:(long long)arg3 hardwareEncoder:(id)arg4 inFormat:(struct __CFString *)arg5 fromFormat:(struct __CFString *)arg6 withMaxByteSize:(unsigned long long)arg7 maxDimension:(unsigned long long)arg8 actualSize:(unsigned long long *)arg9 startingLengthIndex:(int)arg10 usedLengthIndex:(int *)arg11 estimator:(id)arg12 telemetry:(id)arg13;
- (id)_writeImageData:(id)arg1 inFormat:(struct __CFString *)arg2 sourceURL:(id)arg3;
- (id)_writeRepresentationsForImage:(struct CGImageSource *)arg1 target:(long long)arg2 sourceURL:(id)arg3 sizes:(id)arg4 maxDimension:(unsigned long long)arg5 srcUTI:(struct __CFString *)arg6 inFormat:(struct __CFString *)arg7 estimator:(id)arg8 telemetry:(id)arg9;
- (id)_writeWideGamutImage:(struct CGImageSource *)arg1 sourceURL:(id)arg2 inFormat:(struct __CFString *)arg3 withMaxByteSize:(unsigned long long)arg4 maxDimension:(unsigned long long)arg5 actualSize:(unsigned long long *)arg6 startingLengthIndex:(int)arg7 usedLengthIndex:(int *)arg8 telemetry:(id)arg9;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(CDUnknownBlockType)arg9;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

