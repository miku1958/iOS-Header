//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class NSArray, NSMutableArray;

@interface MRTransactionMessage : MRProtocolMessage
{
    NSMutableArray *_packets;
}

@property (readonly, nonatomic) unsigned long long name;
@property (readonly, nonatomic) NSArray *packets;
@property (readonly, nonatomic) void *playerPath;

- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(void *)arg3;
- (id)initWithPlaybackQueue:(void *)arg1 forPlayerPath:(void *)arg2;
- (unsigned long long)type;

@end

