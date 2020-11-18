//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureInput, AVMetadataObject, NSString;

@interface AVMetadataObjectInternal : NSObject
{
    CDStruct_1b6d18a9 _time;
    CDStruct_1b6d18a9 _duration;
    struct CGRect _bounds;
    NSString *_type;
    AVCaptureInput *_input;
    AVMetadataObject *_originalMetadataObject;
}

@property struct CGRect bounds; // @synthesize bounds=_bounds;
@property CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property (strong) AVCaptureInput *input; // @synthesize input=_input;
@property (strong) AVMetadataObject *originalMetadataObject; // @synthesize originalMetadataObject=_originalMetadataObject;
@property CDStruct_1b6d18a9 time; // @synthesize time=_time;
@property (strong) NSString *type; // @synthesize type=_type;

- (void)dealloc;
- (id)init;

@end
