//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEFilterAbsoluteVerdict, NSData, NSMutableArray, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface NEFilterFlow : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying>
{
    BOOL _isRemediationFlow;
    BOOL _isPaused;
    BOOL _reportAtEnd;
    BOOL _sourceAppIdentifierFromApp;
    int _pid;
    int _epid;
    NSURL *_URL;
    NSData *_sourceAppUniqueIdentifier;
    NSString *_sourceAppIdentifier;
    NSString *_sourceAppVersion;
    long long _direction;
    NSData *_sourceAppAuditToken;
    NEFilterAbsoluteVerdict *_currentVerdict;
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_flowUUID;
    NSMutableArray *_savedMessageHandlerQueue;
    unsigned long long _inBytes;
    unsigned long long _outBytes;
    NSData *_crypto_signature;
    NSObject<OS_xpc_object> *_connection;
}

@property (copy) NSURL *URL; // @synthesize URL=_URL;
@property (strong) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property (strong) NSData *crypto_signature; // @synthesize crypto_signature=_crypto_signature;
@property (strong) NEFilterAbsoluteVerdict *currentVerdict; // @synthesize currentVerdict=_currentVerdict;
@property long long direction; // @synthesize direction=_direction;
@property int epid; // @synthesize epid=_epid;
@property (copy) NSUUID *flowUUID; // @synthesize flowUUID=_flowUUID;
@property (readonly) NSUUID *identifier;
@property (readonly, nonatomic) NSString *identifierString;
@property unsigned long long inBytes; // @synthesize inBytes=_inBytes;
@property BOOL isPaused; // @synthesize isPaused=_isPaused;
@property BOOL isRemediationFlow; // @synthesize isRemediationFlow=_isRemediationFlow;
@property unsigned long long outBytes; // @synthesize outBytes=_outBytes;
@property int pid; // @synthesize pid=_pid;
@property (strong) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property BOOL reportAtEnd; // @synthesize reportAtEnd=_reportAtEnd;
@property (strong) NSMutableArray *savedMessageHandlerQueue; // @synthesize savedMessageHandlerQueue=_savedMessageHandlerQueue;
@property (strong) NSData *sourceAppAuditToken; // @synthesize sourceAppAuditToken=_sourceAppAuditToken;
@property (copy) NSString *sourceAppIdentifier; // @synthesize sourceAppIdentifier=_sourceAppIdentifier;
@property BOOL sourceAppIdentifierFromApp; // @synthesize sourceAppIdentifierFromApp=_sourceAppIdentifierFromApp;
@property (copy) NSData *sourceAppUniqueIdentifier; // @synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier;
@property (copy) NSString *sourceAppVersion; // @synthesize sourceAppVersion=_sourceAppVersion;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)createDataCompleteReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (BOOL)createDataReply:(id)arg1 controlSocket:(int)arg2 direction:(long long)arg3 verdict:(id)arg4 context:(id)arg5;
- (BOOL)createNewFlowReply:(id)arg1 controlSocket:(int)arg2 verdict:(id)arg3 context:(id)arg4;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sourceAppIdentifier:(id)arg2;
- (BOOL)shouldCloseWithVerdict:(id)arg1;
- (BOOL)updateCurrentVerdictFromDataVerdict:(id)arg1 direction:(long long)arg2;
- (void)updateSourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

