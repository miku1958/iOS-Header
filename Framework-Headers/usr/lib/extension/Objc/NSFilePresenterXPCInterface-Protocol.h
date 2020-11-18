//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSFileCoordinationDebugInfoXPCInteface-Protocol.h>

@class NSSet, NSString, NSURLPromisePair;

@protocol NSFilePresenterXPCInterface <NSFileCoordinationDebugInfoXPCInteface>
- (void)accommodateDeletionOfSubitemAtURL:(NSURLPromisePair *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (oneway void)logSuspensionWarning;
- (oneway void)observeChangeOfUbiquityAttributes:(NSSet *)arg1;
- (oneway void)observeChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeDisconnection;
- (oneway void)observeMoveToURL:(NSURLPromisePair *)arg1 withSubitemURL:(NSURLPromisePair *)arg2 byWriterWithPurposeID:(id)arg3;
- (oneway void)observePresenterChange:(BOOL)arg1 forSubitemAtURL:(NSURLPromisePair *)arg2;
- (oneway void)observeReconnection;
- (oneway void)observeSharingChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeUbiquityChangeWithSubitemURL:(NSURLPromisePair *)arg1;
- (oneway void)observeVersionChangeOfKind:(NSString *)arg1 toItemAtURL:(NSURLPromisePair *)arg2 withClientID:(NSString *)arg3 name:(NSString *)arg4;
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(void (^)(void))arg2;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(NSURLPromisePair *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)saveChangesWithCompletionHandler:(void (^)(NSError *))arg1;
- (oneway void)setProviderPurposeIdentifier:(NSString *)arg1;
- (oneway void)updateLastEventID:(unsigned long long)arg1;
@end

