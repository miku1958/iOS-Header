//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class C2MetricOptions, CKOperationMMCSRequestOptions, NSArray, NSData, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface CKDMMCSRequestOptions : NSObject
{
    BOOL _allowsCellularAccess;
    BOOL _allowsPowerNapScheduling;
    BOOL _resolvedAutomaticallyRetryNetworkFailures;
    long long _databaseScope;
    long long _containerEnvironment;
    NSString *_topmostParentOperationID;
    NSString *_topmostParentOperationGroupID;
    NSString *_applicationBundleID;
    NSString *_applicationSecondaryID;
    NSString *_containerID;
    NSArray *_zoneNames;
    NSString *_deviceHardwareID;
    NSData *_authPutResponse;
    NSDictionary *_authPutResponseHeaders;
    long long _qualityOfService;
    long long _queuePriority;
    unsigned long long _resolvedDiscretionaryNetworkBehavior;
    unsigned long long _duetPreClearedMode;
    C2MetricOptions *_metricOptions;
    unsigned long long _networkServiceType;
    CKOperationMMCSRequestOptions *_MMCSRequestOptions;
}

@property (strong, nonatomic) CKOperationMMCSRequestOptions *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property (nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property (nonatomic) BOOL allowsPowerNapScheduling; // @synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling;
@property (strong, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property (strong, nonatomic) NSString *applicationSecondaryID; // @synthesize applicationSecondaryID=_applicationSecondaryID;
@property (strong, nonatomic) NSData *authPutResponse; // @synthesize authPutResponse=_authPutResponse;
@property (strong, nonatomic) NSDictionary *authPutResponseHeaders; // @synthesize authPutResponseHeaders=_authPutResponseHeaders;
@property (nonatomic) long long containerEnvironment; // @synthesize containerEnvironment=_containerEnvironment;
@property (strong, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property (nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
@property (strong, nonatomic) NSString *deviceHardwareID; // @synthesize deviceHardwareID=_deviceHardwareID;
@property (nonatomic) unsigned long long duetPreClearedMode; // @synthesize duetPreClearedMode=_duetPreClearedMode;
@property (strong, nonatomic) C2MetricOptions *metricOptions; // @synthesize metricOptions=_metricOptions;
@property (nonatomic) unsigned long long networkServiceType; // @synthesize networkServiceType=_networkServiceType;
@property (nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (nonatomic) long long queuePriority; // @synthesize queuePriority=_queuePriority;
@property (nonatomic) BOOL resolvedAutomaticallyRetryNetworkFailures; // @synthesize resolvedAutomaticallyRetryNetworkFailures=_resolvedAutomaticallyRetryNetworkFailures;
@property (nonatomic) unsigned long long resolvedDiscretionaryNetworkBehavior; // @synthesize resolvedDiscretionaryNetworkBehavior=_resolvedDiscretionaryNetworkBehavior;
@property (strong, nonatomic) NSString *topmostParentOperationGroupID; // @synthesize topmostParentOperationGroupID=_topmostParentOperationGroupID;
@property (strong, nonatomic) NSString *topmostParentOperationID; // @synthesize topmostParentOperationID=_topmostParentOperationID;
@property (strong, nonatomic) NSArray *zoneNames; // @synthesize zoneNames=_zoneNames;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCSOptions;
- (id)description;
- (id)initWithOperation:(id)arg1;
- (BOOL)usesBackgroundSession;

@end
