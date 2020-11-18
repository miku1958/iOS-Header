//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVCPacketFilter;

@protocol AVCPacketRelayConnectionProtocol

@property BOOL isDemuxNeeded;
@property (strong) AVCPacketFilter *packetFilter;
@property (copy) CDUnknownBlockType readHandler;
@property (readonly) unsigned char type;

- (void)readyToRead;
- (BOOL)sendData:(const void *)arg1 size:(unsigned int)arg2 error:(id *)arg3;
- (int)start;
- (int)stop;
@end
