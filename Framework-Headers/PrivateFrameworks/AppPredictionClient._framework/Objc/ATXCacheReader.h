//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _PASLock;
@protocol OS_dispatch_source;

@interface ATXCacheReader : NSObject
{
    _PASLock *_lock;
    NSString *_cacheBasePath;
    NSObject<OS_dispatch_source> *_vnodeSource;
}

- (void).cxx_destruct;
- (void)_handleDirChange;
- (void)_prefetchAssetMapping;
- (void)dealloc;
- (id)init;
- (id)initWithCacheBasePath:(id)arg1;
- (id)readCacheFileForCachePath:(id)arg1;
- (id)readCacheFileForConsumerSubtype:(unsigned char)arg1;
- (id)readCacheFileForFilename:(id)arg1;

@end

