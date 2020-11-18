//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class CSSearchableItem, NSArray, NSString;

@protocol SGDSuggestManagerMessagesProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(SGXPCResponse2 *))arg4;
- (void)harvestedSuggestionsFromMessages:(NSArray *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(SGXPCResponse2 *))arg4;
- (void)suggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(SGXPCResponse3 *))arg3;
@end

