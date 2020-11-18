//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/UITimingCurveProvider-Protocol.h>

@class UICubicTimingParameters, UISpringTimingParameters;

@interface PKDashboardPresentationTimingCurveProvider : NSObject <UITimingCurveProvider>
{
    double _fractionComplete;
    unsigned long long _type;
}

@property (readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters;
@property (nonatomic) double fractionComplete; // @synthesize fractionComplete=_fractionComplete;
@property (readonly, nonatomic) UISpringTimingParameters *springTimingParameters;
@property (readonly, nonatomic) long long timingCurveType;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

