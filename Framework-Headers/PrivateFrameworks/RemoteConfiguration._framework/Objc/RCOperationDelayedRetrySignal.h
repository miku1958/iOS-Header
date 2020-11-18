//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RemoteConfiguration/RCOperationRetrySignal-Protocol.h>

@class NSString;

@interface RCOperationDelayedRetrySignal : NSObject <RCOperationRetrySignal>
{
    unsigned long long _signalTime;
    double _delay;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithDelay:(double)arg1;
- (void)onQueue:(id)arg1 signal:(CDUnknownBlockType)arg2;

@end

