//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ESDaemonSupport/ESDClientDelegate.h>

#import <ESDaemonSupport/DAEventsCalendarAvailabilityResponseConsumer-Protocol.h>

@class NSArray, NSDate, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ESDClientCalendarAvailabilityResponseDelegate : ESDClientDelegate <DAEventsCalendarAvailabilityResponseConsumer>
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_ignoredEventID;
    NSArray *_addresses;
    id _requestID;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)calendarAvailabilityRequestFinishedWithError:(id)arg1;
- (void)calendarAvailabilityRequestReturnedResults:(id)arg1;
- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (id)initWithAccountID:(id)arg1 client:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 ignoredEventID:(id)arg5 addresses:(id)arg6;
- (void)performRequest;

@end

