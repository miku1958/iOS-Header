//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface PKActivityEvent : NSObject
{
    BOOL _unread;
    NSString *_eventType;
    NSString *_identifier;
    NSDate *_date;
}

@property (readonly, copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic, getter=isUnread) BOOL unread; // @synthesize unread=_unread;

+ (id)eventsWithTransactions:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 date:(id)arg2 unread:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToActivityEvent:(id)arg1;

@end

