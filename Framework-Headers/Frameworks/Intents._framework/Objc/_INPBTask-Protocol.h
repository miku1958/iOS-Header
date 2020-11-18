//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTime, _INPBSpatialEventTrigger, _INPBTemporalEventTrigger;

@protocol _INPBTask <NSObject>

@property (strong, nonatomic) _INPBDateTime *createdDateTime;
@property (readonly, nonatomic) BOOL hasCreatedDateTime;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasModifiedDateTime;
@property (readonly, nonatomic) BOOL hasSpatialEventTrigger;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTaskType;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *identifier;
@property (strong, nonatomic) _INPBDateTime *modifiedDateTime;
@property (strong, nonatomic) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic) int taskType;
@property (strong, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (strong, nonatomic) _INPBDataString *title;

- (int)StringAsStatus:(NSString *)arg1;
- (int)StringAsTaskType:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
- (NSString *)taskTypeAsString:(int)arg1;
@end

