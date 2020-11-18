//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaRemote/MSVMessageParserDelegate-Protocol.h>
#import <MediaRemote/NSStreamDelegate-Protocol.h>

@class MRCryptoPairingSession, MRTelevisionMessageQueue, MSVMessageParser, NSInputStream, NSOutputStream, NSRunLoop, NSString;
@protocol MRTelevisionClientConnectionDelegate;

@interface MRTelevisionClientConnection : NSObject <NSStreamDelegate, MSVMessageParserDelegate>
{
    MSVMessageParser *_parser;
    NSRunLoop *_runLoop;
    MRTelevisionMessageQueue *_messageQueue;
    unsigned long long _firstClientNanoseconds;
    unsigned long long _firstDeviceTicks;
    BOOL _disconnected;
    BOOL _useSSL;
    BOOL _registeredToNowPlayingUpdates;
    BOOL _registeredToNowPlayingArtworkUpdates;
    BOOL _registeredVolumeControlAvailabilityUpdates;
    BOOL _registeredKeyboardUpdates;
    unsigned int _voiceRecordingState;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    id<MRTelevisionClientConnectionDelegate> _delegate;
    MRCryptoPairingSession *_cryptoSession;
}

@property (strong, nonatomic) MRCryptoPairingSession *cryptoSession; // @synthesize cryptoSession=_cryptoSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<MRTelevisionClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
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
@property (nonatomic) BOOL useSSL; // @synthesize useSSL=_useSSL;
@property (nonatomic) unsigned int voiceRecordingState; // @synthesize voiceRecordingState=_voiceRecordingState;

- (void)_adjustTimestamp:(id)arg1;
- (void)_disconnectClient;
- (void)_flush;
- (void)_openStream:(id)arg1;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)dealloc;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
