//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString;

@protocol _INPBSetBinarySettingIntentResponse <NSObject>

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (nonatomic) BOOL hasOldValue;
@property (nonatomic) BOOL hasUpdatedValue;
@property (nonatomic) int oldValue;
@property (nonatomic) int updatedValue;

- (int)StringAsOldValue:(NSString *)arg1;
- (int)StringAsUpdatedValue:(NSString *)arg1;
- (NSString *)oldValueAsString:(int)arg1;
- (NSString *)updatedValueAsString:(int)arg1;
@end

