//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBHomeEntity, _INPBHomeUserTaskResponse;

@protocol _INPBHomeEntityResponse <NSObject>

@property (strong, nonatomic) _INPBHomeEntity *entity;
@property (readonly, nonatomic) BOOL hasEntity;
@property (copy, nonatomic) NSArray *taskResponses;
@property (readonly, nonatomic) unsigned long long taskResponsesCount;

+ (Class)taskResponsesType;
- (void)addTaskResponses:(_INPBHomeUserTaskResponse *)arg1;
- (void)clearTaskResponses;
- (_INPBHomeUserTaskResponse *)taskResponsesAtIndex:(unsigned long long)arg1;
@end

