//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, _HKEntitlements, _HKXPCAuditToken;

@interface HDXPCProcess : NSObject
{
    NSMutableSet *_droppedEntitlements;
    BOOL _isExtension;
    _HKXPCAuditToken *_auditToken;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSString *_containerAppBundleIdentifier;
    _HKEntitlements *_entitlements;
}

@property (readonly, copy, nonatomic) NSString *applicationIdentifier;
@property (readonly, copy, nonatomic) _HKXPCAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerAppBundleIdentifier; // @synthesize containerAppBundleIdentifier=_containerAppBundleIdentifier;
@property (readonly, nonatomic) _HKEntitlements *entitlements; // @synthesize entitlements=_entitlements;
@property (readonly, nonatomic) BOOL isExtension; // @synthesize isExtension=_isExtension;
@property (readonly, nonatomic) BOOL isWidgetKitExtension;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) int processIdentifier;

+ (id)currentProcess;
+ (id)processWithConnection:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)_pluginBundleForCurrentProcess;
- (id)description;
- (void)dropEntitlement:(id)arg1;
- (BOOL)hasArrayEntitlement:(id)arg1 containing:(id)arg2;
- (BOOL)hasEntitlement:(id)arg1;
- (BOOL)hasRequiredArrayEntitlement:(id)arg1 containing:(id)arg2 error:(id *)arg3;
- (BOOL)hasRequiredEntitlement:(id)arg1 error:(id *)arg2;
- (id)initWithAuditToken:(id)arg1 entitlements:(id)arg2 isExtension:(BOOL)arg3 containerAppBundleIdentifier:(id)arg4;
- (void)restoreEntitlement:(id)arg1;
- (id)unitTest_copyProcessWithEntitlements:(id)arg1;
- (id)valueForEntitlement:(id)arg1;

@end
