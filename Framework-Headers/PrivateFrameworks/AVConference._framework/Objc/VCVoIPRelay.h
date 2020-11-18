//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VCVoIPRelayInternal;

@interface VCVoIPRelay : NSObject
{
    VCVoIPRelayInternal *_internal;
}

@property (readonly, nonatomic) struct AudioStreamBasicDescription audioFormat;
@property (readonly, nonatomic) unsigned long long blockSizeSamples;

- (void)dealloc;
- (id)initWithCaptureBlock:(CDUnknownBlockType)arg1 renderBlock:(CDUnknownBlockType)arg2;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
