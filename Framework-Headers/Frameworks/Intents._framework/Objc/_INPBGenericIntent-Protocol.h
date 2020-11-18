//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBProperty;

@protocol _INPBGenericIntent <NSObject>

@property (copy, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (readonly, nonatomic) BOOL hasVerb;
@property (strong, nonatomic) _INPBIntentMetadata *metadata;
@property (copy, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) unsigned long long parametersCount;
@property (copy, nonatomic) NSString *verb;

+ (Class)parametersType;
- (void)addParameters:(_INPBProperty *)arg1;
- (void)clearParameters;
- (_INPBProperty *)parametersAtIndex:(unsigned long long)arg1;
@end
