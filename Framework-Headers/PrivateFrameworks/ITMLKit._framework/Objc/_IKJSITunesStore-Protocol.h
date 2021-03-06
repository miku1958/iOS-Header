//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSITunesStore-Protocol.h>
#import <ITMLKit/JSExport-Protocol.h>

@class JSValue, NSArray, NSDictionary, NSString;

@protocol _IKJSITunesStore <IKJSITunesStore, JSExport>

@property (readonly, nonatomic) NSString *DSID;
@property (readonly, nonatomic) NSDictionary *accountInfo;
@property (strong, nonatomic) id cookie;
@property (strong, nonatomic) NSString *cookieURL;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (readonly, nonatomic) NSString *networkConnectionType;
@property (strong, nonatomic) NSString *storefront;
@property (readonly, nonatomic) NSString *userAgent;

- (void)authenticate:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)clearCookies;
- (NSDictionary *)eligibilityForService:(NSDictionary *)arg1;
- (void)evaluateScripts:(NSArray *)arg1:(JSValue *)arg2;
- (void)fetchMarketingItem:(NSString *)arg1:(NSString *)arg2:(NSString *)arg3:(NSString *)arg4:(JSValue *)arg5;
- (void)flushUnreportedEvents;
- (JSValue *)getBag;
- (void)getServiceEligibility:(NSDictionary *)arg1:(JSValue *)arg2;
- (void)invalidateBag;
- (void)loadStoreContent:(NSDictionary *)arg1:(JSValue *)arg2;
- (id)makeStoreXMLHttpRequest;
- (void)openDynamicUIURL:(NSString *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)openMarketingItem:(NSDictionary *)arg1:(NSDictionary *)arg2:(JSValue *)arg3;
- (void)recordEvent:(NSString *)arg1:(NSDictionary *)arg2;
- (void)signOut;
- (void)updateServiceEligibility:(NSDictionary *)arg1;
@end

