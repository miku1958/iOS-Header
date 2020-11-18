//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBPayloadConfirmation, _INPBPayloadNeedsDisambiguation, _INPBPayloadNeedsValue, _INPBPayloadSuccess, _INPBPayloadUnsupported;

@protocol _INPBIntentSlotResolutionResult <NSObject>

@property (readonly, nonatomic) BOOL hasPayloadConfirmation;
@property (readonly, nonatomic) BOOL hasPayloadNeedsDisambiguation;
@property (readonly, nonatomic) BOOL hasPayloadNeedsValue;
@property (readonly, nonatomic) BOOL hasPayloadSuccess;
@property (readonly, nonatomic) BOOL hasPayloadUnsupported;
@property (nonatomic) BOOL hasType;
@property (strong, nonatomic) _INPBPayloadConfirmation *payloadConfirmation;
@property (strong, nonatomic) _INPBPayloadNeedsDisambiguation *payloadNeedsDisambiguation;
@property (strong, nonatomic) _INPBPayloadNeedsValue *payloadNeedsValue;
@property (strong, nonatomic) _INPBPayloadSuccess *payloadSuccess;
@property (strong, nonatomic) _INPBPayloadUnsupported *payloadUnsupported;
@property (nonatomic) int type;

- (int)StringAsType:(NSString *)arg1;
- (NSString *)typeAsString:(int)arg1;
@end

