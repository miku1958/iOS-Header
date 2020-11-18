//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/ADAdSheetConnectionDelegate-Protocol.h>
#import <iAd/ADAdSheetProxyDelegate-Protocol.h>
#import <iAd/ADSession_RPC-Protocol.h>

@class ADAdSheetConnection, NSMutableArray, NSString;
@protocol ADSSession_RPC;

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate>
{
    BOOL _applicationCanReceiveBackgroundAds;
    BOOL _canUpdateFrequencyCap;
    BOOL _canUpdateToroClickData;
    int _classicUnavailableToken;
    NSMutableArray *_adSpaces;
    ADAdSheetConnection *_connection;
}

@property (strong, nonatomic) NSMutableArray *adSpaces; // @synthesize adSpaces=_adSpaces;
@property (nonatomic) BOOL applicationCanReceiveBackgroundAds; // @synthesize applicationCanReceiveBackgroundAds=_applicationCanReceiveBackgroundAds;
@property BOOL canUpdateFrequencyCap; // @synthesize canUpdateFrequencyCap=_canUpdateFrequencyCap;
@property BOOL canUpdateToroClickData; // @synthesize canUpdateToroClickData=_canUpdateToroClickData;
@property (nonatomic) int classicUnavailableToken; // @synthesize classicUnavailableToken=_classicUnavailableToken;
@property (strong, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<ADSSession_RPC> rpcProxy;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void)_appDidBecomeActive;
- (id)_linkedOnVersion;
- (void)_remote_heartbeatTokenDidChange:(id)arg1 expirationDate:(double)arg2 error:(id)arg3;
- (void)_remote_policyEngineDidIdleDisable;
- (void)_reportAdSpaceStatusEventWithAdOpportunityIdentifier:(id)arg1 adOriginIdentifier:(id)arg2 durationInFeed:(double)arg3 responseTime:(double)arg4 firstMessage:(BOOL)arg5 screenfuls:(long long)arg6 errorCode:(long long)arg7;
- (void)_reportAdSpaceStatusEventWithAdOpportunityIdentifier:(id)arg1 adOriginIdentifier:(id)arg2 tags:(id)arg3 durationInFeed:(double)arg4 responseTime:(double)arg5 firstMessage:(BOOL)arg6 screenfuls:(long long)arg7 errorCode:(long long)arg8;
- (void)_reportAdSubscriptionEvent:(id)arg1;
- (void)adSheetConnectionEstablished;
- (void)adSheetConnectionLost;
- (id)adSheetMachServiceName;
- (void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2;
- (void)addClientToSegments:(id)arg1 replaceExisting:(BOOL)arg2 privateSegment:(BOOL)arg3;
- (id)additionalAdSheetLaunchOptions;
- (void)configureConnection:(id)arg1;
- (void)determineAppInstallAttributionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)lookupAdConversionDetails:(CDUnknownBlockType)arg1;
- (void)performWhenConnected:(CDUnknownBlockType)arg1;
- (void)refreshTargetingData;
- (void)registerAdSpace:(id)arg1;
- (void)reportPrerollRequest;
- (void)requestAttributionDetailsWithBlock:(CDUnknownBlockType)arg1;
- (void)requestSponsoredSearchData:(CDUnknownBlockType)arg1;
- (void)requestSponsoredSearchDataAndRequestID:(CDUnknownBlockType)arg1;
- (void)requestSponsoredSearchURL:(CDUnknownBlockType)arg1;
- (void)requestTrendingSearchData:(CDUnknownBlockType)arg1;
- (void)requestTrendingSearchURL:(CDUnknownBlockType)arg1;
- (void)requestUserTargetingIdentifier:(CDUnknownBlockType)arg1;
- (id)rpcProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (BOOL)shouldConnectToAdSheet;
- (BOOL)shouldLaunchAdSheet;
- (void)unregisterAdSpace:(id)arg1;
- (void)updateDPIDWithAction:(unsigned long long)arg1;
- (void)updateSponsoredFrequencyCapData:(id)arg1;
- (void)updateToroClickData:(id)arg1;
- (void)updateTrendingFrequencyCapData:(id)arg1;

@end

