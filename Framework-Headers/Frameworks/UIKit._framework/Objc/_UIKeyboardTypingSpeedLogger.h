//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardTypingSpeedLogger : NSObject
{
    long long _typingDelaySamples[7];
    long long _typingDelaySampleCount;
}

- (id)init;
- (void)logToAggregate;
- (void)recordTypingDelay:(double)arg1;

@end
