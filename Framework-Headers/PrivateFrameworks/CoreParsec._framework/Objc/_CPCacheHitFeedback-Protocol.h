//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPCacheHitFeedback <NSObject>

@property (readonly, nonatomic) BOOL hasInput;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasTriggerEvent;
@property (readonly, nonatomic) BOOL hasUuid;
@property (copy, nonatomic) NSString *input;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (copy, nonatomic) NSString *uuid;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

