//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsObserverProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsObserverProtocol-Protocol.h>

@class CSSearchableItem, NSArray, NSData, NSString;

@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol, _SGSuggestionsServiceContactsObserverProtocol, _SGSuggestionsServiceEventsObserverProtocol>
- (NSArray *)fullDownloadRequestBatch:(unsigned long long)arg1 error:(id *)arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)messagesToRefreshWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (NSArray *)messagesToRefreshWithError:(id *)arg1;
- (BOOL)prepareForRealtimeExtraction:(id *)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(void (^)(NSError *))arg1;
- (BOOL)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 error:(id *)arg3;
- (void)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (BOOL)resolveFullDownloadRequests:(NSArray *)arg1 error:(id *)arg2;
- (void)resolveFullDownloadRequests:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (NSArray *)suggestionsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 options:(unsigned long long)arg4 error:(id *)arg5;
- (void)suggestionsFromEmailContent:(NSString *)arg1 headers:(NSData *)arg2 source:(NSString *)arg3 options:(unsigned long long)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (NSArray *)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (BOOL)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 error:(id *)arg3;
- (void)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3;
@end

