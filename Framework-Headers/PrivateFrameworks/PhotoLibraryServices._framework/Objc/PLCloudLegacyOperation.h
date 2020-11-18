//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class PLCloudLegacyOperationResource, PLCloudLegacyScenario, PLCloudPhotoLibraryManager;

@interface PLCloudLegacyOperation : NSObject
{
    PLCloudPhotoLibraryManager *_connection;
    BOOL _running;
    unsigned long long _cost;
    long long _createdAt;
    PLCloudLegacyScenario *_scenario;
    PLCloudLegacyOperationResource *_operationResource;
}

@property (readonly, nonatomic) PLCloudPhotoLibraryManager *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) unsigned long long cost; // @synthesize cost=_cost;
@property (readonly, nonatomic) long long createdAt; // @synthesize createdAt=_createdAt;
@property (strong, nonatomic) PLCloudLegacyOperationResource *operationResource; // @synthesize operationResource=_operationResource;
@property BOOL running; // @synthesize running=_running;
@property (readonly, nonatomic) PLCloudLegacyScenario *scenario; // @synthesize scenario=_scenario;

- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithScenario:(id)arg1 cloudConnection:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)requestCancel;
- (id)resource;
- (void)runOperationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
