//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFStream, NSArray, NSCondition, NSData, NSInvocation, NSString;

@interface _MFSocket : NSObject
{
    NSCondition *_condition;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    struct __CFString *_connectionServiceType;
    NSInvocation *_eventHandler;
    NSArray *_clientCertificates;
    int _lowThroughputCounter;
    int _numTimeoutSecs;
    BOOL _allowsTrustPrompt;
    BOOL _usesOpportunisticSockets;
    BOOL _socketCanRead;
    BOOL _socketCanWrite;
    BOOL _disableEphemeralDiffieHellmanCiphers;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_accountIdentifier;
    MFStream *_stream;
}

@property (copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (nonatomic) BOOL allowsTrustPrompt; // @synthesize allowsTrustPrompt=_allowsTrustPrompt;
@property (strong, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property (nonatomic) BOOL disableEphemeralDiffieHellmanCiphers; // @synthesize disableEphemeralDiffieHellmanCiphers=_disableEphemeralDiffieHellmanCiphers;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) unsigned int remotePortNumber;
@property (readonly, nonatomic) NSArray *serverCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (readonly, nonatomic) NSData *sourceIPAddress;
@property (strong) MFStream *stream; // @synthesize stream=_stream;
@property (nonatomic) int timeout; // @synthesize timeout=_numTimeoutSecs;
@property (nonatomic) BOOL usesOpportunisticSockets; // @synthesize usesOpportunisticSockets=_usesOpportunisticSockets;

- (unsigned int)_bufferedByteCount;
- (BOOL)_certificateIsTrustedForAccount:(id)arg1;
- (BOOL)_evaluateTrust:(struct __SecTrust *)arg1 errorPtr:(id *)arg2;
- (id)_negotiatedProtocolVersion;
- (void)_setCertificateIsTrusted:(BOOL)arg1 forAccount:(id)arg2;
- (BOOL)_startSSLHandshakeWithProtocol:(id)arg1 errorPtr:(id *)arg2;
- (BOOL)_waitForSocketOpenAndFlag:(BOOL *)arg1;
- (void)abort;
- (BOOL)connectToHost:(id)arg1 withPort:(unsigned int)arg2 service:(id)arg3;
- (void)dealloc;
- (void)enableThroughputMonitoring:(BOOL)arg1;
- (id)init;
- (long long)readBytes:(char *)arg1 length:(unsigned long long)arg2;
- (id)securityProtocol;
- (void)setConnectionServiceType:(struct __CFString *)arg1;
- (void)setEventHandler:(id)arg1;
- (BOOL)setSecurityProtocol:(id)arg1;
- (long long)writeBytes:(const char *)arg1 length:(unsigned long long)arg2;

@end
