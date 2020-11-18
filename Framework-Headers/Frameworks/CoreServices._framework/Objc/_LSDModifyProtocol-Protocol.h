//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class LSRegistrationInfo, NSData, NSDictionary, NSString, NSURL;

@protocol _LSDModifyProtocol
- (void)garbageCollectDatabaseWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)installApplication:(NSString *)arg1 atURL:(NSURL *)arg2 withOptions:(NSDictionary *)arg3 installType:(unsigned long long)arg4 reply:(void (^)(NSArray *, NSError *))arg5;
- (void)rebuildApplicationDatabasesForSystem:(BOOL)arg1 internal:(BOOL)arg2 user:(BOOL)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)refreshContentInFrameworkAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)registerContainerURL:(NSURL *)arg1 completionHandler:(void (^)(unsigned int, NSError *))arg2;
- (void)registerExtensionPoint:(NSString *)arg1 platform:(unsigned int)arg2 withInfo:(NSDictionary *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)registerItemInfo:(LSRegistrationInfo *)arg1 alias:(NSData *)arg2 diskImageAlias:(NSData *)arg3 bundleURL:(NSURL *)arg4 installationPlist:(NSDictionary *)arg5 completionHandler:(void (^)(BOOL, unsigned int, NSArray *, BOOL, NSError *))arg6;
- (void)relaxApplicationTypeRequirements:(BOOL)arg1 forBundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)removeAllHandlersWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)removeHandlerForContentType:(NSString *)arg1 roles:(unsigned int)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)removeHandlerForURLScheme:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)resetServerStoreWithCompletionHandler:(void (^)(BOOL, NSError *))arg1;
- (void)setDatabaseIsSeeded:(BOOL)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)setHandler:(NSString *)arg1 version:(struct LSVersionNumber)arg2 forURLScheme:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)setHandler:(NSString *)arg1 version:(struct LSVersionNumber)arg2 roles:(unsigned int)arg3 forContentType:(NSString *)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (void)setPreferenceValue:(id)arg1 forKey:(NSString *)arg2 forApplicationAtURL:(NSURL *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)synchronizeWithMobileInstallation;
- (void)uninstallApplication:(NSString *)arg1 withOptions:(NSDictionary *)arg2 uninstallType:(unsigned long long)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)unregisterApplicationAtURL:(NSURL *)arg1 reply:(void (^)(NSError *))arg2;
- (void)unregisterBundleUnit:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)unregisterExtensionPoint:(NSString *)arg1 platform:(unsigned int)arg2 withVersion:(NSString *)arg3 completionHandler:(void (^)(BOOL, NSError *))arg4;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(void (^)(NSData *, NSError *))arg2;
- (void)updateRecordForApp:(NSString *)arg1 withSINF:(NSDictionary *)arg2 iTunesMetadata:(NSDictionary *)arg3 placeholderMetadata:(NSDictionary *)arg4 sendNotification:(int)arg5 completionHandler:(void (^)(BOOL, NSError *))arg6;
@end
