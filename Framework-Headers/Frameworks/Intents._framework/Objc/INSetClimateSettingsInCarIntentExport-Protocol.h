//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString, NSMeasurement, NSNumber;

@protocol INSetClimateSettingsInCarIntentExport <NSObject, JSExport>

@property (nonatomic) long long airCirculationMode;
@property (copy, nonatomic) INSpeakableString *carName;
@property (nonatomic) long long climateZone;
@property (copy, nonatomic) NSNumber *enableAirConditioner;
@property (copy, nonatomic) NSNumber *enableAutoMode;
@property (copy, nonatomic) NSNumber *enableClimateControl;
@property (copy, nonatomic) NSNumber *enableFan;
@property (copy, nonatomic) NSNumber *fanSpeedIndex;
@property (copy, nonatomic) NSNumber *fanSpeedPercentage;
@property (nonatomic) long long relativeFanSpeedSetting;
@property (nonatomic) long long relativeTemperatureSetting;
@property (copy, nonatomic) NSMeasurement *temperature;

- (id)init;
@end

