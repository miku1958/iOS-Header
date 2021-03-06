//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SNSystemConfiguration : NSObject
{
    unsigned int _channelCount;
    double _sampleRate;
}

@property (nonatomic) unsigned int channelCount; // @synthesize channelCount=_channelCount;
@property (nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSampleRate:(double)arg1 channelCount:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;

@end

