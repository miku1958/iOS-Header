//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AXHearingSupport/NSNetServiceDelegate-Protocol.h>
#import <AXHearingSupport/NSStreamDelegate-Protocol.h>

@class AXHAPacket, AXHARemoteMessage, AXHATimer, NSInputStream, NSMutableArray, NSMutableData, NSNetService, NSOutputStream, NSString;
@protocol AXHARemoteControllerDelegate;

@interface AXHARemoteController : NSObject <NSNetServiceDelegate, NSStreamDelegate>
{
    AXHAPacket *_currentPacket;
    BOOL _didValidateHIID;
    id<AXHARemoteControllerDelegate> _delegate;
    NSNetService *_service;
    NSMutableArray *_outputDataQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    AXHATimer *_communicationTimer;
    NSMutableData *_inputBuffer;
    NSMutableData *_outputBuffer;
    AXHARemoteMessage *_currentMessageInFlight;
}

@property (strong, nonatomic) AXHATimer *communicationTimer; // @synthesize communicationTimer=_communicationTimer;
@property (strong, nonatomic) AXHARemoteMessage *currentMessageInFlight; // @synthesize currentMessageInFlight=_currentMessageInFlight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<AXHARemoteControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didValidateHIID; // @synthesize didValidateHIID=_didValidateHIID;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableData *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property (strong, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (strong, nonatomic) NSMutableData *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property (strong, nonatomic) NSMutableArray *outputDataQueue; // @synthesize outputDataQueue=_outputDataQueue;
@property (strong, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property (strong, nonatomic) NSNetService *service; // @synthesize service=_service;
@property (readonly) Class superclass;

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
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceWillPublish:(id)arg1;
- (void)netServiceWillResolve:(id)arg1;
- (id)nextMessageInQueue;
- (void)openConnectionIfNecessary;
- (void)receivedData:(id)arg1;
- (void)resetConnection;
- (void)sendDataChunk;
- (BOOL)sendObject:(id)arg1;
- (BOOL)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)setSecuritySettingsForStream:(id)arg1;
- (void)setupStream:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)validatePairedAid;

@end
