//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBContactHandle <NSObject>

@property (nonatomic) int emergencyType;
@property (nonatomic) BOOL hasEmergencyType;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasSuggested;
@property (nonatomic) BOOL hasType;
@property (readonly, nonatomic) BOOL hasValue;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL suggested;
@property (nonatomic) int type;
@property (copy, nonatomic) NSString *value;

- (int)StringAsEmergencyType:(NSString *)arg1;
- (int)StringAsType:(NSString *)arg1;
- (NSString *)emergencyTypeAsString:(int)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

