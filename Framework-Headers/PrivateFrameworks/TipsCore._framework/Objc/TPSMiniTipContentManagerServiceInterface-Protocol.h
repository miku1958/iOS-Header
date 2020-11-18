//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAnalyticsXPCServerInterface-Protocol.h>

@class NSString;

@protocol TPSMiniTipContentManagerServiceInterface <TPSAnalyticsXPCServerInterface>
- (void)contentWithContentID:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3 completionHandler:(void (^)(id, NSArray *, long long, NSError *))arg4;
- (oneway void)hintDismissedByPerformedOutcomeForIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3;
- (oneway void)hintDismissedByUserForIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3;
- (oneway void)hintDisplayedForIdentifier:(NSString *)arg1 context:(NSString *)arg2;
- (oneway void)personalizationFailedForContentID:(NSString *)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3;
- (void)validateAndPrepareContentForDisplay:(id)arg1 bundleID:(NSString *)arg2 context:(NSString *)arg3 completionHandler:(void (^)(BOOL, id, NSError *))arg4;
@end
