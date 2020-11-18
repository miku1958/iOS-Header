//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HearingUtilities/NSNetServiceDelegate-Protocol.h>
#import <HearingUtilities/NSStreamDelegate-Protocol.h>

@class HUIDCMessage, HUIDCPacket, NSInputStream, NSMutableArray, NSMutableData, NSNetService, NSOutputStream, NSString;
@protocol HUIDCRemoteControllerDelegate;

@interface HUIDCRemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate>
{
    HUIDCPacket *_currentPacket;
    id<HUIDCRemoteControllerDelegate> _delegate;
    NSNetService *_service;
    NSMutableArray *_outputDataQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_inputBuffer;
    HUIDCMessage *_currentMessageInFlight;
    NSMutableData *_outputBuffer;
}

@property (strong, nonatomic) HUIDCMessage *currentMessageInFlight; // @synthesize currentMessageInFlight=_currentMessageInFlight;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUIDCRemoteControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableData *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property (strong, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (strong, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property (strong, nonatomic) NSMutableArray *outputDataQueue; // @synthesize outputDataQueue=_outputDataQueue;
@property (strong, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property (strong, nonatomic) NSNetService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acceptConnection:(int)arg1;
- (void)clearMessageQueue;
- (void)closeConnectionWithError:(id)arg1;
- (void)dealloc;
- (void)didCommunicate;
- (void)enqueueData:(id)arg1;
- (void)finishedSending:(id)arg1;
- (id)init;
- (id)initWithService:(id)arg1;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (BOOL)isSlave;
- (void)messageWasAcked:(id)arg1;
- (id)name;
- (id)nextMessageInQueue;
- (void)openConnectionIfNecessary;
- (BOOL)outputStreamReady;
- (void)receivedData:(id)arg1;
- (void)resetConnection;
- (void)sendDataChunk;
- (BOOL)sendObject:(id)arg1;
- (BOOL)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)setSecuritySettingsForStream:(id)arg1;
- (void)setupStream:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end

