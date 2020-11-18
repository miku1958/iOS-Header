//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MANode.h>

#import <PhotoAnalysis/PVAssetProtocol-Protocol.h>
#import <PhotoAnalysis/PVFaceProtocol-Protocol.h>
#import <PhotoAnalysis/PVMomentProtocol-Protocol.h>
#import <PhotoAnalysis/PVPersonProtocol-Protocol.h>

@class NSData, NSDate, NSString;
@protocol PVFaceProtocol;

@interface PVLibraryGraphNode : MANode <PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol>
{
}

@property (readonly, nonatomic) unsigned short ageType;
@property (readonly, nonatomic) NSString *anonymizedName;
@property (readonly, nonatomic) struct CLLocationCoordinate2D approximateCoordinate;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) NSString *cloudIdentifier;
@property (readonly, nonatomic) NSDate *clsDistanceIdentity;
@property (readonly, nonatomic) long long clusterSequenceNumber;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *distanceIdentity;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long estimatedAssetCount;
@property (readonly, nonatomic) unsigned long long faceCount;
@property (readonly, nonatomic) NSData *faceprintData;
@property (readonly, nonatomic) BOOL favorite;
@property (readonly, nonatomic) NSString *filename;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hidden;
@property (nonatomic) BOOL isVerified;
@property (strong, nonatomic) id<PVFaceProtocol> keyFace;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly) NSString *localIdentifier;
@property (readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate;
@property (nonatomic) long long manualOrder;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) unsigned long long pixelHeight;
@property (readonly, nonatomic) unsigned long long pixelWidth;
@property (nonatomic) long long qualityMeasure;
@property (readonly, nonatomic) double size;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) long long verifiedType;

+ (id)dateForTimeInterval:(double)arg1;
+ (double)timeIntervalForDate:(id)arg1;
- (id)dateCreated;
- (unsigned long long)faceCountInFaceGroup;
- (BOOL)isDirty;
- (id)personLocalIdentifiers;
- (void)pv_addMergeCandidatePersons:(id)arg1;
- (unsigned long long)type;

@end
