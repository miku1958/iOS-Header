//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSArray, _INPBReservationWrapper;

@protocol _INPBGetReservationDetailsIntentResponse <NSObject>

@property (copy, nonatomic) NSArray *reservations;
@property (readonly, nonatomic) unsigned long long reservationsCount;

+ (Class)reservationsType;
- (void)addReservations:(_INPBReservationWrapper *)arg1;
- (void)clearReservations;
- (_INPBReservationWrapper *)reservationsAtIndex:(unsigned long long)arg1;
@end

