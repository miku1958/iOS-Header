//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocationValue;

@protocol _INPBSpatialEventTrigger <NSObject>

@property (nonatomic) int event;
@property (nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) BOOL hasLocation;
@property (strong, nonatomic) _INPBLocationValue *location;

- (int)StringAsEvent:(NSString *)arg1;
- (NSString *)eventAsString:(int)arg1;
@end

