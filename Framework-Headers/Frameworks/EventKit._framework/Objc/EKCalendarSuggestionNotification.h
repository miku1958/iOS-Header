//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKCalendarResourceChangeNotification.h>

@class NSString, SGEvent;

@interface EKCalendarSuggestionNotification : EKCalendarResourceChangeNotification
{
    SGEvent *_suggestedEvent;
    NSString *_originAppName;
}

@property (readonly, nonatomic) NSString *originAppName;
@property (readonly, nonatomic) SGEvent *suggestedEvent;

+ (id)_queue;
- (void).cxx_destruct;
- (Class)_SGSuggestionsServiceClass;
- (void)updateSuggestedEventWithEventStore:(id)arg1;

@end
