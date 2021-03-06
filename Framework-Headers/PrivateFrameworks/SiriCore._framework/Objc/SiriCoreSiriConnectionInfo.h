//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL, SAConnectionPolicy, SAConnectionPolicyRoute;

@interface SiriCoreSiriConnectionInfo : NSObject
{
    BOOL _prefersWWAN;
    BOOL _skipPeer;
    BOOL _useWiFiHint;
    BOOL _forceReconnect;
    BOOL _imposePolicyBan;
    BOOL _requiresURLSession;
    BOOL _enableSiriServerLogging;
    NSURL *_url;
    SAConnectionPolicyRoute *_connectionPolicyRoute;
    NSString *_aceHost;
    NSString *_languageCode;
    NSError *_skipPeerErrorReason;
    double _timeout;
    NSString *_assistantIdentifier;
    NSString *_peerAssistantIdentifier;
    NSString *_connectionId;
    SAConnectionPolicy *_connectionPolicy;
}

@property (copy, nonatomic) NSString *aceHost; // @synthesize aceHost=_aceHost;
@property (copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property (copy, nonatomic) NSString *connectionId; // @synthesize connectionId=_connectionId;
@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy; // @synthesize connectionPolicy=_connectionPolicy;
@property (copy, nonatomic) SAConnectionPolicyRoute *connectionPolicyRoute; // @synthesize connectionPolicyRoute=_connectionPolicyRoute;
@property (nonatomic, getter=isSiriServerLoggingEnabled) BOOL enableSiriServerLogging; // @synthesize enableSiriServerLogging=_enableSiriServerLogging;
@property (nonatomic) BOOL forceReconnect; // @synthesize forceReconnect=_forceReconnect;
@property (nonatomic) BOOL imposePolicyBan; // @synthesize imposePolicyBan=_imposePolicyBan;
@property (copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (copy, nonatomic) NSString *peerAssistantIdentifier; // @synthesize peerAssistantIdentifier=_peerAssistantIdentifier;
@property (nonatomic) BOOL prefersWWAN; // @synthesize prefersWWAN=_prefersWWAN;
@property (nonatomic) BOOL requiresURLSession; // @synthesize requiresURLSession=_requiresURLSession;
@property (nonatomic) BOOL skipPeer; // @synthesize skipPeer=_skipPeer;
@property (copy, nonatomic) NSError *skipPeerErrorReason; // @synthesize skipPeerErrorReason=_skipPeerErrorReason;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;
@property (copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property (nonatomic) BOOL useWiFiHint; // @synthesize useWiFiHint=_useWiFiHint;

- (void).cxx_destruct;
- (void)_appendPotentiallyNilString:(id)arg1 toMutableString:(id)arg2;
- (id)description;

@end

