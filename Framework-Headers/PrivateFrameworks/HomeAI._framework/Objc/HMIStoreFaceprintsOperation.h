//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

@class NSSet;
@protocol HMIPersonManagerDataSource;

__attribute__((visibility("hidden")))
@interface HMIStoreFaceprintsOperation : HMFOperation
{
    id<HMIPersonManagerDataSource> _dataSource;
    NSSet *_faceprints;
}

@property (readonly) id<HMIPersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly) NSSet *faceprints; // @synthesize faceprints=_faceprints;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1 faceprints:(id)arg2;
- (void)main;

@end
