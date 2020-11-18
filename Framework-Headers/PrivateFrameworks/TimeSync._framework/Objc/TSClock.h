//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface TSClock : NSObject
{
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    unsigned long long _clockIdentifier;
}

@property (readonly, strong, nonatomic) NSMutableArray *clients; // @dynamic clients;
@property (nonatomic) unsigned long long clockIdentifier; // @synthesize clockIdentifier=_clockIdentifier;
@property (readonly, copy, nonatomic) NSString *clockName; // @dynamic clockName;
@property (readonly, nonatomic) double hostRateRatio; // @dynamic hostRateRatio;
@property (readonly, nonatomic) int lockState; // @dynamic lockState;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @dynamic notificationQueue;

+ (unsigned long long)_mach_absolute_time;
- (void)addClient:(id)arg1;
- (BOOL)convertFromDomainTime:(unsigned long long *)arg1 toMachAbsoluteTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)arg1 toDomainTime:(unsigned long long *)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned int *)arg2;
- (void)dealloc;
- (BOOL)getRateRatioNumerator:(unsigned long long *)arg1 denominator:(unsigned long long *)arg2 machAnchor:(unsigned long long *)arg3 andDomainAnchor:(unsigned long long *)arg4 withError:(id *)arg5;
- (id)init;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (void)removeClient:(id)arg1;

@end

