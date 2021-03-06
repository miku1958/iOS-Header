//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBNumericSettingValue, _INPBSettingMetadata;

@protocol _INPBGetSettingResponseData <NSObject>

@property (nonatomic) int binaryValue;
@property (nonatomic) int boundedValue;
@property (nonatomic) BOOL hasBinaryValue;
@property (nonatomic) BOOL hasBoundedValue;
@property (readonly, nonatomic) BOOL hasLabeledValue;
@property (readonly, nonatomic) BOOL hasNumericValue;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (copy, nonatomic) NSString *labeledValue;
@property (strong, nonatomic) _INPBNumericSettingValue *numericValue;
@property (strong, nonatomic) _INPBSettingMetadata *settingMetadata;

- (int)StringAsBinaryValue:(NSString *)arg1;
- (int)StringAsBoundedValue:(NSString *)arg1;
- (NSString *)binaryValueAsString:(int)arg1;
- (NSString *)boundedValueAsString:(int)arg1;
@end

