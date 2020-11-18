//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

#import <FlightUtilities/MKAnnotation-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation>
{
    NSMutableArray *_viewAddedBlock;
    CDStruct_2c43369c _coordinate;
}

@property (nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate=_coordinate;
@property (readonly) CDStruct_2c43369c currentLocation;
@property (nonatomic) double currentProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CDStruct_2c43369c endLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) CDStruct_2c43369c startLocation;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (strong) NSMutableArray *viewAddedBlock; // @synthesize viewAddedBlock=_viewAddedBlock;

+ (id)defaultAnotation;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)init;
- (void)notifyWhenIsVisibleWithBlock:(CDUnknownBlockType)arg1;
- (id)planeLayer;
- (void)setPlaneImage:(id)arg1;
- (void)setStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongitude:(double)arg4;

@end

