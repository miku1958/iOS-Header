//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFTimerPrivate;

__attribute__((visibility("hidden")))
@interface PDFTimer : NSObject
{
    PDFTimerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_execute;
- (void)cancel;
- (void)dealloc;
- (id)initWithSelector:(SEL)arg1 forTarget:(id)arg2;
- (id)initWithThrottleDelay:(double)arg1 forSelector:(SEL)arg2 forTarget:(id)arg3;
- (BOOL)isUpdateQueued;
- (void)update;

@end
