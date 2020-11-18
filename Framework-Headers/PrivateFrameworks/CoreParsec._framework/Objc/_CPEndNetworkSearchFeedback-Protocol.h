//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _CPNetworkTimingData;

@protocol _CPEndNetworkSearchFeedback <NSObject>

@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *fbq;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *parsecStatus;
@property (copy, nonatomic) NSString *partialClientIp;
@property (nonatomic) long long responseSize;
@property (nonatomic) int statusCode;
@property (nonatomic) unsigned long long timestamp;
@property (strong, nonatomic) _CPNetworkTimingData *timingData;
@property (copy, nonatomic) NSString *uuid;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

