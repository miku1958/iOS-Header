//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBReservation, _INPBSeat, _INPBTicketedEvent;

@protocol _INPBTicketedEventReservation <NSObject>

@property (strong, nonatomic) _INPBTicketedEvent *event;
@property (readonly, nonatomic) BOOL hasEvent;
@property (readonly, nonatomic) BOOL hasReservation;
@property (readonly, nonatomic) BOOL hasReservedSeat;
@property (strong, nonatomic) _INPBReservation *reservation;
@property (strong, nonatomic) _INPBSeat *reservedSeat;

@end

