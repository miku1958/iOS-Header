//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBString;

@protocol _INPBMoveFileIntentResponse <NSObject>

@property (strong, nonatomic) _INPBString *destinationName;
@property (copy, nonatomic) NSArray *entityNames;
@property (readonly, nonatomic) unsigned long long entityNamesCount;
@property (readonly, nonatomic) int *entityTypes;
@property (readonly, nonatomic) unsigned long long entityTypesCount;
@property (readonly, nonatomic) BOOL hasDestinationName;
@property (nonatomic) BOOL hasOverwrite;
@property (readonly, nonatomic) BOOL hasSourceName;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL overwrite;
@property (strong, nonatomic) _INPBString *sourceName;
@property (nonatomic) BOOL success;

+ (Class)entityNameType;
- (int)StringAsEntityTypes:(NSString *)arg1;
- (void)addEntityName:(_INPBString *)arg1;
- (void)addEntityType:(int)arg1;
- (void)clearEntityNames;
- (void)clearEntityTypes;
- (_INPBString *)entityNameAtIndex:(unsigned long long)arg1;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (NSString *)entityTypesAsString:(int)arg1;
- (void)setEntityTypes:(int *)arg1 count:(unsigned long long)arg2;
@end

