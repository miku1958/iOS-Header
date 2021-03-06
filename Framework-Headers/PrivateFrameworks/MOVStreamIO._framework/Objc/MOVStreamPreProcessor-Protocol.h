//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MOVStreamIO/NSObject-Protocol.h>

@protocol MOVStreamPreProcessor <NSObject>
- (unsigned int)encodedPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
- (const struct opaqueCMFormatDescription *)formatDescriptionForPixelBuffer:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2;
- (unsigned int)inputPixelFormatFromStreamData:(struct StreamRecordingData *)arg1;
- (struct __CVBuffer *)processedPixelBufferCopyOf:(struct __CVBuffer *)arg1 streamData:(struct StreamRecordingData *)arg2 error:(id *)arg3;
- (const struct opaqueCMFormatDescription *)trackFormatDescriptionFromStreamData:(struct StreamRecordingData *)arg1;
@end

