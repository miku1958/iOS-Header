//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HAPBTLETuple : NSObject
{
    int _maxHAPConnections;
    float _minBandwidth;
    float _maxBandwidth;
    unsigned long long _atvState;
    struct BTStatus _state;
}

@property (nonatomic) unsigned long long atvState; // @synthesize atvState=_atvState;
@property (nonatomic) float maxBandwidth; // @synthesize maxBandwidth=_maxBandwidth;
@property (nonatomic) int maxHAPConnections; // @synthesize maxHAPConnections=_maxHAPConnections;
@property (nonatomic) float minBandwidth; // @synthesize minBandwidth=_minBandwidth;
@property (nonatomic) struct BTStatus state; // @synthesize state=_state;

+ (id)atvState2String:(unsigned long long)arg1;
+ (void)bandwidthFromATVState:(unsigned long long)arg1 MinBandwidth:(float *)arg2 MaxBandwidth:(float *)arg3;
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2;
+ (id)makeTupleWithATVState:(unsigned long long)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
+ (id)makeTupleWithState:(struct BTStatus *)arg1 MaxHAPConnections:(int)arg2 MinBandwidth:(float)arg3 MaxBandwidth:(float)arg4;
+ (id)state2String:(struct BTStatus *)arg1;
- (id)description;

@end

