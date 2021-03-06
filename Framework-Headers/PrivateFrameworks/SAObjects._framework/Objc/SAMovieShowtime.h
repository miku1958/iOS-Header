//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString, SACalendar, SAUIAppPunchOut;

@interface SAMovieShowtime : AceObject <SAAceSerializable>
{
}

@property (strong, nonatomic) SAUIAppPunchOut *buyTicketsPunchout;
@property (copy, nonatomic) NSNumber *childTicketQuantity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL is3d;
@property (nonatomic) BOOL isImax;
@property (copy, nonatomic) NSNumber *regularTicketQuantity;
@property (copy, nonatomic) NSNumber *seniorTicketQuantity;
@property (strong, nonatomic) SACalendar *showtime;
@property (readonly) Class superclass;

+ (id)showtime;
+ (id)showtimeWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

