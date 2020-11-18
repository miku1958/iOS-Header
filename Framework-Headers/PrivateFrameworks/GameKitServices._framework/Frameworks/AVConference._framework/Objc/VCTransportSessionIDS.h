//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCTransportSession.h>

#import <AVConference/VCConnectionManagerDelegate-Protocol.h>

@class IDSDatagramChannel, NSString;

__attribute__((visibility("hidden")))
@interface VCTransportSessionIDS : VCTransportSession <VCConnectionManagerDelegate>
{
    int _socket;
    NSString *_destination;
    IDSDatagramChannel *_datagramChannel;
    unsigned int _datagramChannelToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property (readonly) unsigned long long hash;
@property (nonatomic) int socket; // @synthesize socket=_socket;
@property (readonly) Class superclass;

- (void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2;
- (id)connectionSetupPiggybackBlob;
- (void)dealloc;
- (void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2;
- (void)discardConnection:(id)arg1;
- (BOOL)getConnectionSetupData:(id *)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (void)handleCellularMTUChanged:(id)arg1;
- (void)handleChannelInfoReport:(id)arg1;
- (void)handleDefaultLinkUpdatedWithInfo:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handlePreConnectionDataReceived:(id)arg1;
- (void)handleRATChanged:(id)arg1;
- (id)initWithCallID:(unsigned int)arg1;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)setConnectionSetupPiggybackBlob:(id)arg1;
- (void)setConnectionSetupTime;
- (void)setDefaultLink:(id)arg1;
- (void)setPiggybackBlobPreference;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)start;
- (void)stop;

@end

