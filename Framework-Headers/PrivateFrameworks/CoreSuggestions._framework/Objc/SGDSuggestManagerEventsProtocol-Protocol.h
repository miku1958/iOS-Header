//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol SGDSuggestManagerEventsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol>
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)eventFromUniqueId:(NSString *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
- (void)isEventCandidateForURL:(NSURL *)arg1 title:(NSString *)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)schemaOrgToEvents:(NSArray *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
- (void)suggestionsFromURL:(NSURL *)arg1 title:(NSString *)arg2 HTMLPayload:(NSString *)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
@end

