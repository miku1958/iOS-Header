//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class NSString, RWIProtocolPageCookie;

@protocol RWIProtocolPageDomainHandler <NSObject>

@optional
- (void)deleteCookieWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 cookieName:(NSString *)arg3 url:(NSString *)arg4;
- (void)disableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)enableWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2;
- (void)getCookiesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2;
- (void)getResourceContentWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *, BOOL))arg2 frameId:(NSString *)arg3 url:(NSString *)arg4;
- (void)getResourceTreeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(RWIProtocolPageFrameResourceTree *))arg2;
- (void)navigateWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 url:(NSString *)arg3;
- (void)overrideSettingWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 setting:(long long)arg3 value:(BOOL *)arg4;
- (void)overrideUserAgentWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 value:(id *)arg3;
- (void)reloadWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 ignoreCache:(BOOL *)arg3 revalidateAllResources:(BOOL *)arg4;
- (void)searchInResourceWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 frameId:(NSString *)arg3 url:(NSString *)arg4 query:(NSString *)arg5 caseSensitive:(BOOL *)arg6 isRegex:(BOOL *)arg7 requestId:(id *)arg8;
- (void)searchInResourcesWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSArray *))arg2 text:(NSString *)arg3 caseSensitive:(BOOL *)arg4 isRegex:(BOOL *)arg5;
- (void)setBootstrapScriptWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 source:(id *)arg3;
- (void)setCookieWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 cookie:(RWIProtocolPageCookie *)arg3;
- (void)setEmulatedMediaWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 media:(NSString *)arg3;
- (void)setShowPaintRectsWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 result:(BOOL)arg3;
- (void)setShowRulersWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(void))arg2 result:(BOOL)arg3;
- (void)snapshotNodeWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 nodeId:(int)arg3;
- (void)snapshotRectWithErrorCallback:(void (^)(NSString *))arg1 successCallback:(void (^)(NSString *))arg2 x:(int)arg3 y:(int)arg4 width:(int)arg5 height:(int)arg6 coordinateSystem:(long long)arg7;
@end

