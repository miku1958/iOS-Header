//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeAI/HMIVideoFrameSampler.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class NSString;

@interface HMIVideoFrameIntervalSampler : HMIVideoFrameSampler <HMFLogging>
{
    CDStruct_1b6d18a9 _interval;
    CDStruct_1b6d18a9 _firstPTS;
    long long _lastIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)initWithFrameRate:(float)arg1;
- (id)initWithInterval:(CDStruct_1b6d18a9)arg1;

@end
