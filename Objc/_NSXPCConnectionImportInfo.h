//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionImportInfo : NSObject
{
    unsigned long long _generationCount;
    NSLock *_lock;
    struct __CFDictionary *_proxyNumberToCount;
    NSMutableDictionary *_remoteSideEntitlementCache;
}

- (id)_valueForEntitlement:(id)arg1 auditToken:(CDStruct_6ad76789)arg2;
- (void)addProxy:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)removeProxy:(id)arg1;

@end

