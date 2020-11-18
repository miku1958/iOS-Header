//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBInteger, _INPBIntentMetadata;

@protocol _INPBSetSeatSettingsInCarIntent <NSObject>

@property (strong, nonatomic) _INPBDataString *carName;
@property (nonatomic) BOOL enableCooling;
@property (nonatomic) BOOL enableHeating;
@property (nonatomic) BOOL enableMassage;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasEnableCooling;
@property (nonatomic) BOOL hasEnableHeating;
@property (nonatomic) BOOL hasEnableMassage;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasLevel;
@property (nonatomic) BOOL hasRelativeLevelSetting;
@property (nonatomic) BOOL hasSeat;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (strong, nonatomic) _INPBInteger *level;
@property (nonatomic) int relativeLevelSetting;
@property (nonatomic) int seat;

- (int)StringAsRelativeLevelSetting:(NSString *)arg1;
- (int)StringAsSeat:(NSString *)arg1;
- (NSString *)relativeLevelSettingAsString:(int)arg1;
- (NSString *)seatAsString:(int)arg1;
@end

