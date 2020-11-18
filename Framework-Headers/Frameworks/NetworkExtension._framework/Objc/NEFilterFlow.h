//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEFilterAbsoluteVerdict, NSData, NSMutableArray, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue;

@interface NEFilterFlow : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isOpen;
    NEFilterAbsoluteVerdict *_currentVerdict;
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
    NSObject<OS_dispatch_queue> *_queue;
    NSUUID *_flowUUID;
    NSMutableArray *_savedMessageHandlerQueue;
    unsigned long long _inBytes;
    unsigned long long _outBytes;
    NSData *_crypto_signature;
}

@property (copy) NSURL *URL; // @synthesize URL=_URL;
@property (strong) NSData *crypto_signature; // @synthesize crypto_signature=_crypto_signature;
@property (strong) NEFilterAbsoluteVerdict *currentVerdict;
@property long long direction; // @synthesize direction=_direction;
@property int epid; // @synthesize epid=_epid;
@property (copy) NSUUID *flowUUID; // @synthesize flowUUID=_flowUUID;
@property (readonly) NSUUID *identifier;
@property unsigned long long inBytes; // @synthesize inBytes=_inBytes;
@property BOOL isOpen;
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
- (void)close;
- (void)copySourceAppInfo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 sourceAppIdentifier:(id)arg2;

@end
