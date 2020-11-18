//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <BaseBoard/BSXPCCoding-Protocol.h>
#import <BaseBoard/NSCopying-Protocol.h>
#import <BaseBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding, NSSecureCoding>
{
    NSString *_bundleID;
    CDStruct_4c969caf _auditToken;
}

@property (copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int pid; // @dynamic pid;
@property (readonly, nonatomic) CDStruct_4c969caf realToken; // @synthesize realToken=_auditToken;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
+ (id)tokenForCurrentProcess;
+ (id)tokenFromAuditToken:(CDStruct_4c969caf)arg1;
+ (id)tokenFromAuditTokenRef:(CDStruct_4c969caf *)arg1;
+ (id)tokenFromMachMessage:(CDStruct_c91b0553 *)arg1;
+ (id)tokenFromNSXPCConnection:(id)arg1;
+ (id)tokenFromXPCConnection:(id)arg1;
+ (id)tokenFromXPCMessage:(id)arg1;
- (id)_dataWithValue:(id)arg1;
- (id)_valueFromData:(id)arg1 ofType:(const char *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithXPCMessage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)valueForEntitlement:(id)arg1;

@end

