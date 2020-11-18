//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPCustomFeedback <NSObject>

@property (nonatomic) int feedbackType;
@property (readonly, nonatomic) BOOL hasFeedbackType;
@property (readonly, nonatomic) BOOL hasJsonFeedback;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSData *jsonFeedback;
@property (nonatomic) unsigned long long timestamp;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

