//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDAssertionLogEvent : HMDLogEvent
{
    NSString *_reason;
}

@property (readonly, copy) NSString *reason; // @synthesize reason=_reason;

+ (id)identifier;
- (void).cxx_destruct;
- (id)initWithReason:(id)arg1;

@end
