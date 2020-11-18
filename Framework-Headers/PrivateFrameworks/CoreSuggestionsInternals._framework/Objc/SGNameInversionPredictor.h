//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SGNameInversionPredictor : NSObject
{
    NSDictionary *_tradToTrie;
    NSDictionary *_tradToInversionRate;
    double _confidenceThreshold;
}

+ (id)sharedInstance;
+ (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2;
- (void).cxx_destruct;
- (double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3;
- (id)init;
- (double)inversionRateForNamingTradition:(id)arg1;
- (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2;
- (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3;

@end
