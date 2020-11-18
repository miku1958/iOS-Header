//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MultipeerConnectivity/NSCopying-Protocol.h>
#import <MultipeerConnectivity/NSSecureCoding-Protocol.h>

@class MCPeerIDInternal, NSString;

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding>
{
    MCPeerIDInternal *_internal;
}

@property (readonly, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)displayNameAndPID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idString;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayName:(id)arg1;
- (id)initWithIDString:(id)arg1 displayName:(id)arg2;
- (id)initWithPID:(unsigned int)arg1 displayName:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)internalDescription;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)pid;
- (unsigned long long)pid64;
- (id)serializedRepresentation;

@end

