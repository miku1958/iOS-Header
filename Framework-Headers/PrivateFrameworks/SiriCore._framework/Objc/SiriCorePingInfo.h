//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSMapTable;

@interface SiriCorePingInfo : NSObject <NSCopying>
{
    NSMapTable *_outstandingPings;
    long long _pingAcknowledgedCount;
    double _avgPingTime;
}

@property (readonly, nonatomic) double avgPingTime; // @synthesize avgPingTime=_avgPingTime;
@property (readonly, nonatomic) long long pingAcknowledgedCount; // @synthesize pingAcknowledgedCount=_pingAcknowledgedCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)markPingSentWithIndex:(long long)arg1;
- (void)markPongReceivedWithIndex:(long long)arg1;
- (unsigned long long)numberOfUnacknowledgedPings;

@end
