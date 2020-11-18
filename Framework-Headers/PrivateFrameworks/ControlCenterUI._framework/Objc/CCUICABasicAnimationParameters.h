//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ControlCenterUI/CCUIAnimationParameters-Protocol.h>
#import <ControlCenterUI/NSMutableCopying-Protocol.h>

@class NSString;
@protocol CCUIAnimationTimingFunctionDescription;

@interface CCUICABasicAnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying>
{
    double _duration;
    id<CCUIAnimationTimingFunctionDescription> _timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) id<CCUIAnimationTimingFunctionDescription> timingFunction; // @synthesize timingFunction=_timingFunction;

- (void).cxx_destruct;
- (id)_initWithAnimationParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
