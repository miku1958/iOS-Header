//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface MRTransactionPacketAccumulator : NSObject
{
    NSMutableOrderedSet *_packets;
    unsigned long long _currentLength;
}

- (void)dealloc;
- (id)init;
- (id)mergePacket:(id)arg1;

@end

