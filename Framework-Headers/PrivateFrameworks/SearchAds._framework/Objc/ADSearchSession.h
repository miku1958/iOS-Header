//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADCapService, ADParameterFactory, APOdmlSettings, NSString;
@protocol OS_dispatch_queue;

@interface ADSearchSession : NSObject
{
    NSObject<OS_dispatch_queue> *_idNotificationQueue;
    BOOL _notificationReceivedAndWaiting;
    int _appsRank;
    NSString *_appID;
    NSString *_appVersion;
    ADCapService *_capService;
    ADParameterFactory *_parameterFactory;
    NSString *_campaignNamespace;
    NSObject *_notificationObserver;
    NSString *_clientRequestID;
    APOdmlSettings *_odmlSettings;
}

@property (copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property (copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property (nonatomic) int appsRank; // @synthesize appsRank=_appsRank;
@property (strong, nonatomic) NSString *campaignNamespace; // @synthesize campaignNamespace=_campaignNamespace;
@property (strong, nonatomic) ADCapService *capService; // @synthesize capService=_capService;
@property (strong, nonatomic) NSString *clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property (strong, nonatomic) NSObject *notificationObserver; // @synthesize notificationObserver=_notificationObserver;
@property (nonatomic) BOOL notificationReceivedAndWaiting; // @synthesize notificationReceivedAndWaiting=_notificationReceivedAndWaiting;
@property (strong, nonatomic) APOdmlSettings *odmlSettings; // @synthesize odmlSettings=_odmlSettings;
@property (strong, nonatomic) ADParameterFactory *parameterFactory; // @synthesize parameterFactory=_parameterFactory;

- (void).cxx_destruct;
- (id)adParameters;
- (id)campaignNamespaceParameter;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 storeFront:(id)arg4;
- (id)populateStoreFrontLanguageLocale:(id)arg1;
- (void)requestSearchObjectForLocality:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)requestSponsoredSearchURL:(CDUnknownBlockType)arg1;
- (void)requestUserTargetingIdentifier:(CDUnknownBlockType)arg1;
- (void)searchObjectForCriteria:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)sponsoredSearchRequestForLanguageLocale:(id)arg1;
- (BOOL)startUpdatingIDs;
- (void)updateClickData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateClickDataWith:(id)arg1;
- (void)updateFrequencyCapData:(id)arg1;
- (void)updateToroDownloadData:(id)arg1 forType:(long long)arg2;
- (id)userTargetingProperties;

@end

