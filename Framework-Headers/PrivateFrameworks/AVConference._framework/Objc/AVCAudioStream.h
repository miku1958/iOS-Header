//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/VCMediaStreamDelegate-Protocol.h>

@class AVCMediaStreamConfig, AVConferenceXPCClient, NSDictionary, NSString, VCAudioStream;
@protocol AVCAudioStreamDelegate, OS_dispatch_queue;

@interface AVCAudioStream : NSObject <VCMediaStreamDelegate>
{
    AVConferenceXPCClient *_connection;
    id _delegate;
    VCAudioStream *_opaqueStream;
    AVCMediaStreamConfig *_configuration;
    NSDictionary *_capabilities;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (strong, nonatomic) NSDictionary *capabilities; // @synthesize capabilities=_capabilities;
@property (strong, nonatomic) AVCMediaStreamConfig *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<AVCAudioStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic) double rtcpSendIntervalSec;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) double rtcpTimeOutIntervalSec;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic) double rtpTimeOutIntervalSec;
@property (readonly) Class superclass;

+ (id)capabilities;
- (BOOL)configure:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)deregisterBlocksForDelegateNotifications;
- (id)initWithIDSDestination:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithIDSDestination:(id)arg1 isOriginator:(BOOL)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 callID:(id)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 error:(id *)arg2;
- (id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithLocalAddress:(id)arg1 isOriginator:(BOOL)arg2 error:(id *)arg3;
- (id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 isOriginator:(BOOL)arg4 callID:(id)arg5 error:(id *)arg6;
- (id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 callID:(id)arg3 error:(id *)arg4;
- (id)initWithNetworkSockets:(id)arg1 isOriginator:(BOOL)arg2 error:(id *)arg3;
- (void)pause;
- (void)refreshLoggingParameters;
- (void)registerBlocksForDelegateNotifications;
- (void)resume;
- (void)sendDTMFDigitString:(id)arg1 withVolume:(unsigned char)arg2 duration:(unsigned short)arg3 interval:(unsigned short)arg4;
- (void)start;
- (void)startContinuousDTMFWithDigit:(BOOL)arg1 volume:(unsigned char)arg2;
- (void)startSynchronizeWithStream:(long long)arg1;
- (void)stop;
- (void)stopContinuousDTMF;
- (void)terminateSession;
- (void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
- (void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3;
- (void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3;
- (void)vcMediaStream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)vcMediaStream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id)arg1;
- (void)vcMediaStreamDidStop:(id)arg1;

@end

