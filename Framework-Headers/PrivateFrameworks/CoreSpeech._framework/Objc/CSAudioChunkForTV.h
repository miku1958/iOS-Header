//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CSAudioChunkForTV : NSObject
{
    float _avgPower;
    float _peakPower;
    NSArray *_packets;
    unsigned long long _timeStamp;
}

@property (nonatomic) float avgPower; // @synthesize avgPower=_avgPower;
@property (strong, nonatomic) NSArray *packets; // @synthesize packets=_packets;
@property (nonatomic) float peakPower; // @synthesize peakPower=_peakPower;
@property (nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;

- (void).cxx_destruct;
- (id)initWithXPCObject:(id)arg1;
- (id)xpcObject;

@end
