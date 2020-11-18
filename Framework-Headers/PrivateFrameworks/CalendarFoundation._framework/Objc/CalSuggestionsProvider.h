//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SGSuggestionsServiceEventsProtocol;

@interface CalSuggestionsProvider : NSObject
{
    BOOL _suggestionsFrameworkAvailable;
    NSObject<SGSuggestionsServiceEventsProtocol> *_service;
}

@property (strong, nonatomic) NSObject<SGSuggestionsServiceEventsProtocol> *service; // @synthesize service=_service;
@property (nonatomic) BOOL suggestionsFrameworkAvailable; // @synthesize suggestionsFrameworkAvailable=_suggestionsFrameworkAvailable;

+ (id)defaultProvider;
- (void).cxx_destruct;
- (void)_loadSuggestionsFramework;
- (void)confirmEventWithSuggestionID:(id)arg1;
- (void)confirmSGEventWithRecordID:(id)arg1;
- (BOOL)eventsFoundInMailEnabled;
- (id)fakeSGRecordID;
- (id)init;
- (void)rejectSGEventWithRecordID:(id)arg1;
- (id)senderForEventWithSuggestionID:(id)arg1;
- (id)sgEventFromUniqueID:(id)arg1 error:(id *)arg2;
- (id)sgRecordIDForEventWithSuggestionID:(id)arg1 error:(id *)arg2;

@end

