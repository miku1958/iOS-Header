//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPSearchViewDisappearFeedback <NSObject>

@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int viewDisappearEvent;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

