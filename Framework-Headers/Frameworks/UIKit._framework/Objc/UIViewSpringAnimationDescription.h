//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimationDescription : NSObject
{
    BOOL _usesDampingRatioAndResponse;
    double _tension;
    double _friction;
    CDStruct_6c8af1d9 _parameters;
}

@property (nonatomic) double friction; // @synthesize friction=_friction;
@property (nonatomic) CDStruct_6c8af1d9 parameters; // @synthesize parameters=_parameters;
@property (nonatomic) double tension; // @synthesize tension=_tension;
@property (nonatomic) BOOL usesDampingRatioAndResponse; // @synthesize usesDampingRatioAndResponse=_usesDampingRatioAndResponse;

+ (id)descriptionWithSpringAnimationParameters:(CDStruct_6c8af1d9)arg1;
+ (id)descriptionWithTension:(double)arg1 friction:(double)arg2;

@end

