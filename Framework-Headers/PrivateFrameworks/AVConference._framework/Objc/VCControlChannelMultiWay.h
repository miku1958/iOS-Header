//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCControlChannel.h>

#import <AVConference/VCControlChannelTransactionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCControlChannelMultiWay : VCControlChannel <VCControlChannelTransactionDelegate>
{
    unsigned int _transportSessionID;
    int _vfdMessage;
    int _vfdCancel;
    BOOL _isRunning;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_pidReceiveProc;
    NSMutableDictionary *_dialogs;
    NSMutableArray *_activeParticipants;
    BOOL _isCCReliableDataNotReceivedReported;
    BOOL _isEncryptionEnabled;
    NSMutableDictionary *_cryptors;
    void *_currentSendMKI;
    void *_currentReceiveMKI;
    NSObject<OS_dispatch_queue> *_sequentialKeyMaterialQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableDictionary *dialogs; // @synthesize dialogs=_dialogs;
@property (readonly) unsigned long long hash;
@property (readonly) BOOL isEncryptionEnabled; // @synthesize isEncryptionEnabled=_isEncryptionEnabled;
@property (readonly) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transportSessionID; // @synthesize transportSessionID=_transportSessionID;
@property (nonatomic) int vfdCancel; // @synthesize vfdCancel=_vfdCancel;
@property (nonatomic) int vfdMessage; // @synthesize vfdMessage=_vfdMessage;

- (void)addActiveParticipant:(unsigned long long)arg1;
- (void)addNewKeyMaterial:(id)arg1;
- (void)addToReceivedStats:(int)arg1;
- (void)addToSentStats:(int)arg1;
- (void)broadcastUnreliableMessage:(id)arg1;
- (void)dealloc;
- (BOOL)decryptMessageWithMKI:(void *)arg1 message:(id)arg2 buffer:(char *)arg3 size:(unsigned int)arg4 sequenceNumber:(unsigned short)arg5;
- (BOOL)decryptWithMKI:(void *)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;
- (void)deregisterPeriodicTask;
- (BOOL)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;
- (void)finalizeEncryption;
- (void)flushActiveMessages;
- (void)flushRealTimeReportingStats;
- (void)flushReportingStats;
- (int)getKeyDerivationCryptoSet:(CDStruct_5b6da142 *)arg1 withKeyMaterial:(id)arg2 derivedSSRC:(unsigned int *)arg3;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 mode:(int)arg3;
- (void)initializeEncryption;
- (void)initializeSRTPInfo:(struct tagSRTPINFO *)arg1;
- (BOOL)isParticipantActive:(unsigned long long)arg1;
- (id)lastUsedMKIBytes;
- (void)messageReceived:(id)arg1 participantInfo:(CDStruct_94aa5fb4 *)arg2;
- (void)periodicTask:(void *)arg1;
- (id)processEncryptedPayload:(id)arg1 isData:(BOOL)arg2 sequenceNumber:(id)arg3 MKIData:(id)arg4 participantID:(id)arg5;
- (void)registerPeriodicTask;
- (void)removeActiveParticipant:(unsigned long long)arg1;
- (void)removeAllActiveParticipants;
- (void)scheduleAfter:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (BOOL)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 timeout:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2;
- (BOOL)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2 timeout:(id)arg3;
- (void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)setCurrentSendMKIWithKeyMaterial:(id)arg1;
- (void)setEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;
- (void)start;
- (void)stop;
- (int)updateEncryption:(CDStruct_5b6da142 *)arg1 derivedSSRC:(unsigned int)arg2;
- (void)updateEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;
- (void)updateEncryptionWithKeyMaterial:(id)arg1;

@end

