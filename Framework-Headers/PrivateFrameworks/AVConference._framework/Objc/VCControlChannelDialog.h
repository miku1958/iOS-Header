//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCObject.h>

@class NSMutableDictionary, NSNumber;
@protocol VCControlChannelTransactionDelegate;

__attribute__((visibility("hidden")))
@interface VCControlChannelDialog : VCObject
{
    unsigned int _sessionID;
    unsigned int _transactionID;
    NSNumber *_participantID;
    id<VCControlChannelTransactionDelegate> _weakTransactionDelegate;
    NSMutableDictionary *_transactions;
}

+ (BOOL)encryptMessage:(id)arg1 buffer:(char *)arg2 size:(unsigned int)arg3 sequenceNumber:(unsigned short)arg4 transactionDelegate:(id)arg5;
+ (id)newEncryptedMessageFromMessage:(id)arg1 sequenceNumber:(unsigned short)arg2 transactionDelegate:(id)arg3;
+ (BOOL)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 status:(unsigned int)arg3 sessionID:(unsigned int)arg4 transactionDelegate:(id)arg5;
+ (void)sendConfirmationToParticipantID:(id)arg1 transactionID:(id)arg2 sessionID:(unsigned int)arg3 transactionDelegate:(id)arg4;
+ (BOOL)sendUnreliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4;
- (void)dealloc;
- (void)flushActiveDialogs;
- (id)initWithSessionID:(unsigned int)arg1 participantID:(id)arg2 transactionDelegate:(id)arg3;
- (BOOL)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 status:(unsigned int)arg3;
- (void)removeTransactionForTransactionID:(int)arg1;
- (BOOL)sendReliableMessage:(id)arg1 transactionDelegate:(id)arg2 timeout:(id)arg3;

@end

