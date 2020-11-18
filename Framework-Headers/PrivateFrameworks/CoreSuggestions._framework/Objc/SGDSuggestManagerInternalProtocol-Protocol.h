//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerInternalHarvestProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSString, SGRecordId;

@protocol SGDSuggestManagerInternalProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerInternalHarvestProtocol>
- (void)addInteractions:(NSArray *)arg1 bundleId:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)addSearchableItems:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)daemonExitWithCompletion:(void (^)(NSError *))arg1;
- (void)drainQueueCompletelyWithCompletion:(void (^)(NSError *))arg1;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(NSNumber *, NSError *))arg2;
- (void)eventFromRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGEvent *, NSError *))arg2;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)eventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)eventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (void)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)removeAllStoredPseudoContactsWithCompletion:(void (^)(NSError *))arg1;
- (void)resetConfirmationAndRejectionHistory:(void (^)(NSError *))arg1;
- (void)sendRTCLogsWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)sleepWithCompletion:(void (^)(NSError *))arg1;
- (void)suggestionsFromRFC822Data:(NSData *)arg1 source:(NSString *)arg2 options:(unsigned long long)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
@end

