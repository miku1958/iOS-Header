//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaStream.h>

#import <AVConference/VCTextReceiverDelegate-Protocol.h>
#import <AVConference/VCTextSender-Protocol.h>

@class NSString, VCTextReceiver, VCTextTransmitter;
@protocol VCTextReceiverDelegate;

__attribute__((visibility("hidden")))
@interface VCTextStream : VCMediaStream <VCTextSender, VCTextReceiverDelegate>
{
    VCTextReceiver *_textReceiver;
    VCTextTransmitter *_textTransmitter;
    id<VCTextReceiverDelegate> _receiveDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double lastReceivedRTCPPacketTime;
@property (readonly, nonatomic) double lastReceivedRTPPacketTime;
@property (nonatomic) id<VCTextReceiverDelegate> receiveDelegate;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didReceiveCharacter:(unsigned short)arg1;
- (void)didReceiveText:(id)arg1;
- (id)init;
- (void)onCallIDChanged;
- (BOOL)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onRTCPTimeout;
- (void)onRTPTimeout;
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onSendRTCPPacket;
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)rtcpHeartbeatLeeway;
- (void)sendCharacter:(unsigned short)arg1;
- (void)sendText:(id)arg1;
- (BOOL)setupTextReceiverWithError:(id *)arg1;
- (void)setupTextTransmitter;
- (id)supportedPayloads;

@end
