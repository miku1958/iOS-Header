//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@interface NSURL (FCAdditions)
+ (id)fc_NewsURLForArticleID:(id)arg1 hardPaywall:(BOOL)arg2;
+ (id)fc_NewsURLForTagID:(id)arg1;
+ (id)fc_NewsURLWithPathComponents:(id)arg1;
+ (id)fc_URLWithResourceID:(id)arg1;
+ (id)fc_safeURLWithString:(id)arg1;
- (BOOL)_isFeldsparOldArticleURL;
- (BOOL)_isFeldsparOldChannelURL;
- (BOOL)_isFeldsparOldTopicURL;
- (id)fc_NewsArticleID;
- (id)fc_NewsArticleIDs;
- (id)fc_NewsIssueID;
- (id)fc_URLByAddingQueryItem:(id)arg1;
- (id)fc_URLByDeletingFragment;
- (id)fc_URLByDeletingQuery;
- (id)fc_feldsparTagID;
- (BOOL)fc_isEqualToURL:(id)arg1;
- (BOOL)fc_isFeldsparInterstitialPreviewURL;
- (BOOL)fc_isHTTPScheme;
- (BOOL)fc_isHardPaywallNewsArticleURL:(out id *)arg1;
- (BOOL)fc_isNewsArticleURL;
- (BOOL)fc_isNewsIssueURL;
- (BOOL)fc_isNewsTagURL;
- (BOOL)fc_isNewsURL;
- (BOOL)fc_isResourceURL;
- (BOOL)fc_isStoreURL;
- (BOOL)fc_isWebArchiveURL;
- (id)fc_resourceID;
@end
