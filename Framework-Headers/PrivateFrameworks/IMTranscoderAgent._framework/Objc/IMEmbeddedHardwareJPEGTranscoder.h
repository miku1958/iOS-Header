//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject
{
    BOOL _stripImageMetadata;
    double _targetJPEGCompressionValue;
}

@property (nonatomic) BOOL stripImageMetadata; // @synthesize stripImageMetadata=_stripImageMetadata;
@property (nonatomic) double targetJPEGCompressionValue; // @synthesize targetJPEGCompressionValue=_targetJPEGCompressionValue;

- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource *)arg2;
- (BOOL)scaleImageToFitLargestDimension:(id)arg1 outputData:(id *)arg2;

@end

