//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PCDelegateInfo : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)queue;
- (void)setQueue:(id)arg1;

@end

