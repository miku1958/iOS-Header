//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBVolumeValue;

@protocol _INPBVolume <NSObject>

@property (copy, nonatomic) NSArray *values;
@property (readonly, nonatomic) unsigned long long valuesCount;

+ (Class)valueType;
- (void)addValue:(_INPBVolumeValue *)arg1;
- (void)clearValues;
- (_INPBVolumeValue *)valueAtIndex:(unsigned long long)arg1;
@end

