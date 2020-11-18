//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_source;

@interface RTTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timer;
    NSString *_identifier;
}

@property (readonly) NSString *identifier; // @synthesize identifier=_identifier;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)fireAfterDelay:(double)arg1;
- (void)fireAfterDelay:(double)arg1 interval:(double)arg2;
- (void)fireAfterDelay:(double)arg1 interval:(double)arg2 leeway:(double)arg3;
- (void)fireWithInterval:(double)arg1;
- (void)fireWithInterval:(double)arg1 leeway:(double)arg2;
- (id)init;
- (id)initWithIdentifier:(id)arg1 dispatchSource:(id)arg2;
- (id)initWithIdentifier:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)resume;
- (void)suspend;

@end

