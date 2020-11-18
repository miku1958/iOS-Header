//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>

@class NSData, NSString, NWAddressEndpoint, NWInterface;

@interface NEIPSecSA : NSObject <NSCopying>
{
    BOOL _natTraversalEnabled;
    BOOL _natDetectedOnPeer;
    BOOL _natKeepaliveEnabled;
    BOOL _natKeepaliveOffloadEnabled;
    unsigned short _natTraversalPort;
    unsigned int _spi;
    int _direction;
    int _mode;
    int _protocol;
    unsigned int _replayWindowSize;
    int _encryptionAlgorithm;
    int _authenticationAlgorithm;
    unsigned int _internalSAID;
    NWAddressEndpoint *_localAddress;
    NWAddressEndpoint *_remoteAddress;
    NWInterface *_boundInterface;
    NSString *_tunnelInterfaceName;
    unsigned long long _lifetimeSeconds;
    NSData *_encryptionKey;
    NSData *_authenticationKey;
    unsigned long long _natKeepaliveIntervalSeconds;
    unsigned long long _natKeepaliveOffloadIntervalSeconds;
}

@property int authenticationAlgorithm; // @synthesize authenticationAlgorithm=_authenticationAlgorithm;
@property (strong) NSData *authenticationKey; // @synthesize authenticationKey=_authenticationKey;
@property (strong) NWInterface *boundInterface; // @synthesize boundInterface=_boundInterface;
@property (readonly) int direction; // @synthesize direction=_direction;
@property int encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
@property (strong) NSData *encryptionKey; // @synthesize encryptionKey=_encryptionKey;
@property unsigned int internalSAID; // @synthesize internalSAID=_internalSAID;
@property unsigned long long lifetimeSeconds; // @synthesize lifetimeSeconds=_lifetimeSeconds;
@property (strong) NWAddressEndpoint *localAddress; // @synthesize localAddress=_localAddress;
@property int mode; // @synthesize mode=_mode;
@property BOOL natDetectedOnPeer; // @synthesize natDetectedOnPeer=_natDetectedOnPeer;
@property BOOL natKeepaliveEnabled; // @synthesize natKeepaliveEnabled=_natKeepaliveEnabled;
@property unsigned long long natKeepaliveIntervalSeconds; // @synthesize natKeepaliveIntervalSeconds=_natKeepaliveIntervalSeconds;
@property BOOL natKeepaliveOffloadEnabled; // @synthesize natKeepaliveOffloadEnabled=_natKeepaliveOffloadEnabled;
@property unsigned long long natKeepaliveOffloadIntervalSeconds; // @synthesize natKeepaliveOffloadIntervalSeconds=_natKeepaliveOffloadIntervalSeconds;
@property BOOL natTraversalEnabled; // @synthesize natTraversalEnabled=_natTraversalEnabled;
@property unsigned short natTraversalPort; // @synthesize natTraversalPort=_natTraversalPort;
@property int protocol; // @synthesize protocol=_protocol;
@property (strong) NWAddressEndpoint *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property unsigned int replayWindowSize; // @synthesize replayWindowSize=_replayWindowSize;
@property unsigned int spi; // @synthesize spi=_spi;
@property (strong) NSString *tunnelInterfaceName; // @synthesize tunnelInterfaceName=_tunnelInterfaceName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createDictionary;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initInboundSA;
- (id)initOutboundSAWithSPI:(unsigned int)arg1;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;

@end
