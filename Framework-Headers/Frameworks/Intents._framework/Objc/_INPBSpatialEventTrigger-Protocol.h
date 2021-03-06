//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, NSString, _INPBLocationValue;

@protocol _INPBSpatialEventTrigger <NSObject>

@property (nonatomic) int event;
@property (nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMobileSpace;
@property (strong, nonatomic) _INPBLocationValue *location;
@property (nonatomic) int mobileSpace;
@property (copy, nonatomic) NSArray *suggestedValues;
@property (readonly, nonatomic) unsigned long long suggestedValuesCount;

+ (Class)suggestedValuesType;
- (int)StringAsEvent:(NSString *)arg1;
- (int)StringAsMobileSpace:(NSString *)arg1;
- (void)addSuggestedValues:(_INPBLocationValue *)arg1;
- (void)clearSuggestedValues;
- (NSString *)eventAsString:(int)arg1;
- (NSString *)mobileSpaceAsString:(int)arg1;
- (_INPBLocationValue *)suggestedValuesAtIndex:(unsigned long long)arg1;
@end

