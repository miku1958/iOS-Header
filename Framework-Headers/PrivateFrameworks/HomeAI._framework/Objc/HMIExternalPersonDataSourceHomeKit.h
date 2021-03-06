//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIExternalPersonManagerDataSource-Protocol.h>

@class HMPhotosPersonManager, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMIExternalPersonDataSourceHomeKit : HMFObject <HMIExternalPersonManagerDataSource, HMFLogging>
{
    HMPhotosPersonManager *_photosPersonManager;
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) HMPhotosPersonManager *photosPersonManager; // @synthesize photosPersonManager=_photosPersonManager;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)addFaceprints:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllFaceprintsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllPersonFaceCropsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAllPersonsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchPersonsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSettingsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHMPhotosPersonManager:(id)arg1;
- (id)logIdentifier;
- (void)performCloudPullWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeFaceprintsWithUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

