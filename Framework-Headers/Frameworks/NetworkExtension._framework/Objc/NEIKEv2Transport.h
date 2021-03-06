//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEIKEv2PacketReceiver-Protocol.h>

@class NSMutableArray, NSString, NWAddressEndpoint, NWInterface;
@protocol NEIKEv2PacketDelegate, OS_dispatch_queue, OS_nw_connection;

@interface NEIKEv2Transport : NSObject <NEIKEv2PacketReceiver>
{
    BOOL _connected;
    BOOL _cancelled;
    NWAddressEndpoint *_local;
    NWAddressEndpoint *_remote;
    unsigned long long _transportType;
    id<NEIKEv2PacketDelegate> _packetDelegate;
    NSObject<OS_nw_connection> *_connection;
    NWInterface *_interface;
    NSMutableArray *_connectedBlocks;
    NSObject<OS_dispatch_queue> *_receiveQueue;
    NSMutableArray *_clients;
}

@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (strong) NSMutableArray *clients; // @synthesize clients=_clients;
@property BOOL connected; // @synthesize connected=_connected;
@property (strong, nonatomic) NSMutableArray *connectedBlocks; // @synthesize connectedBlocks=_connectedBlocks;
@property (strong) NSObject<OS_nw_connection> *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NWInterface *interface; // @synthesize interface=_interface;
@property (strong) NWAddressEndpoint *local; // @synthesize local=_local;
@property (weak) id<NEIKEv2PacketDelegate> packetDelegate; // @synthesize packetDelegate=_packetDelegate;
@property (readonly) unsigned short port;
@property (strong) NSObject<OS_dispatch_queue> *receiveQueue; // @synthesize receiveQueue=_receiveQueue;
@property (strong) NWAddressEndpoint *remote; // @synthesize remote=_remote;
@property (readonly) Class superclass;
@property unsigned long long transportType; // @synthesize transportType=_transportType;

+ (BOOL)checkAddress:(id)arg1 interface:(id)arg2;
+ (id)copyExistingTransport:(unsigned long long)arg1 remote:(id)arg2 local:(id)arg3 localPort:(unsigned short)arg4 boundInterface:(id)arg5 packetDelegate:(id)arg6;
+ (id)createTransport:(unsigned long long)arg1 remote:(id)arg2 local:(id)arg3 localPort:(unsigned short)arg4 boundInterface:(id)arg5 queue:(id)arg6 socketGetBlock:(CDUnknownBlockType)arg7 packetDelegate:(id)arg8;
+ (id)createTransportWithConnection:(id)arg1 queue:(id)arg2;
+ (id)stringForTransport:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)addClient:(id)arg1 wildcard:(BOOL)arg2 delegate:(id)arg3;
- (void)callConnectedBlocks;
- (void)cancelClient:(id)arg1 shouldInvalidate:(BOOL)arg2;
- (void)dealloc;
- (void)disableWildcardForClient:(id)arg1;
- (id)init;
- (void)readOnConnection;
- (void)receivePacketData:(id)arg1;
- (BOOL)sendData:(id)arg1 sendCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)sendPacket:(id)arg1;
- (BOOL)setupUDPConnectionToRemote:(id)arg1 local:(id)arg2 localPort:(unsigned short)arg3 socketGetBlock:(CDUnknownBlockType)arg4;
- (void)waitForTransport:(CDUnknownBlockType)arg1;

@end

