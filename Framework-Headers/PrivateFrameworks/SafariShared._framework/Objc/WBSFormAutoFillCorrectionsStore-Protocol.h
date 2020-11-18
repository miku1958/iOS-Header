//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;

@protocol WBSFormAutoFillCorrectionsStore <NSObject>
- (void)getClassificationForFieldWithFingerprint:(NSString *)arg1 onDomain:(NSString *)arg2 completionHandler:(void (^)(NSString *))arg3;
- (void)getLastCrowdsourcedCorrectionsRetrievalURLStringWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)getLastWhitelistRetrievalURLStringWithCompletionHandler:(void (^)(NSString *))arg1;
- (void)getWhitelistStatusForDomain:(NSString *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)removeAllLocalClassificationsWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)removeLocalClassificationsForDomain:(NSString *)arg1 recordedOnOrAfter:(NSDate *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)replaceCrowdsourcedCorrectionSetsWithCorrectionSets:(NSArray *)arg1 retrievalURLString:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)replaceDomainWhitelistWithDomains:(NSArray *)arg1 retrievalURLString:(NSString *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)setCrowdsourcedClassification:(NSString *)arg1 forFieldWithFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
- (void)setDomain:(NSString *)arg1 isWhitelistedForFeedback:(BOOL)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)setLastCrowdsourcedCorrectionsRetrievalURLString:(NSString *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)setLastWhitelistRetrievalURLString:(NSString *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)setLocalClassification:(NSString *)arg1 forFieldWithFingerprint:(NSString *)arg2 onDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL))arg4;
@end

