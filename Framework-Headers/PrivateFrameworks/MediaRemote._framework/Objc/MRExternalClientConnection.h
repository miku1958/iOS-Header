//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolClientConnection.h>

@class MRCryptoPairingSession;

@interface MRExternalClientConnection : MRProtocolClientConnection
{
    BOOL _registeredToNowPlayingUpdates;
    BOOL _registeredToVolumeUpdates;
    BOOL _registeredKeyboardUpdates;
    BOOL _registeredToOutputDeviceUpdates;
    BOOL _cryptoEnabled;
    unsigned int _voiceRecordingState;
    MRCryptoPairingSession *_cryptoSession;
}

@property (nonatomic) BOOL cryptoEnabled; // @synthesize cryptoEnabled=_cryptoEnabled;
@property (strong, nonatomic) MRCryptoPairingSession *cryptoSession; // @synthesize cryptoSession=_cryptoSession;
@property (nonatomic) BOOL registeredKeyboardUpdates; // @synthesize registeredKeyboardUpdates=_registeredKeyboardUpdates;
@property (nonatomic) BOOL registeredToNowPlayingUpdates; // @synthesize registeredToNowPlayingUpdates=_registeredToNowPlayingUpdates;
@property (nonatomic) BOOL registeredToOutputDeviceUpdates; // @synthesize registeredToOutputDeviceUpdates=_registeredToOutputDeviceUpdates;
@property (nonatomic) BOOL registeredToVolumeUpdates; // @synthesize registeredToVolumeUpdates=_registeredToVolumeUpdates;
@property (nonatomic) unsigned int voiceRecordingState; // @synthesize voiceRecordingState=_voiceRecordingState;

- (void).cxx_destruct;
- (id)decryptData:(id)arg1 error:(id *)arg2;
- (id)encryptDataForMessage:(id)arg1;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;

@end

