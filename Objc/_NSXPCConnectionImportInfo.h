//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionImportInfo : NSObject
{
    unsigned long long _generationCount;
    struct os_unfair_lock_s _lock;
    struct __CFDictionary *_proxyNumberToCount;
    void *_secTaskRef;
}

- (id)_valueForEntitlement:(id)arg1 auditToken:(CDStruct_4c969caf)arg2;
- (void)addProxy:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)removeProxy:(id)arg1;

@end

