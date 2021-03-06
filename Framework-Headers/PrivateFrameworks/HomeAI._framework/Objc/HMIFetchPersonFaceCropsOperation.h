//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMFObject-Protocol.h>

@class HMIPerson, NSArray, NSSet, NSString;
@protocol HMIPersonManagerDataSource;

@interface HMIFetchPersonFaceCropsOperation : HMFOperation <HMFObject, HMFLogging>
{
    id<HMIPersonManagerDataSource> _dataSource;
    HMIPerson *_person;
    NSSet *_personFaceCrops;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) id<HMIPersonManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMIPerson *person; // @synthesize person=_person;
@property (readonly) NSSet *personFaceCrops; // @synthesize personFaceCrops=_personFaceCrops;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)arg1 person:(id)arg2;
- (void)main;

@end

