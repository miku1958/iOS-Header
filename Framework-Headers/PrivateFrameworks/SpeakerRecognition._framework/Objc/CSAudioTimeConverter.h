//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CSAudioTimeConverter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _anchorSampleCount;
    unsigned long long _anchorHostTime;
}

@property (nonatomic) unsigned long long anchorHostTime; // @synthesize anchorHostTime=_anchorHostTime;
@property (nonatomic) unsigned long long anchorSampleCount; // @synthesize anchorSampleCount=_anchorSampleCount;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (id)init;
- (void)processSampleCount:(unsigned long long)arg1 hostTime:(unsigned long long)arg2;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;

@end

