//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface NSExtensionURLResult : NSObject
{
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURL *_url;
    struct os_unfair_lock_s _lock;
}

@property (copy, setter=setURL:) NSURL *url;

- (id)copiedURL;
- (void)dealloc;
- (id)init;
- (void)signal;
- (BOOL)wait:(double)arg1;

@end

