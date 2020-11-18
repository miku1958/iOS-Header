//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSSecurityTask : NSObject
{
    unsigned long long _kind;
    CDStruct_4c969caf _auditToken;
    CDUnknownFunctionPointerType _createWithAuditToken;
    CDUnknownFunctionPointerType _createFromSelf;
    CDUnknownFunctionPointerType _copyValueForEntitlement;
    CDUnknownFunctionPointerType _copySigningIdentifier;
    struct __SecTask *_taskRef;
}

@property (readonly, copy, nonatomic) NSString *signingIdentifier;

+ (id)currentSecurityTask;
+ (id)securityTaskForCurrentConnection;
+ (id)securityTaskWithAuditToken:(CDStruct_4c969caf)arg1;
+ (void)setSecurityTaskForCurrentConnection:(id)arg1;
- (CDUnknownFunctionPointerType)_copySigningIdentifier;
- (struct __SecTask *)_taskRef;
- (void)dealloc;
- (BOOL)getValue:(id *)arg1 forEntitlement:(id)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 createWithAuditTokenProc:(CDUnknownFunctionPointerType)arg2 copyValueForEntitlementProc:(CDUnknownFunctionPointerType)arg3;
- (id)initWithCreateFromSelfProc:(CDUnknownFunctionPointerType)arg1 copyValueForEntitlementProc:(CDUnknownFunctionPointerType)arg2;
- (BOOL)shouldAllowAccessForBooleanEntitlement:(id)arg1;

@end

