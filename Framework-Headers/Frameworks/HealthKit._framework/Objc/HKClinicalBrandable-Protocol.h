//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class HKClinicalBrand, NSString;

@protocol HKClinicalBrandable <NSObject>

@property (readonly, copy, nonatomic) HKClinicalBrand *brand;
@property (readonly, nonatomic, getter=hasMultipleLocations) BOOL multiple;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;


@optional
@end

