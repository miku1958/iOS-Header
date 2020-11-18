//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPPunchoutForFeedback;

@protocol _CPMapsCardSectionEngagementFeedback <NSObject>

@property (nonatomic) int actionCardType;
@property (copy, nonatomic) NSString *cardSectionId;
@property (strong, nonatomic) _CPPunchoutForFeedback *destination;
@property (nonatomic) int feedbackType;
@property (readonly, nonatomic) BOOL hasActionCardType;
@property (readonly, nonatomic) BOOL hasCardSectionId;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasFeedbackType;
@property (readonly, nonatomic) BOOL hasResultId;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTriggerEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
