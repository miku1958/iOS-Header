//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosFormats/NSObject-Protocol.h>

@class PFRWSampleBufferChannel;

@protocol PFRWSampleBufferChannelDelegate <NSObject>

@optional
- (void)sampleBufferChannel:(PFRWSampleBufferChannel *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (void)sampleBufferChannel:(PFRWSampleBufferChannel *)arg1 didReadSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 andMadeWriteSampleBuffer:(struct __CVBuffer *)arg3;
@end
