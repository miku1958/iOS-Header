//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _IMPingPacketData : NSObject
{
    int _sequenceNumber;
    BOOL _timedOut;
    int _error;
    struct timeval _timeSent;
    double _rtt;
}

@property (readonly, nonatomic) int error; // @synthesize error=_error;
@property (readonly, nonatomic) double rtt; // @synthesize rtt=_rtt;
@property (readonly, nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property (readonly, nonatomic) struct timeval timeSent; // @synthesize timeSent=_timeSent;
@property (readonly, nonatomic) BOOL timedOut; // @synthesize timedOut=_timedOut;

- (void)_markPacketAsTimedOut:(double)arg1;
- (void)_returnPacketArrived;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSequeneceNumber:(int)arg1 timesent:(struct timeval *)arg2 error:(int)arg3;

@end

