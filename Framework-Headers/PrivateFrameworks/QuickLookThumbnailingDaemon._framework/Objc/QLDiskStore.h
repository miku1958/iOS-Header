//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface QLDiskStore : NSObject
{
    NSObject<OS_dispatch_queue> *_afterInit;
    unsigned char _disableQuickLook;
    BOOL _isExternalEncrypted;
    unsigned char _disableCache;
    struct statfs _fs_stat;
    BOOL _encrypted;
}

@property (readonly) BOOL acceptsThumbnails;
@property (readonly) unsigned long long availableDiskSpace;
@property unsigned char disableCache; // @synthesize disableCache=_disableCache;
@property unsigned char disableQuickLook; // @synthesize disableQuickLook=_disableQuickLook;
@property (readonly) BOOL distant;
@property (readonly) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property struct statfs fs_stat; // @synthesize fs_stat=_fs_stat;
@property (readonly) BOOL hasThumbnailCache;
@property (nonatomic) BOOL isExternalEncrypted; // @synthesize isExternalEncrypted=_isExternalEncrypted;
@property (readonly) const char *mountPath;

+ (id)diskStoreForURL:(id)arg1;
+ (id)diskStores;
- (void).cxx_destruct;
- (id)description;
- (void)executeBlock:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

