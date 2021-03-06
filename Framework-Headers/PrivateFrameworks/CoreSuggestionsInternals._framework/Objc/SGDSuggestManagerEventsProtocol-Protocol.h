//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class NSArray, NSLocale, NSString, NSURL, SGSuggestedEventLaunchInfo;

@protocol SGDSuggestManagerEventsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol>
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)eventFromUniqueId:(NSString *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
- (void)isEventCandidateForURL:(NSURL *)arg1 title:(NSString *)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)launchAppForSuggestedEventUsingLaunchInfo:(SGSuggestedEventLaunchInfo *)arg1 completion:(void (^)(SGXPCResponse *))arg2;
- (void)launchInfoForSuggestedEventWithUniqueIdentifier:(NSString *)arg1 sourceURL:(NSURL *)arg2 clientLocale:(NSLocale *)arg3 ignoreUserActivitySupport:(BOOL)arg4 ignoreMailCheck:(BOOL)arg5 completion:(void (^)(SGXPCResponse1 *))arg6;
- (void)schemaOrgToEvents:(NSArray *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
- (void)suggestionsFromURL:(NSURL *)arg1 title:(NSString *)arg2 HTMLPayload:(NSString *)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
@end

