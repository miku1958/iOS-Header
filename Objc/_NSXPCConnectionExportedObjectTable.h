//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _NSXPCConnectionExportInfo;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportedObjectTable : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    _NSXPCConnectionExportInfo *_proxy1;
    struct __CFDictionary *_proxyNumberToObject;
    struct __CFDictionary *_objectToProxyNumber;
    unsigned long long _next;
    BOOL _valid;
    NSObject<OS_dispatch_group> *_replyGroup;
}

- (void)dealloc;
- (void)decrementOutstandingReplyCount;
- (id)description;
- (id)exportedObjectForProxyNumber:(unsigned long long)arg1;
- (void)incrementOutstandingReplyCount;
- (id)init;
- (id)interfaceForProxyNumber:(unsigned long long)arg1;
- (void)invalidate;
- (unsigned long long)proxyNumberForExportedObject:(id)arg1 interface:(id)arg2;
- (void)receivedReleaseForProxyNumber:(unsigned long long)arg1 userQueue:(id)arg2;
- (void)releaseExportedObject:(unsigned long long)arg1;
- (void)setExportedObject:(id)arg1 forProxyNumber:(unsigned long long)arg2;
- (void)setInterface:(id)arg1 forProxyNumber:(unsigned long long)arg2;

@end

