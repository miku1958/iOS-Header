//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

#import <VideoProcessing/PVMomentProtocol-Protocol.h>

@class NSDate, NSString;

@interface PHAssetCollection (PVMomentProtocol) <PVMomentProtocol>

@property (readonly, nonatomic) struct CLLocationCoordinate2D approximateCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long estimatedAssetCount;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isCoarse;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;

@end

