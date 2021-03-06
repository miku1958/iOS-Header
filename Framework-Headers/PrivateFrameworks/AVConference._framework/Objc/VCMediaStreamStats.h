//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaStreamStats : NSObject
{
    struct tagHANDLE *_summerHandle;
    double _lastRecordingTime;
    unsigned int _maxBitrateKbps;
    unsigned int _minBitrateKbps;
    double _maxFramerate;
    double _minFramerate;
    unsigned short _maxFrameDurationMillis;
}

@property (readonly, nonatomic) unsigned int bitrateKbps;
@property (readonly, nonatomic) double framerate;
@property (nonatomic) unsigned int maxBitrateKbps; // @synthesize maxBitrateKbps=_maxBitrateKbps;
@property (nonatomic) unsigned short maxFrameDurationMillis; // @synthesize maxFrameDurationMillis=_maxFrameDurationMillis;
@property (nonatomic) double maxFramerate; // @synthesize maxFramerate=_maxFramerate;
@property (nonatomic) unsigned int minBitrateKbps; // @synthesize minBitrateKbps=_minBitrateKbps;
@property (nonatomic) double minFramerate; // @synthesize minFramerate=_minFramerate;

- (void)dealloc;
- (unsigned int)getBitrateKbpsSinceTime:(double)arg1;
- (double)getFramerateSinceTime:(double)arg1;
- (id)init;
- (void)recordDataWithSize:(double)arg1 atTime:(double)arg2;
- (void)updateMinMaxSinceTime:(double)arg1;

@end

