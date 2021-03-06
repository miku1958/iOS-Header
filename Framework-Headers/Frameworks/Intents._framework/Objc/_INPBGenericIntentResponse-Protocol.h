//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBIntentMetadata, _INPBProperty;

@protocol _INPBGenericIntentResponse <NSObject>

@property (readonly, nonatomic) BOOL hasMetadata;
@property (strong, nonatomic) _INPBIntentMetadata *metadata;
@property (copy, nonatomic) NSArray *properties;
@property (readonly, nonatomic) unsigned long long propertiesCount;

+ (Class)propertiesType;
- (void)addProperties:(_INPBProperty *)arg1;
- (void)clearProperties;
- (_INPBProperty *)propertiesAtIndex:(unsigned long long)arg1;
@end

