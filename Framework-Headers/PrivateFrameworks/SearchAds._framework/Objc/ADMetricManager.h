//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ADCapService, ADUnfairLock, NSMutableDictionary, NSMutableSet, NSString;

@interface ADMetricManager : NSObject
{
    ADCapService *_capService;
    ADUnfairLock *_resourceLock;
    NSString *_searchRequestID;
    NSMutableDictionary *_activeAdvertisementsByInstanceID;
    NSMutableSet *_clickCapUpdated;
    NSMutableSet *_downloadCapUpdated;
    NSMutableSet *_frequencyCapUpdated;
}

@property (strong, nonatomic) NSMutableDictionary *activeAdvertisementsByInstanceID; // @synthesize activeAdvertisementsByInstanceID=_activeAdvertisementsByInstanceID;
@property (strong, nonatomic) ADCapService *capService; // @synthesize capService=_capService;
@property (strong, nonatomic) NSMutableSet *clickCapUpdated; // @synthesize clickCapUpdated=_clickCapUpdated;
@property (strong, nonatomic) NSMutableSet *downloadCapUpdated; // @synthesize downloadCapUpdated=_downloadCapUpdated;
@property (strong, nonatomic) NSMutableSet *frequencyCapUpdated; // @synthesize frequencyCapUpdated=_frequencyCapUpdated;
@property (readonly, nonatomic) ADUnfairLock *resourceLock; // @synthesize resourceLock=_resourceLock;
@property (strong, nonatomic) NSString *searchRequestID; // @synthesize searchRequestID=_searchRequestID;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)activateAdvertisements:(id)arg1;
- (void)adMarkerInteracted:(id)arg1;
- (void)addAdRecordsToDES:(id)arg1 forSearchRequestID:(id)arg2 listType:(long long)arg3;
- (void)addOriginalAdRecordsToDES:(id)arg1 forSearchRequestID:(id)arg2;
- (void)addRerankedAdRecordsToDES:(id)arg1 forSearchRequestID:(id)arg2;
- (void)completed:(id)arg1;
- (id)createRecordForAdData:(id)arg1;
- (void)deactivateAdvertisements:(id)arg1;
- (void)deactivateAdvertisementsByInstanceIDs:(id)arg1;
- (void)deactivateAllAdvertisements;
- (void)getApp:(id)arg1 buttonState:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)interacted:(id)arg1;
- (void)offScreen:(id)arg1;
- (void)onScreen:(id)arg1;
- (void)placed:(id)arg1;
- (void)received:(id)arg1;
- (void)replaceCapService:(id)arg1;
- (long long)translateButtonStateToDownloadType:(long long)arg1;
- (void)updateDESRecord:(id)arg1 forEvent:(long long)arg2 forType:(long long)arg3;
- (void)visible:(id)arg1 start:(id)arg2 duration:(double)arg3;

@end

