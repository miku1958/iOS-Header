//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPCardSectionForFeedback, _CPPunchoutForFeedback;

@protocol _CPCardSectionEngagementFeedback <NSObject>

@property (nonatomic) int actionCardType;
@property (nonatomic) int actionTarget;
@property (strong, nonatomic) _CPCardSectionForFeedback *cardSection;
@property (copy, nonatomic) NSString *cardSectionId;
@property (strong, nonatomic) _CPPunchoutForFeedback *destination;
@property (nonatomic) BOOL destinationWasPARPunchout;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *parPunchoutActionTarget;
@property (copy, nonatomic) NSString *resultId;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

