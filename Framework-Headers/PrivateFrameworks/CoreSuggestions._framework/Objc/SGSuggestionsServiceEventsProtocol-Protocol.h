//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>

@class NSString, SGEvent;

@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol>
- (SGEvent *)eventFromUniqueId:(NSString *)arg1 error:(id *)arg2;
- (void)eventFromUniqueId:(NSString *)arg1 withCompletion:(void (^)(SGEvent *, NSError *))arg2;
@end

