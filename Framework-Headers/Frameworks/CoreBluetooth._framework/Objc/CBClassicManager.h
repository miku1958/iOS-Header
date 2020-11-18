//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreBluetooth/CBManager.h>

@class NSMapTable;

@interface CBClassicManager : CBManager
{
    BOOL _inquiryState;
    BOOL _discoverable;
    BOOL _connectable;
    BOOL _isInquiryRunning;
    BOOL _testMode;
    CDUnknownBlockType _connectCallback;
    CDUnknownBlockType _disconnectCallback;
    CDUnknownBlockType _serviceAddedHandler;
    CDUnknownBlockType _inquiryServiceAddedHandler;
    NSMapTable *_peers;
    long long _powerState;
    CDUnknownBlockType _classicPeerDiscovered;
    CDUnknownBlockType _sdpRecordAddedHandler;
    CDUnknownBlockType _pairingStatusHandler;
    CDUnknownBlockType _connectionStatusHandler;
}

@property (copy) CDUnknownBlockType classicPeerDiscovered; // @synthesize classicPeerDiscovered=_classicPeerDiscovered;
@property (copy) CDUnknownBlockType connectCallback; // @synthesize connectCallback=_connectCallback;
@property (readonly) BOOL connectable; // @synthesize connectable=_connectable;
@property (copy) CDUnknownBlockType connectionStatusHandler; // @synthesize connectionStatusHandler=_connectionStatusHandler;
@property (copy) CDUnknownBlockType disconnectCallback; // @synthesize disconnectCallback=_disconnectCallback;
@property (readonly) BOOL discoverable; // @synthesize discoverable=_discoverable;
@property (copy) CDUnknownBlockType inquiryServiceAddedHandler; // @synthesize inquiryServiceAddedHandler=_inquiryServiceAddedHandler;
@property (readonly) BOOL inquiryState; // @synthesize inquiryState=_inquiryState;
@property (readonly, nonatomic) BOOL isInquiryRunning; // @synthesize isInquiryRunning=_isInquiryRunning;
@property (copy) CDUnknownBlockType pairingStatusHandler; // @synthesize pairingStatusHandler=_pairingStatusHandler;
@property (readonly, strong, nonatomic) NSMapTable *peers; // @synthesize peers=_peers;
@property (readonly) long long powerState; // @synthesize powerState=_powerState;
@property (copy) CDUnknownBlockType sdpRecordAddedHandler; // @synthesize sdpRecordAddedHandler=_sdpRecordAddedHandler;
@property (copy) CDUnknownBlockType serviceAddedHandler; // @synthesize serviceAddedHandler=_serviceAddedHandler;
@property (nonatomic) BOOL testMode; // @synthesize testMode=_testMode;

- (void).cxx_destruct;
- (void)addAACPClient:(unsigned short)arg1 aacpClientAdded:(CDUnknownBlockType)arg2;
- (void)addService:(id)arg1;
- (void)addService:(id)arg1 sdpRecord:(id)arg2 sdpRecordAddedHandler:(CDUnknownBlockType)arg3;
- (void)addServiceToInquiryList:(id)arg1;
- (void)cancelPeerConnection:(id)arg1;
- (void)cancelPeerConnection:(id)arg1 force:(BOOL)arg2;
- (void)cancelPeerConnection:(id)arg1 options:(id)arg2;
- (id)classicPeerWithInfo:(id)arg1;
- (void)connectPeer:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (void)forEachClassicPeer:(CDUnknownBlockType)arg1;
- (void)handleLocalDeviceStateUpdatedMsg:(id)arg1;
- (void)handleMsg:(unsigned short)arg1 args:(id)arg2;
- (void)handlePeerConnectionCompleted:(id)arg1;
- (void)handlePeerConnectionStateUpdated:(id)arg1;
- (void)handlePeerDisconnectionCompleted:(id)arg1;
- (void)handlePeerDiscovered:(id)arg1;
- (void)handleSDPRecordAdded:(id)arg1;
- (void)handleServiceAddedToInquiryList:(id)arg1;
- (void)handleServiceAddedToSDP:(id)arg1;
- (id)initWithQueue:(id)arg1 options:(id)arg2;
- (BOOL)isMsgAllowedAlways:(unsigned short)arg1;
- (BOOL)isMsgAllowedWhenOff:(unsigned short)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)orphanClassicPeers;
- (id)peerWithIdentifier:(id)arg1;
- (id)peerWithInfo:(id)arg1;
- (void)removeAACPClient:(unsigned short)arg1;
- (void)removeAllServices;
- (void)removeAllServicesFromInquiryList;
- (void)removeService:(id)arg1;
- (void)removeServiceFromInquiryList:(id)arg1;
- (id)retrievePairedPeersWithOptions:(id)arg1;
- (id)retrievePeerWithAddress:(id)arg1;
- (BOOL)secureBluetooth:(BOOL)arg1 withAuthData:(id)arg2;
- (void)setBTConnectable:(BOOL)arg1;
- (void)setBTDiscoverable:(BOOL)arg1;
- (BOOL)setBTPowerState:(BOOL)arg1;
- (void)startInquiryWithOptions:(id)arg1 classicPeerDiscovered:(CDUnknownBlockType)arg2;
- (void)stopInquiry;

@end
