//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKDimension : NSObject
{
    _HKFactorization *_reduction;
    long long _reductionToken;
}

+ (id)dimensionFromString:(id)arg1;
- (void).cxx_destruct;
- (id)_baseDimensions;
- (id)description;
- (id)reduction;

@end

