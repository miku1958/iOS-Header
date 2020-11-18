//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSData, NSDictionary, NSError, NSString, NWEndpoint, NWParameters, NWPath;
@protocol NWTCPConnectionAuthenticationDelegate, OS_nw_connection;

@interface NWTCPConnection : NSObject <NWPrettyDescription>
{
    BOOL _viable;
    BOOL _hasBetterPath;
    long long _state;
    NWEndpoint *_endpoint;
    NSError *_internalError;
    NSObject<OS_nw_connection> *_internalConnection;
    id<NWTCPConnectionAuthenticationDelegate> _delegate;
    NWParameters *_parameters;
}

@property (readonly, nonatomic) NSDictionary *TCPInfo;
@property (readonly, nonatomic) BOOL TFOSucceeded;
@property (readonly, nonatomic) NWPath *connectedPath;
@property (weak) id<NWTCPConnectionAuthenticationDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) BOOL hasBetterPath; // @synthesize hasBetterPath=_hasBetterPath;
@property (strong) NSObject<OS_nw_connection> *internalConnection; // @synthesize internalConnection=_internalConnection;
@property (strong) NSError *internalError; // @synthesize internalError=_internalError;
@property (readonly, nonatomic) BOOL isMultipath;
@property (readonly, nonatomic) NWEndpoint *localAddress;
@property (readonly, nonatomic) NSData *metadata;
@property (readonly, nonatomic) unsigned long long multipathConnectedSubflowCount;
@property (readonly, nonatomic) int multipathPrimarySubflowInterfaceIndex;
@property (readonly, nonatomic) unsigned long long multipathSubflowCount;
@property (readonly, nonatomic) NSDictionary *multipathSubflowSwitchCounts;
@property (readonly, nonatomic) NWParameters *parameters; // @synthesize parameters=_parameters;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NWEndpoint *remoteAddress;
@property (nonatomic) long long state; // @synthesize state=_state;
@property (readonly, nonatomic) NSData *txtRecord;
@property (nonatomic, getter=isViable) BOOL viable; // @synthesize viable=_viable;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)stringFromNWTCPConnectionState:(long long)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (BOOL)fillOutTCPConnectionInfo:(struct tcp_connection_info *)arg1;
- (void)handleIdentityRequestWithMetadata:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handlePeerCertificateTrustEvaluationWithMetadata:(id)arg1 trust:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAcceptedInternalConnection:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 delegate:(id)arg3;
- (id)initWithUpgradeForConnection:(id)arg1;
- (void)readLength:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)readMinimumLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setupEventHandler;
- (BOOL)startInternal;
- (void)write:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeClose;

@end

