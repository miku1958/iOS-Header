//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface NUJSContextPool : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_contexts;
}

+ (id)sharedContextPool;
- (void).cxx_destruct;
- (id)_newContext;
- (void)_returnContext:(id)arg1;
- (id)init;
- (id)newContext;
- (void)returnContext:(id)arg1;

@end
