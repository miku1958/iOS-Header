//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHFace.h>

#import <VideoProcessing/PFPhotosFaceRepresentation-Protocol.h>
#import <VideoProcessing/PVFaceProtocol-Protocol.h>

@class NSData, NSString;

@interface PHFace (PFPhotosFaceRepresentation) <PFPhotosFaceRepresentation, PVFaceProtocol>

@property (readonly, nonatomic) unsigned short ageType;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) long long clusterSequenceNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *faceprintData;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (nonatomic) long long qualityMeasure; // @dynamic qualityMeasure;
@property (readonly, nonatomic) double size;
@property (readonly) Class superclass;

- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationQuality;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;
@end
