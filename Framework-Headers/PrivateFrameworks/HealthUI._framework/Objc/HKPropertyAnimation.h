//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class CAMediaTimingFunction, NSDate, NSString;

@interface HKPropertyAnimation : NSObject <NSCopying>
{
    NSString *_property;
    id _fromValue;
    id _toValue;
    double _duration;
    CAMediaTimingFunction *_timingFunction;
    long long _secondaryAnimationCurve;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _propertyApplicationFunction;
    NSDate *_appliedDate;
}

@property (strong, nonatomic) NSDate *appliedDate; // @synthesize appliedDate=_appliedDate;
@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (strong, nonatomic) id fromValue; // @synthesize fromValue=_fromValue;
@property (strong, nonatomic) NSString *property; // @synthesize property=_property;
@property (copy, nonatomic) CDUnknownBlockType propertyApplicationFunction; // @synthesize propertyApplicationFunction=_propertyApplicationFunction;
@property (nonatomic) long long secondaryAnimationCurve; // @synthesize secondaryAnimationCurve=_secondaryAnimationCurve;
@property (strong, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;
@property (strong, nonatomic) id toValue; // @synthesize toValue=_toValue;

- (void).cxx_destruct;
- (void)_applyWithCurrentDate:(id)arg1;
- (void)_finish;
- (BOOL)_isCompleted;
- (void)_validate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
