//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVAirTransport.h>

#import <AVKit/NSStreamDelegate-Protocol.h>

@class NSInputStream, NSOutputStream, NSString;

__attribute__((visibility("hidden")))
@interface AVAirTransportStreams : AVAirTransport <NSStreamDelegate>
{
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSInputStream *inputStream; // @synthesize inputStream=_inputStream;
@property (readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_inputStreamDidClose;
- (void)_inputStreamHasBytesAvailable;
- (void)_outputStreamCanWrite;
- (void)_outputStreamDidOpen;
- (id)_readAvailableData;
- (id)_readDataNonBlockingUpToMaxLength:(unsigned long long)arg1;
- (long long)_writeData:(id)arg1;
- (BOOL)canWrite;
- (id)initWithInput:(id)arg1 output:(id)arg2;
- (void)invalidate;
- (BOOL)isReadyToSend;
- (void)open;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
