//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIAsset : TRIPBMessage
{
}

@property (copy, nonatomic) NSString *assetId; // @dynamic assetId;
@property (nonatomic) int cloudKitContainer; // @dynamic cloudKitContainer;
@property (nonatomic) unsigned int cloudKitIndex; // @dynamic cloudKitIndex;
@property (nonatomic) BOOL hasAssetId; // @dynamic hasAssetId;
@property (nonatomic) BOOL hasCloudKitContainer; // @dynamic hasCloudKitContainer;
@property (nonatomic) BOOL hasCloudKitIndex; // @dynamic hasCloudKitIndex;
@property (nonatomic) BOOL hasName; // @dynamic hasName;
@property (nonatomic) BOOL hasSigned_p; // @dynamic hasSigned_p;
@property (nonatomic) BOOL hasSize; // @dynamic hasSize;
@property (nonatomic) BOOL hasTreatmentId; // @dynamic hasTreatmentId;
@property (copy, nonatomic) NSString *name; // @dynamic name;
@property (nonatomic) BOOL signed_p; // @dynamic signed_p;
@property (nonatomic) unsigned int size; // @dynamic size;
@property (copy, nonatomic) NSString *treatmentId; // @dynamic treatmentId;

+ (id)descriptor;

@end

