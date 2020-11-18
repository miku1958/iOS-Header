//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/NSCopying-Protocol.h>

@class CLLocation, NSData, NSString, RTPredictedLocationOfInterest;

@interface EKStructuredLocation : EKObject <NSCopying>
{
    BOOL _imprecise;
    RTPredictedLocationOfInterest *_predictedLOI;
}

@property (strong, nonatomic) NSString *address;
@property (copy, nonatomic) NSString *addressBookEntityID;
@property (copy, nonatomic) NSString *derivedFrom;
@property (strong, nonatomic) CLLocation *geoLocation;
@property (readonly, nonatomic) BOOL hasKnownSpatialData;
@property (nonatomic, getter=isImprecise) BOOL imprecise; // @synthesize imprecise=_imprecise;
@property (readonly, nonatomic) BOOL isStructured;
@property (copy, nonatomic) NSData *mapKitHandle;
@property (strong, nonatomic) RTPredictedLocationOfInterest *predictedLOI; // @synthesize predictedLOI=_predictedLOI;
@property (readonly, nonatomic, getter=isPrediction) BOOL prediction;
@property (nonatomic) double radius;
@property (strong, nonatomic) NSString *routing;
@property (strong, nonatomic) NSString *title;

+ (id)_stringByStrippingControlCharactersFromString:(id)arg1;
+ (id)locationWithMapItem:(id)arg1;
+ (id)locationWithTitle:(id)arg1;
- (void).cxx_destruct;
- (id)_persistentLocation;
- (id)cacheKey;
- (id)calLocation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)geoURLString;
- (id)init;
- (BOOL)isEqualToLocation:(id)arg1;
- (void)updateFromMapItem:(id)arg1;
- (void)updatePersistentObject;

@end
