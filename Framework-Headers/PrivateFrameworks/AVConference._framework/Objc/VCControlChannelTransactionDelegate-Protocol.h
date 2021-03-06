//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSData;

@protocol VCControlChannelTransactionDelegate <NSObject>

@property (readonly) BOOL isEncryptionEnabled;

- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
- (BOOL)isParticipantActive:(unsigned long long)arg1;
- (NSData *)lastUsedMKIBytes;
- (void)scheduleAfter:(unsigned int)arg1 block:(void (^)(void))arg2;
@end

