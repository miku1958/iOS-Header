//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMPricingModel : FATObject
{
    NSNumber *_gnomeActive;
    NSNumber *_gnomeWarmingPeriod;
    NSNumber *_pricingModelStart;
}

@property (strong, nonatomic) NSNumber *gnomeActive; // @synthesize gnomeActive=_gnomeActive;
@property (strong, nonatomic) NSNumber *gnomeWarmingPeriod; // @synthesize gnomeWarmingPeriod=_gnomeWarmingPeriod;
@property (strong, nonatomic) NSNumber *pricingModelStart; // @synthesize pricingModelStart=_pricingModelStart;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end
