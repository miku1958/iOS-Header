//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureInput, NSString;

@interface AVCaptureInputPortInternal : NSObject
{
    AVCaptureInput *input;
    NSString *mediaType;
    struct opaqueCMFormatDescription *formatDescription;
    struct OpaqueCMClock *clock;
    BOOL enabled;
    int changeSeed;
    NSString *sourceID;
}

- (void)dealloc;
- (id)init;

@end
