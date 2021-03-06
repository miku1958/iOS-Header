//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemStatus/BSDescriptionProviding-Protocol.h>
#import <SystemStatus/NSSecureCoding-Protocol.h>

@class BSAuditToken, NSString;

@interface STActivityAttribution : NSObject <NSSecureCoding, BSDescriptionProviding>
{
    int _clientProvidedPID;
    BSAuditToken *_bsAuditToken;
}

@property (readonly, nonatomic) CDStruct_6ad76789 auditToken;
@property (readonly, copy, nonatomic) BSAuditToken *bsAuditToken; // @synthesize bsAuditToken=_bsAuditToken;
@property (readonly, nonatomic) int clientProvidedPID; // @synthesize clientProvidedPID=_clientProvidedPID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int pid;
@property (readonly) Class superclass;

+ (id)attributionWithAuditToken:(CDStruct_6ad76789)arg1;
+ (id)attributionWithPID:(int)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;
- (id)initWithBSAuditToken:(id)arg1 clientProvidedPID:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPID:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

