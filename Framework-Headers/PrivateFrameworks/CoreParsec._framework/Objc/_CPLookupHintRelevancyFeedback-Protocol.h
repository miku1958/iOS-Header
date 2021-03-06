//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPRange;

@protocol _CPLookupHintRelevancyFeedback <NSObject>

@property (copy, nonatomic) NSString *context;
@property (nonatomic) BOOL discarded;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic) int grade;
@property (strong, nonatomic) _CPRange *hintRange;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long timestamp;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

