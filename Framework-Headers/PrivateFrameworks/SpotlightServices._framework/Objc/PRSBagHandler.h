//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOUserSessionEntity, NSArray, NSMutableArray, NSMutableDictionary, NSSet, NSString, PARBag, PRSRankingServerKnobs, SSPlistDataReader;
@protocol OS_dispatch_group, OS_dispatch_queue, PRSSessionController;

@interface PRSBagHandler : NSObject
{
    BOOL _waitingForLocation;
    NSObject<OS_dispatch_group> *_locationGroup;
    id _lockObject;
    NSMutableArray *_tasks;
    PARBag *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
    BOOL _active;
    BOOL _disableAsTypedSuggestion;
    BOOL _collectAnonymousData;
    BOOL _collectScores;
    BOOL _use2LayerRanking;
    BOOL _resourceMetadataNeedsWrite;
    id<PRSSessionController> _client;
    long long _status;
    double _searchRenderTimeout;
    SSPlistDataReader *_cep_server_values;
    PRSRankingServerKnobs *_ranking_server_knobs;
    NSSet *_appBlacklist;
    NSArray *_enabledDomains;
    NSArray *_anonymousMetadataUndesiredBundleIDs;
    NSString *_fteLocString;
    NSString *_fteLearnMoreString;
    NSString *_fteContinueString;
    NSArray *_suggestionRankerModelParams;
    NSString *_lookupFirstUseDescription1;
    NSString *_lookupFirstUseDescription2;
    NSString *_lookupFirstUseLearnMore;
    GEOUserSessionEntity *_geoUserSessionEntity;
    NSMutableDictionary *_resourceMetadata;
    NSString *_resourceMetadataPath;
    NSObject<OS_dispatch_queue> *_resourceFetchQueue;
}

@property (nonatomic) BOOL active; // @synthesize active=_active;
@property (strong, nonatomic) NSArray *anonymousMetadataUndesiredBundleIDs; // @synthesize anonymousMetadataUndesiredBundleIDs=_anonymousMetadataUndesiredBundleIDs;
@property (strong, nonatomic) NSSet *appBlacklist; // @synthesize appBlacklist=_appBlacklist;
@property (strong) SSPlistDataReader *cep_server_values; // @synthesize cep_server_values=_cep_server_values;
@property (weak) id<PRSSessionController> client; // @synthesize client=_client;
@property (nonatomic) BOOL collectAnonymousData; // @synthesize collectAnonymousData=_collectAnonymousData;
@property (nonatomic) BOOL collectScores; // @synthesize collectScores=_collectScores;
@property (nonatomic) BOOL disableAsTypedSuggestion; // @synthesize disableAsTypedSuggestion=_disableAsTypedSuggestion;
@property (strong, nonatomic) NSArray *enabledDomains; // @synthesize enabledDomains=_enabledDomains;
@property (strong, nonatomic) NSString *fteContinueString; // @synthesize fteContinueString=_fteContinueString;
@property (strong, nonatomic) NSString *fteLearnMoreString; // @synthesize fteLearnMoreString=_fteLearnMoreString;
@property (strong, nonatomic) NSString *fteLocString; // @synthesize fteLocString=_fteLocString;
@property (readonly) GEOUserSessionEntity *geoUserSessionEntity; // @synthesize geoUserSessionEntity=_geoUserSessionEntity;
@property (readonly, nonatomic) NSString *lookupFirstUseDescription1; // @synthesize lookupFirstUseDescription1=_lookupFirstUseDescription1;
@property (readonly, nonatomic) NSString *lookupFirstUseDescription2; // @synthesize lookupFirstUseDescription2=_lookupFirstUseDescription2;
@property (readonly, nonatomic) NSString *lookupFirstUseLearnMore; // @synthesize lookupFirstUseLearnMore=_lookupFirstUseLearnMore;
@property (strong) PRSRankingServerKnobs *ranking_server_knobs; // @synthesize ranking_server_knobs=_ranking_server_knobs;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *resourceFetchQueue; // @synthesize resourceFetchQueue=_resourceFetchQueue;
@property (strong, nonatomic) NSMutableDictionary *resourceMetadata; // @synthesize resourceMetadata=_resourceMetadata;
@property (nonatomic) BOOL resourceMetadataNeedsWrite; // @synthesize resourceMetadataNeedsWrite=_resourceMetadataNeedsWrite;
@property (strong, nonatomic) NSString *resourceMetadataPath; // @synthesize resourceMetadataPath=_resourceMetadataPath;
@property (readonly) double searchRenderTimeout; // @synthesize searchRenderTimeout=_searchRenderTimeout;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (strong, nonatomic) NSArray *suggestionRankerModelParams; // @synthesize suggestionRankerModelParams=_suggestionRankerModelParams;
@property (nonatomic) BOOL use2LayerRanking; // @synthesize use2LayerRanking=_use2LayerRanking;

+ (void)initialize;
+ (id)sharedHandler;
- (void).cxx_destruct;
- (id)_base64CEPDataNoCopyFromFeatureData:(id)arg1;
- (void)_processQIFeatures:(id)arg1 forClient:(id)arg2;
- (void)activate;
- (id)applicationNameForUserAgent;
- (void)deactivate;
- (id)excludedDomainIdentifiers;
- (void)fetchModifiedResourceFromSession:(id)arg1 resource:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getFTEStringsWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)isLocaleSupported:(id)arg1;
- (void)parseCEPFromData:(id)arg1 forClient:(id)arg2;
- (void)refreshGUID;
- (void)removeTask:(id)arg1;
- (BOOL)searchSupported:(BOOL)arg1;
- (BOOL)sessionReady;
- (id)supportedServices;
- (void)triggerTaskWhenReady:(id)arg1;
- (void)updateFromSession:(id)arg1 bag:(id)arg2 forClient:(id)arg3 error:(id)arg4;
- (void)updateWithBagDictionary:(id)arg1 error:(id)arg2;
- (void)updateWithDictionary:(id)arg1;
- (id)userId;

@end

