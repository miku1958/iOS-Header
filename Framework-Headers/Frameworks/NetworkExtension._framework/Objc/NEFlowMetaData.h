//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _fastOpenRequested;
    BOOL _multipathRequested;
    NSData *_sourceAppUniqueIdentifier;
    NSString *_sourceAppSigningIdentifier;
    NSData *_sourceAppAuditToken;
    NSUUID *_filterFlowIdentifier;
}

@property (readonly) BOOL fastOpenRequested; // @synthesize fastOpenRequested=_fastOpenRequested;
@property (readonly) NSUUID *filterFlowIdentifier; // @synthesize filterFlowIdentifier=_filterFlowIdentifier;
@property (readonly) BOOL multipathRequested; // @synthesize multipathRequested=_multipathRequested;
@property (readonly) NSData *sourceAppAuditToken; // @synthesize sourceAppAuditToken=_sourceAppAuditToken;
@property (readonly) NSString *sourceAppSigningIdentifier; // @synthesize sourceAppSigningIdentifier=_sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppUniqueIdentifier; // @synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromFlow:(struct _NEFlow *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(BOOL)arg3 multipathRequested:(BOOL)arg4 audit_token:(id)arg5 filterFlowID:(id)arg6;

@end

