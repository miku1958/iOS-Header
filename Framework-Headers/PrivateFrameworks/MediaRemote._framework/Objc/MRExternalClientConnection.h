//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MRProtocolMessageQueueDataSource-Protocol.h>
#import <MediaRemote/MRProtocolMessageQueueDelegate-Protocol.h>
#import <MediaRemote/MSVMessageParserDelegate-Protocol.h>
#import <MediaRemote/NSStreamDelegate-Protocol.h>

@class MRCryptoPairingSession, MRProtocolMessageQueue, MSVMessageParser, NSInputStream, NSOutputStream, NSRunLoop, NSString;
@protocol MRExternalClientConnectionDelegate;

@interface MRExternalClientConnection : NSObject <NSStreamDelegate, MSVMessageParserDelegate, MRProtocolMessageQueueDelegate, MRProtocolMessageQueueDataSource>
{
    MSVMessageParser *_parser;
    NSRunLoop *_runLoop;
    MRProtocolMessageQueue *_messageQueue;
    unsigned long long _firstClientNanoseconds;
    unsigned long long _firstDeviceTicks;
    BOOL _disconnected;
    BOOL _registeredToNowPlayingUpdates;
    BOOL _registeredToNowPlayingArtworkUpdates;
    BOOL _registeredVolumeControlAvailabilityUpdates;
    BOOL _registeredKeyboardUpdates;
    BOOL _cryptoEnabled;
    unsigned int _voiceRecordingState;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    id<MRExternalClientConnectionDelegate> _delegate;
    MRCryptoPairingSession *_cryptoSession;
}

@property (nonatomic) BOOL cryptoEnabled; // @synthesize cryptoEnabled=_cryptoEnabled;
@property (strong, nonatomic) MRCryptoPairingSession *cryptoSession; // @synthesize cryptoSession=_cryptoSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<MRExternalClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property (nonatomic) BOOL registeredKeyboardUpdates; // @synthesize registeredKeyboardUpdates=_registeredKeyboardUpdates;
@property (nonatomic) BOOL registeredToNowPlayingArtworkUpdates; // @synthesize registeredToNowPlayingArtworkUpdates=_registeredToNowPlayingArtworkUpdates;
@property (nonatomic) BOOL registeredToNowPlayingUpdates; // @synthesize registeredToNowPlayingUpdates=_registeredToNowPlayingUpdates;
@property (nonatomic) BOOL registeredVolumeControlAvailabilityUpdates; // @synthesize registeredVolumeControlAvailabilityUpdates=_registeredVolumeControlAvailabilityUpdates;
@property (readonly, nonatomic) BOOL streamsAreValid;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int voiceRecordingState; // @synthesize voiceRecordingState=_voiceRecordingState;

- (void)_adjustTimestamp:(id)arg1;
- (void)_closeStream:(id)arg1;
- (void)_disconnectClient;
- (void)_flush;
- (void)_notifyDelegateClientDidDisconnect;
- (void)_notifyDelegateClientDidRecieveMessage:(id)arg1;
- (void)_openStream:(id)arg1;
- (void)_parseMessageData:(id)arg1;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;
- (id)messageQueue:(id)arg1 dataForMessage:(id)arg2;
- (unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end

