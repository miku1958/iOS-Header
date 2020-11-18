//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPResultSectionForFeedback;

@protocol _CPVisibleSectionHeaderFeedback <NSObject>

@property (readonly, nonatomic) BOOL hasHeaderType;
@property (readonly, nonatomic) BOOL hasSection;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (nonatomic) int headerType;
@property (readonly, nonatomic) NSData *jsonData;
@property (strong, nonatomic) _CPResultSectionForFeedback *section;
@property (nonatomic) unsigned long long timestamp;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
