//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInputCore/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary, NSString, TIKeyboardLayout;

@interface TISKSessionSamples : NSObject <NSSecureCoding>
{
    double _currentTypingStart;
    BOOL _isEmpty;
    NSMutableDictionary *_keyedSamples;
    NSDate *_startTime;
    NSDate *_endTime;
    NSString *_identifier;
    NSString *_version;
    TIKeyboardLayout *_layout;
}

@property (strong, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
@property (strong, nonatomic) NSMutableDictionary *keyedSamples; // @synthesize keyedSamples=_keyedSamples;
@property (strong, nonatomic) TIKeyboardLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) NSString *version; // @synthesize version=_version;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_roundUpToNearestHalfHour:(id)arg1;
- (id)_roundedSessionInterval;
- (void)addSample:(id)arg1 forKey:(id)arg2;
- (void)addSample:(id)arg1 forKey:(id)arg2 withPosition:(unsigned long long)arg3;
- (id)counter:(id)arg1;
- (id)description:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateDataForSR;
- (void)haltTypingTimer;
- (void)haltTypingTimerAt:(double)arg1;
- (id)init:(id)arg1 endDate:(id)arg2;
- (id)init:(id)arg1 endDate:(id)arg2 identifier:(id)arg3 version:(id)arg4 layout:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTypingTimerHalted;
- (void)merge:(id)arg1;
- (id)positionalMetric:(id)arg1;
- (id)samples:(id)arg1;
- (id)samples:(id)arg1 withPosition:(unsigned long long)arg2;
- (void)setup;
- (id)singleMetric:(id)arg1;
- (void)startTypingTimerAt:(double)arg1;

@end
