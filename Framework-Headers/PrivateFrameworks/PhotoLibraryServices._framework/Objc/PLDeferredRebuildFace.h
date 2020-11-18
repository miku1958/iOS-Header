//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/PLFaceRebuildDescription-Protocol.h>

@class NSString;

@interface PLDeferredRebuildFace : PLManagedObject <PLFaceRebuildDescription>
{
}

@property (copy, nonatomic) NSString *assetCloudGUID; // @dynamic assetCloudGUID;
@property (copy, nonatomic) NSString *assetUUID; // @dynamic assetUUID;
@property (readonly, nonatomic) double centerX;
@property (nonatomic) double centerX; // @dynamic centerX;
@property (readonly, nonatomic) double centerY;
@property (nonatomic) double centerY; // @dynamic centerY;
@property (readonly, nonatomic) int cloudNameSource;
@property (nonatomic) int cloudNameSource; // @dynamic cloudNameSource;
@property (readonly, nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property (nonatomic) BOOL clusterRejected; // @dynamic clusterRejected;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int faceAlgorithmVersion; // @dynamic faceAlgorithmVersion;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic) BOOL hidden; // @dynamic hidden;
@property (readonly, nonatomic, getter=isManual) BOOL manual;
@property (nonatomic) BOOL manual; // @dynamic manual;
@property (readonly, nonatomic) int nameSource;
@property (nonatomic) int nameSource; // @dynamic nameSource;
@property (copy, nonatomic) NSString *personUUID; // @dynamic personUUID;
@property (nonatomic) BOOL rejected; // @dynamic rejected;
@property (readonly, nonatomic, getter=isRepresentative) BOOL representative;
@property (nonatomic) BOOL representative; // @dynamic representative;
@property (readonly, nonatomic) double size;
@property (nonatomic) double size; // @dynamic size;
@property (readonly) Class superclass;

+ (id)deferredFacesWithAssetCloudGUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

@end

