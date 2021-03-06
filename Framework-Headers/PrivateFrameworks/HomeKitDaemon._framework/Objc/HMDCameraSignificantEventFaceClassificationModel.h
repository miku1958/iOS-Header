//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSString, NSUUID;

@interface HMDCameraSignificantEventFaceClassificationModel : HMBModel
{
}

@property (strong) NSUUID *personManagerUUID; // @dynamic personManagerUUID;
@property (strong) NSString *personName; // @dynamic personName;
@property (strong) NSUUID *personUUID; // @dynamic personUUID;
@property (strong) NSUUID *unassociatedFaceCropUUID; // @dynamic unassociatedFaceCropUUID;

+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
- (id)createFaceClassification;

@end

