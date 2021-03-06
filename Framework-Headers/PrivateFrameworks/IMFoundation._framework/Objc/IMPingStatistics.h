//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMPingStatistics : NSObject
{
    double _sumRoundtripTimes;
    int _numPacketsSuccessfullySent;
    int _numPingsTransmitted;
    int _numPingsReceived;
    int _packetsSuccessfullySent;
    double _medianRoundtripTime;
    double _averageRoundtripTime;
    double _minRoundtripTime;
    double _maxRoundtripTime;
    double _standardDeviationRoundtripTime;
}

@property (readonly, nonatomic) double averageRoundtripTime; // @synthesize averageRoundtripTime=_averageRoundtripTime;
@property (nonatomic, setter=_setMaxRoundtripTime:) double maxRoundtripTime; // @synthesize maxRoundtripTime=_maxRoundtripTime;
@property (nonatomic, setter=_setMedianRoundtripTime:) double medianRoundtripTime; // @synthesize medianRoundtripTime=_medianRoundtripTime;
@property (nonatomic, setter=_setMinRoundtripTime:) double minRoundtripTime; // @synthesize minRoundtripTime=_minRoundtripTime;
@property (readonly, nonatomic) int numPingsReceived; // @synthesize numPingsReceived=_numPingsReceived;
@property (readonly, nonatomic) int numPingsTransmitted; // @synthesize numPingsTransmitted=_numPingsTransmitted;
@property (readonly, nonatomic) double packetLossRate;
@property (readonly, nonatomic) int packetsSuccessfullySent; // @synthesize packetsSuccessfullySent=_packetsSuccessfullySent;
@property (nonatomic, setter=_setStandardDeviationRoundtripTime:) double standardDeviationRoundtripTime; // @synthesize standardDeviationRoundtripTime=_standardDeviationRoundtripTime;

- (void)_addReceivedPacket:(double)arg1;
- (void)_addTransmittedPacket:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithMaxRTT:(double)arg1 medianRTT:(double)arg2 avgRTT:(double)arg3 minRTT:(double)arg4 transmitted:(int)arg5 successful:(int)arg6 received:(int)arg7;

@end

