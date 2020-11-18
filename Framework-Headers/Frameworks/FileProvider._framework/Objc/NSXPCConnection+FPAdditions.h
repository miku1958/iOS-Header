//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSXPCConnection.h>

@interface NSXPCConnection (FPAdditions)
- (id)fp_bundleIdentifier;
- (BOOL)fp_hasOneOfEntitlements:(id)arg1;
- (BOOL)fp_hasOneOfEntitlements:(id)arg1 logLevel:(unsigned long long)arg2;
- (BOOL)fp_hasSandboxAccessToFile:(id)arg1;
- (BOOL)fp_hasSandboxAccessToFile:(id)arg1 accessType:(const char *)arg2 logLevel:(unsigned long long)arg3;
- (BOOL)fp_hasSandboxAccessToFile:(id)arg1 logLevel:(unsigned long long)arg2;
- (BOOL)fp_isNonSandboxedConnection;
- (id)fp_valueForEntitlement:(id)arg1;
@end

