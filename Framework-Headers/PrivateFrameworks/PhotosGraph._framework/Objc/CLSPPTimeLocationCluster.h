//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/CLSTimeLocationTuple-Protocol.h>

@class CLCircularRegion, NSDate, NSString, PHAssetCollection;

@interface CLSPPTimeLocationCluster : NSObject <CLSTimeLocationTuple>
{
    PHAssetCollection *_assetCollection;
    CLCircularRegion *_region;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_expandedEndDate;
    NSDate *_expandedStartDate;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property (readonly, nonatomic) struct CLLocationCoordinate2D coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) NSDate *expandedEndDate; // @synthesize expandedEndDate=_expandedEndDate;
@property (readonly, nonatomic) NSDate *expandedStartDate; // @synthesize expandedStartDate=_expandedStartDate;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timeLocationIdentifier;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)arg1 region:(id)arg2;

@end

