//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHRecognitionResult.h>

@class NSString;

@interface CHSketchRecognitionResult : CHRecognitionResult
{
    NSString *_string;
    double _rotation;
}

@property (readonly) double rotation; // @synthesize rotation=_rotation;
@property (readonly) NSString *string; // @synthesize string=_string;

- (void)dealloc;
- (id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3;

@end

