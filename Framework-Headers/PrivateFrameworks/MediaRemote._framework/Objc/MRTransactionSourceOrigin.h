//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRTransactionPacketizer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRTransactionSourceOrigin : NSObject
{
    MRTransactionPacketizer *_packetizer;
    NSMutableArray *_packets;
    BOOL _active;
    struct _MROrigin *_origin;
    unsigned long long _name;
    double _outOfMemoryWaitDuration;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)_begin;
- (void)_cleanUp;
- (void)_processMessage:(id)arg1;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 forOrigin:(struct _MROrigin *)arg2;
- (void)sendPackets:(id)arg1;

@end

