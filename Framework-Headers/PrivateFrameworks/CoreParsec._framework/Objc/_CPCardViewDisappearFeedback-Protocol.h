//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, _CPCardForFeedback;

@protocol _CPCardViewDisappearFeedback <NSObject>

@property (strong, nonatomic) _CPCardForFeedback *card;
@property (nonatomic) int cardDisappearEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long timestamp;

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

