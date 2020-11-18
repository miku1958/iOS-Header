//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBInteger, _INPBString;

@protocol _INPBOpenFileIntentResponse <NSObject>

@property (copy, nonatomic) NSArray *entities;
@property (readonly, nonatomic) unsigned long long entitiesCount;
@property (readonly, nonatomic) BOOL hasNumResults;
@property (readonly, nonatomic) BOOL hasQuery;
@property (nonatomic) BOOL hasSuccess;
@property (strong, nonatomic) _INPBInteger *numResults;
@property (strong, nonatomic) _INPBString *query;
@property (nonatomic) BOOL success;

+ (Class)entitiesType;
- (void)addEntities:(_INPBString *)arg1;
- (void)clearEntities;
- (_INPBString *)entitiesAtIndex:(unsigned long long)arg1;
@end

