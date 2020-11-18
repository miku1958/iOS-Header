//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDouble, _INPBInteger, _INPBIntentMetadata, _INPBString;

@protocol _INPBSetRadioStationIntent <NSObject>

@property (strong, nonatomic) _INPBString *channel;
@property (strong, nonatomic) _INPBDouble *frequency;
@property (readonly, nonatomic) BOOL hasChannel;
@property (readonly, nonatomic) BOOL hasFrequency;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasPresetNumber;
@property (nonatomic) BOOL hasRadioType;
@property (readonly, nonatomic) BOOL hasStationName;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (strong, nonatomic) _INPBInteger *presetNumber;
@property (nonatomic) int radioType;
@property (strong, nonatomic) _INPBString *stationName;

- (int)StringAsRadioType:(NSString *)arg1;
- (NSString *)radioTypeAsString:(int)arg1;
@end
