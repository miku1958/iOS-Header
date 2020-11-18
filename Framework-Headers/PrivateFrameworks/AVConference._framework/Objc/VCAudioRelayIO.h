//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/NSCopying-Protocol.h>

@interface VCAudioRelayIO : NSObject <NSCopying>
{
    BOOL _usePacketThread;
    struct PacketThread_s *_packetThread;
    BOOL _isRunning;
    unsigned int _micTimestamp;
    struct AudioStreamBasicDescription _micFormat;
    CDUnknownFunctionPointerType _micCallback;
    void *_micCallbackContext;
    struct opaqueVCAudioBufferList *_micBuffer;
    unsigned int _speakerTimestamp;
    struct AudioStreamBasicDescription _speakerFormat;
    CDUnknownFunctionPointerType _speakerCallback;
    void *_speakerCallbackContext;
    struct opaqueVCAudioBufferList *_speakerBuffer;
    float _micPowerRMS;
    float _speakerPowerRMS;
    CDUnknownBlockType _startCompletionHandler;
}

@property (readonly, nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property (readonly, nonatomic) struct opaqueVCAudioBufferList *micBuffer; // @synthesize micBuffer=_micBuffer;
@property CDUnknownFunctionPointerType micCallback; // @synthesize micCallback=_micCallback;
@property void *micCallbackContext; // @synthesize micCallbackContext=_micCallbackContext;
@property struct AudioStreamBasicDescription micFormat; // @synthesize micFormat=_micFormat;
@property float micPowerRMS; // @synthesize micPowerRMS=_micPowerRMS;
@property unsigned int micTimestamp; // @synthesize micTimestamp=_micTimestamp;
@property (readonly) struct PacketThread_s *packetThread; // @synthesize packetThread=_packetThread;
@property (readonly, nonatomic) struct opaqueVCAudioBufferList *speakerBuffer; // @synthesize speakerBuffer=_speakerBuffer;
@property CDUnknownFunctionPointerType speakerCallback; // @synthesize speakerCallback=_speakerCallback;
@property void *speakerCallbackContext; // @synthesize speakerCallbackContext=_speakerCallbackContext;
@property struct AudioStreamBasicDescription speakerFormat; // @synthesize speakerFormat=_speakerFormat;
@property float speakerPowerRMS; // @synthesize speakerPowerRMS=_speakerPowerRMS;
@property unsigned int speakerTimestamp; // @synthesize speakerTimestamp=_speakerTimestamp;
@property (copy) CDUnknownBlockType startCompletionHandler; // @synthesize startCompletionHandler=_startCompletionHandler;
@property BOOL usePacketThread; // @synthesize usePacketThread=_usePacketThread;

- (void)closeRecordings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createAudioBuffersWithIOBufferDuration:(double)arg1;
- (BOOL)createPacketThreadWithIOBufferDuration:(double)arg1 name:(id)arg2 error:(id *)arg3;
- (void)createRecordingsWithName:(id)arg1;
- (void)dealloc;
- (void)destroyPacketThread;
- (BOOL)isEqualToRelayIO:(id)arg1;
- (BOOL)isInitialized;
- (void)printStreamFormats;

@end

