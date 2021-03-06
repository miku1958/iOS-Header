//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_group, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardEntry : NSObject
{
    const struct __CFString *_flavorName;
    const struct __CFUUID *_uuid;
    const struct __CFData *_data;
    NSObject<OS_xpc_object> *_shmem;
    unsigned long long _shmemLength;
    unsigned long long _dataFlags;
    unsigned char _isHidden;
    CDUnknownBlockType _promisor;
    CDUnknownBlockType _asyncPromisor;
    _Atomic int _promiseState;
    NSObject<OS_dispatch_group> *_promiseGroup;
    struct os_unfair_lock_s _lock;
    NSObject<OS_xpc_object> *_promisorConnection;
    int _itemIdentifier;
    unsigned char _isPendingFlush;
    unsigned char _extensionConsumed;
}

@property unsigned long long dataFlags; // @synthesize dataFlags=_dataFlags;
@property unsigned char extensionConsumed; // @synthesize extensionConsumed=_extensionConsumed;
@property (readonly) const struct __CFString *flavorName; // @synthesize flavorName=_flavorName;
@property (readonly) unsigned char hasData;
@property (readonly) unsigned char hasLocalPromise;
@property (getter=isHidden) unsigned char hidden; // @synthesize hidden=_isHidden;
@property unsigned char isPendingFlush; // @synthesize isPendingFlush=_isPendingFlush;
@property (readonly) int itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (readonly) const struct __CFUUID *promiseUUID; // @synthesize promiseUUID=_uuid;
@property (readonly) unsigned char promisorExistsInCurrentProcess;

- (id)_createShmemIfNecessaryLength:(unsigned long long *)arg1;
- (void)_setLocalPromiseState:(int)arg1;
- (const struct __CFData *)createDataAndReturnError:(int *)arg1;
- (id)createXPCObjectWithMetadataOnly:(unsigned char)arg1;
- (void)dealloc;
- (id)description;
- (id)initFromXPCObject:(id)arg1 fromConnection:(id)arg2;
- (id)initWithFlavorName:(const struct __CFString *)arg1 itemIdentifier:(int)arg2;
- (void)promiseDataWithBlock:(CDUnknownBlockType)arg1 forPasteboard:(struct __CFPasteboard *)arg2 generation:(long long)arg3;
- (void)promiseDataWithFetchOperation:(id)arg1;
- (CDUnknownBlockType)requestDataForPasteboard:(struct __CFPasteboard *)arg1 generation:(long long)arg2 immediatelyAvailableResult:(CDStruct_55991ab6 *)arg3;
- (void)resolveClientPromisedDataWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned char)resolveLocalPromisedData;
- (void)setData:(struct __CFData *)arg1;

@end

