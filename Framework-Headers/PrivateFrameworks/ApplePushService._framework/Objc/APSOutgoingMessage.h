//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ApplePushService/APSMessage.h>

@interface APSOutgoingMessage : APSMessage
{
}

@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) unsigned long long timeout;

- (unsigned long long)_effectiveSendTimeout;
- (id)eagernessTimeoutTime;
- (BOOL)hasTimedOut;
- (BOOL)isEager;
- (unsigned long long)messageID;
- (long long)priority;
- (long long)sendInterface;
- (id)sendTimeoutTime;
- (id)senderTokenName;
- (void)setCancelled:(BOOL)arg1;
- (void)setMessageID:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setSendInterface:(long long)arg1;
- (void)setSenderTokenName:(id)arg1;
- (void)setSent:(BOOL)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (BOOL)wasCancelled;
- (BOOL)wasSent;

@end

