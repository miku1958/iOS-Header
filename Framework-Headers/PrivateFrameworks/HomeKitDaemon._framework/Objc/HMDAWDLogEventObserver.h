//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDLogEventObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface HMDAWDLogEventObserver : HMFObject <HMDLogEventObserver>
{
    BOOL _uploadMaximumDelayReached;
    BOOL _hasDecryptionFailed;
    BOOL _lastDecryptionFailed;
    unsigned int _pushCount;
    unsigned int _fetchCount;
    unsigned int _uploadCount;
    unsigned int _uploadErrorCount;
    unsigned int _homeManagerFetchCount;
    unsigned int _homeZoneFetchCount;
    unsigned int _homeManagerUploadCount;
    unsigned int _homeZoneUploadCount;
    unsigned long long _dataSyncState;
    NSMutableDictionary *_reasonToCountMap;
    NSMutableDictionary *_errorToCountMap;
}

@property (nonatomic) unsigned long long dataSyncState; // @synthesize dataSyncState=_dataSyncState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSMutableDictionary *errorToCountMap; // @synthesize errorToCountMap=_errorToCountMap;
@property (nonatomic) unsigned int fetchCount; // @synthesize fetchCount=_fetchCount;
@property (nonatomic) BOOL hasDecryptionFailed; // @synthesize hasDecryptionFailed=_hasDecryptionFailed;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int homeManagerFetchCount; // @synthesize homeManagerFetchCount=_homeManagerFetchCount;
@property (nonatomic) unsigned int homeManagerUploadCount; // @synthesize homeManagerUploadCount=_homeManagerUploadCount;
@property (nonatomic) unsigned int homeZoneFetchCount; // @synthesize homeZoneFetchCount=_homeZoneFetchCount;
@property (nonatomic) unsigned int homeZoneUploadCount; // @synthesize homeZoneUploadCount=_homeZoneUploadCount;
@property (nonatomic) BOOL lastDecryptionFailed; // @synthesize lastDecryptionFailed=_lastDecryptionFailed;
@property (nonatomic) unsigned int pushCount; // @synthesize pushCount=_pushCount;
@property (strong, nonatomic) NSMutableDictionary *reasonToCountMap; // @synthesize reasonToCountMap=_reasonToCountMap;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int uploadCount; // @synthesize uploadCount=_uploadCount;
@property (nonatomic) unsigned int uploadErrorCount; // @synthesize uploadErrorCount=_uploadErrorCount;
@property (nonatomic) BOOL uploadMaximumDelayReached; // @synthesize uploadMaximumDelayReached=_uploadMaximumDelayReached;

+ (void)_submitAWDMetric:(id)arg1 type:(unsigned int)arg2;
+ (void)initialize;
+ (id)sharedAWDServerConnection;
+ (id)stringForMetricType:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)clearCloudSyncMetrics;
- (void)dispatcher:(id)arg1 didReceiveEvent:(id)arg2;
- (id)getTop:(long long)arg1 dictionary:(id)arg2;
- (id)init;
- (void)processCloudEvent:(id)arg1;
- (void)submitCloudSyncMetric;

@end

