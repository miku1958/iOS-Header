//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCTransportSession.h>

@class NSString, VCDatagramChannelIDS;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDS : VCTransportSession
{
    VCDatagramChannelIDS *_datagramChannel;
    int _socket;
    NSString *_destination;
    BOOL _requireEncryptionInfo;
    BOOL _isIDSDCEventUsageErrorReported;
}

@property (copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property (nonatomic) int socket; // @synthesize socket=_socket;

- (void)cleanupDatagramChannel;
- (id)connectionSetupPiggybackBlob;
- (id)datagramChannel;
- (void)dealloc;
- (void)dispatchedProcessDatagramChannelEventInfo:(id)arg1;
- (BOOL)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (void)handleCellularMTUChanged:(id)arg1;
- (void)handleCellularSoMaskChanged:(id)arg1;
- (void)handleChannelInfoReport:(id)arg1;
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;
- (void)handleIDSEncryptionInfoEvent:(id)arg1;
- (void)handleIDSMembershipChangeInfoEvent:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handlePreConnectionDataReceived:(id)arg1;
- (void)handleProbingResponse:(id)arg1;
- (void)handleRATChanged:(id)arg1;
- (void)handleUpdateRemoteSessionInfo:(id)arg1;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(BOOL)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4;
- (int)onStart;
- (void)onStop;
- (void)processDatagramChannelEventInfo:(id)arg1;
- (unsigned int)remoteDeviceVersionIDS;
- (void)setConnectionSetupPiggybackBlob:(id)arg1;
- (void)setConnectionSetupTime;
- (void)setPiggybackBlobPreference;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)start;
- (void)stop;

@end
