//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

@interface CHDMonotonicTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
}

- (void).cxx_destruct;
- (void)activateWithTime:(unsigned long long)arg1 repeat:(long long)arg2 block:(CDUnknownBlockType)arg3;
- (void)invalidate;

@end

