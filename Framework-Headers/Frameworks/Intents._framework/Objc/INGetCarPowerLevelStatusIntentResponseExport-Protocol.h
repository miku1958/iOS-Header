//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSMeasurement, NSNumber;

@protocol INGetCarPowerLevelStatusIntentResponseExport <NSObject, JSExport>

@property (copy, nonatomic) NSNumber *chargePercentRemaining;
@property (copy, nonatomic) NSNumber *charging;
@property (readonly, nonatomic) long long code;
@property (copy, nonatomic) NSMeasurement *distanceRemaining;
@property (copy, nonatomic) NSNumber *fuelPercentRemaining;
@property (copy, nonatomic) NSNumber *minutesToFull;

@end

