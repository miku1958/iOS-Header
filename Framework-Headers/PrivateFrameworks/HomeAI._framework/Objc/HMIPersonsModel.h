//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMIPersonsModelSummary, NSString, NSUUID, VNPersonsModel;

@interface HMIPersonsModel : HMFObject <HMFLogging>
{
    BOOL _externalLibrary;
    VNPersonsModel *_visionPersonsModel;
    NSUUID *_homeUUID;
    NSUUID *_sourceUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isExternalLibrary) BOOL externalLibrary; // @synthesize externalLibrary=_externalLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property (readonly) NSUUID *sourceUUID; // @synthesize sourceUUID=_sourceUUID;
@property (readonly) HMIPersonsModelSummary *summary;
@property (readonly) Class superclass;
@property (readonly) VNPersonsModel *visionPersonsModel; // @synthesize visionPersonsModel=_visionPersonsModel;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)initWithPersonsModel:(id)arg1 homeUUID:(id)arg2 sourceUUID:(id)arg3 externalLibrary:(BOOL)arg4;

@end
