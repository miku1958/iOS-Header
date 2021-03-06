//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBString;

@protocol _INPBCreateFileIntentResponse <NSObject>

@property (strong, nonatomic) _INPBString *destinationName;
@property (strong, nonatomic) _INPBString *entityName;
@property (nonatomic) int entityType;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) BOOL hasEntityType;
@property (nonatomic) BOOL hasOverwrite;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL overwrite;
@property (nonatomic) BOOL success;

- (int)StringAsEntityType:(NSString *)arg1;
- (NSString *)entityTypeAsString:(int)arg1;
@end

