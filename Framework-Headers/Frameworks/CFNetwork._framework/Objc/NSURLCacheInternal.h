//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSURLCacheInternal : NSObject
{
    unsigned long long memoryCapacity;
    unsigned long long diskCapacity;
    NSString *diskPath;
    unsigned long long currentMemoryUsage;
    unsigned long long currentDiskUsage;
    struct _CFURLCache *_cacheRef;
}

- (void)dealloc;
- (void)finalize;

@end

