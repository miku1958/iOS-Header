//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface __NSObserver : NSObject
{
    NSNotificationCenter *nc;
    NSOperationQueue *queue;
    NSString *name;
    id object;
    CDUnknownBlockType block;
}

- (void)_doit:(id)arg1;
- (void)dealloc;
- (id)name;
- (id)object;

@end

