//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAnalyticsEvent.h>

@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent
{
    BOOL _alreadyRunning;
    NSString *_reason;
}

@property (strong, nonatomic) NSString *reason; // @synthesize reason=_reason;

+ (id)eventWithReason:(id)arg1 alreadyRunning:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithReason:(id)arg1 alreadyRunning:(BOOL)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;

@end
