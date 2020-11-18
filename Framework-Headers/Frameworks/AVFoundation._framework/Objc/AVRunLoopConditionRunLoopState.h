//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVRunLoopConditionRunLoopState : NSObject
{
    struct __CFRunLoop *_runLoop;
    struct __CFRunLoopSource *_signalSource;
    BOOL _signaled;
}

@property (readonly, nonatomic) struct __CFRunLoop *runLoop; // @synthesize runLoop=_runLoop;
@property (nonatomic) struct __CFRunLoopSource *signalSource; // @synthesize signalSource=_signalSource;
@property (nonatomic) BOOL signaled; // @synthesize signaled=_signaled;

+ (id)runLoopStateWithRunLoop:(struct __CFRunLoop *)arg1;
- (void)dealloc;
- (id)initWithRunLoop:(struct __CFRunLoop *)arg1;

@end
