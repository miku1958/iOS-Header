//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSData, NSString;

@protocol PVFaceProtocol <NSObject>

@property (readonly, nonatomic) unsigned short ageType;
@property (readonly, nonatomic) double centerX;
@property (readonly, nonatomic) double centerY;
@property (readonly, nonatomic) long long clusterSequenceNumber;
@property (readonly, nonatomic) NSData *faceprintData;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (nonatomic) long long qualityMeasure;
@property (readonly, nonatomic) double size;

@end
