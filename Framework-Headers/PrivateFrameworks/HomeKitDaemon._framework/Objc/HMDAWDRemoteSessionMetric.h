//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HMDAWDRemoteSessionMetric : NSObject
{
    BOOL _submitted;
    unsigned long long _role;
    NSDate *_creation;
    double _duration;
    unsigned long long _closeReason;
}

@property (nonatomic) unsigned long long closeReason; // @synthesize closeReason=_closeReason;
@property (strong, nonatomic) NSDate *creation; // @synthesize creation=_creation;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property (nonatomic) BOOL submitted; // @synthesize submitted=_submitted;

+ (unsigned long long)closeReasonFromError:(id)arg1;
+ (unsigned long long)currentDeviceType;
- (void).cxx_destruct;
- (void)__submitMetric;
- (void)closeWithReason:(unsigned long long)arg1;
- (id)description;
- (id)initWithRole:(unsigned long long)arg1;
- (void)open;

@end
