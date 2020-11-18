//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/MKAnnotation-Protocol.h>
#import <PhotosUICore/PXContextualMemoriesSetting-Protocol.h>
#import <PhotosUICore/_PXCompletionHandlerManagerDelegate-Protocol.h>

@class CLLocation, CLPlacemark, NSString, PXLocationStream, _PXCompletionHandlerManager;

@interface PXContextualMemoriesLocationSetting : NSObject <_PXCompletionHandlerManagerDelegate, PXContextualMemoriesSetting, MKAnnotation>
{
    BOOL _monitorsCurrentLocation;
    CLPlacemark *_placemark;
    unsigned long long _locationState;
    PXLocationStream *_locationStream;
    _PXCompletionHandlerManager *_completionHandlerManager;
    struct CLLocationCoordinate2D _coordinate;
}

@property (strong, nonatomic) _PXCompletionHandlerManager *completionHandlerManager; // @synthesize completionHandlerManager=_completionHandlerManager;
@property (nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *headerTitle;
@property (readonly, nonatomic) CLLocation *location;
@property (nonatomic) unsigned long long locationState; // @synthesize locationState=_locationState;
@property (strong, nonatomic) PXLocationStream *locationStream; // @synthesize locationStream=_locationStream;
@property (nonatomic) BOOL monitorsCurrentLocation; // @synthesize monitorsCurrentLocation=_monitorsCurrentLocation;
@property (strong, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;

+ (void)_setSimulatedLocationCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)_simulatedLocationCoordinate;
+ (BOOL)automaticallyNotifiesObserversOfCoordinate;
+ (id)keyPathsForValuesAffectingPlacemark;
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingTitle;
- (void).cxx_destruct;
- (void)_handleLocationAcquisitionUpdate:(id)arg1;
- (void)_initiateLocationAcquisition;
- (id)_locationForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_updatePlacemarkForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (void)_updatePlacemarkWithPlacemarks:(id)arg1 error:(id)arg2;
- (void)didCallLastCompletionHandlerForCompletionHandlerManager:(id)arg1;
- (id)init;
- (void)requestLocationUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resetToDefault;

@end

