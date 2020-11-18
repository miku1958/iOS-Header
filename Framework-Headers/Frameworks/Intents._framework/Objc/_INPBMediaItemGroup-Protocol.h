//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBMediaItemValue;

@protocol _INPBMediaItemGroup <NSObject>

@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) unsigned long long valuesCount;

+ (Class)valuesType;
- (void)addValues:(_INPBMediaItemValue *)arg1;
- (void)clearValues;
- (_INPBMediaItemValue *)valuesAtIndex:(unsigned long long)arg1;
@end
