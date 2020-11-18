//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface NFTimer : NSObject
{
    NSObject<OS_dispatch_source> *_src;
}

- (void)dealloc;
- (id)initWithCallback:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)startTimer:(double)arg1;
- (void)startTimer:(double)arg1 leeway:(double)arg2;
- (void)stopTimer;

@end

