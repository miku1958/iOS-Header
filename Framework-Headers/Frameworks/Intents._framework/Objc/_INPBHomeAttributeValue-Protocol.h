//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBHomeAttributeValue <NSObject>

@property (nonatomic) BOOL booleanValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasBooleanValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasValueType;
@property (nonatomic) long long integerValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) int valueType;

- (int)StringAsValueType:(NSString *)arg1;
- (NSString *)valueTypeAsString:(int)arg1;
@end

