//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCDispatchQueue : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_rootQueues;
}

+ (id)defaultManager;
- (void)dealloc;
- (id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(BOOL)arg2;
- (id)init;

@end

