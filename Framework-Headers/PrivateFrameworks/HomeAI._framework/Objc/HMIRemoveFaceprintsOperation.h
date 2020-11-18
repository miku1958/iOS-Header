//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

@class NSSet;
@protocol HMIPersonManagerDataSource;

__attribute__((visibility("hidden")))
@interface HMIRemoveFaceprintsOperation : HMFOperation
{
    id<HMIPersonManagerDataSource> _dataSource;
    NSSet *_faceprintUUIDs;
}

@property (readonly) id<HMIPersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly) NSSet *faceprintUUIDs; // @synthesize faceprintUUIDs=_faceprintUUIDs;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1 faceprintUUIDs:(id)arg2;
- (void)main;

@end
