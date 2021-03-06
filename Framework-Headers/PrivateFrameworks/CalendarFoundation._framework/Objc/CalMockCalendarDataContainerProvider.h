//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CalCalendarDataContainerProvider-Protocol.h>

@class NSString, NSURL;

@interface CalMockCalendarDataContainerProvider : NSObject <CalCalendarDataContainerProvider>
{
    NSURL *_calendarDataContainerURL;
}

@property (strong, nonatomic) NSURL *calendarDataContainerURL; // @synthesize calendarDataContainerURL=_calendarDataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)containerForPersonaIdentifier:(id)arg1;

@end

