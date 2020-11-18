//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VoiceShortcutClient/NSObject-Protocol.h>

@class NSArray, NSString, VCVoiceShortcut, WFLWorkflow;

@protocol VCVoiceShortcutManagerXPCInterface <NSObject>
- (void)addVoiceShortcut:(VCVoiceShortcut *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)deleteVoiceShortcutWithIdentifier:(NSString *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)describeSyncStateIncludingDeleted:(BOOL)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)getCloudKitAccountStatusWithCompletion:(void (^)(unsigned long long, BOOL, NSError *))arg1;
- (void)getNumberOfVoiceShortcutsWithCompletion:(void (^)(unsigned long long, NSError *))arg1;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getVoiceShortcutWithIdentifier:(NSString *)arg1 completion:(void (^)(VCVoiceShortcut *, NSError *))arg2;
- (void)getVoiceShortcutWithPhrase:(NSString *)arg1 completion:(void (^)(VCVoiceShortcut *, NSError *))arg2;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)getVoiceShortcutsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)requestDataMigration:(void (^)(BOOL, NSError *))arg1;
- (void)requestSyncForServiceClassName:(NSString *)arg1 forceReset:(BOOL)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2 inDomain:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)setShortcutSuggestions:(NSArray *)arg1 forAppWithBundleIdentifier:(NSString *)arg2;
- (void)updateVoiceShortcutWithIdentifier:(NSString *)arg1 phrase:(NSString *)arg2 workflow:(WFLWorkflow *)arg3 completion:(void (^)(VCVoiceShortcut *, NSError *))arg4;
- (void)validateVoiceShortcutPhrases:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

