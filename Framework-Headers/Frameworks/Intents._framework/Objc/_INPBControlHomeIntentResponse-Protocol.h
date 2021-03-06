//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBHomeEntityResponse;

@protocol _INPBControlHomeIntentResponse <NSObject>

@property (copy, nonatomic) NSArray *entityResponses;
@property (readonly, nonatomic) unsigned long long entityResponsesCount;

+ (Class)entityResponsesType;
- (void)addEntityResponses:(_INPBHomeEntityResponse *)arg1;
- (void)clearEntityResponses;
- (_INPBHomeEntityResponse *)entityResponsesAtIndex:(unsigned long long)arg1;
@end

