//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol WLKConnectionServerProtocol <NSObject>
- (void)deletePlaybackActivityWithIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2;
- (void)fetchApplications:(void (^)(NSDictionary *))arg1;
- (void)fetchConfiguration:(void (^)(WLKServerConfigurationResponse *))arg1;
- (void)fetchConfigurationCache:(void (^)(WLKServerConfigurationResponse *))arg1;
- (void)fetchSettings:(void (^)(NSDictionary *))arg1;
- (void)invalidateConfiguration:(void (^)(void))arg1;
- (void)ping;
- (void)postSettings:(NSDictionary *)arg1 replyHandler:(void (^)(BOOL))arg2;
- (void)readSettingsStore:(void (^)(NSDictionary *))arg1;
- (void)requestConsentForBundleID:(NSString *)arg1 forceAuth:(BOOL)arg2 replyHandler:(void (^)(BOOL))arg3;
- (void)requestPlaybackSummary:(void (^)(WLKPlaybackSummary *))arg1;
- (void)requestPlaybackSummaryForID:(NSNumber *)arg1 completion:(void (^)(WLKPlaybackSummary *))arg2;
- (void)setNextConfigurationEK:(NSString *)arg1;
- (void)writeSettingsStore:(NSDictionary *)arg1 replyHandler:(void (^)(BOOL))arg2;
@end

