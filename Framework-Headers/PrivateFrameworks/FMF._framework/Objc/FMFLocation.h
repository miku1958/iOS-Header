//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/FMAnnotation-Protocol.h>
#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class CLLocation, FMAccuracyOverlay, FMFHandle, NSDate, NSString, UIColor, UIImage;

@interface FMFLocation : NSObject <NSCopying, NSSecureCoding, FMAnnotation>
{
    BOOL _locatingInProgress;
    BOOL _isBorderEnabled;
    CLLocation *_location;
    FMAccuracyOverlay *_overlay;
    double _horizontalAccuracy;
    UIImage *_smallAnnotationIcon;
    UIImage *_smallOverlayIcon;
    UIImage *_largeOverlayIcon;
    UIImage *_largeAnnotationIcon;
    double _distanceFromUser;
    UIColor *_tintColor;
    FMFHandle *_handle;
    NSString *_longAddress;
    NSDate *_timestamp;
    NSString *_label;
    NSString *_shortAddressString;
    double _maxLocatingInterval;
    double _TTL;
    double _distance;
    NSString *_distanceDescription;
    NSString *_age;
    struct CLLocationCoordinate2D _coordinate;
}

@property (nonatomic) double TTL; // @synthesize TTL=_TTL;
@property (strong, nonatomic) NSString *age; // @synthesize age=_age;
@property (nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double distance; // @synthesize distance=_distance;
@property (strong, nonatomic) NSString *distanceDescription; // @synthesize distanceDescription=_distanceDescription;
@property (nonatomic) double distanceFromUser; // @synthesize distanceFromUser=_distanceFromUser;
@property (strong, nonatomic) FMFHandle *handle; // @synthesize handle=_handle;
@property (readonly) unsigned long long hash;
@property (nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property (nonatomic) BOOL isBorderEnabled; // @synthesize isBorderEnabled=_isBorderEnabled;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (strong, nonatomic) UIImage *largeAnnotationIcon; // @synthesize largeAnnotationIcon=_largeAnnotationIcon;
@property (strong, nonatomic) UIImage *largeOverlayIcon; // @synthesize largeOverlayIcon=_largeOverlayIcon;
@property (nonatomic, getter=isLocatingInProgress) BOOL locatingInProgress; // @synthesize locatingInProgress=_locatingInProgress;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (copy, nonatomic) NSString *longAddress; // @synthesize longAddress=_longAddress;
@property (nonatomic) double maxLocatingInterval; // @synthesize maxLocatingInterval=_maxLocatingInterval;
@property (strong, nonatomic) FMAccuracyOverlay *overlay; // @synthesize overlay=_overlay;
@property (readonly, copy, nonatomic) NSString *shortAddress;
@property (copy, nonatomic) NSString *shortAddressString; // @synthesize shortAddressString=_shortAddressString;
@property (strong, nonatomic) UIImage *smallAnnotationIcon; // @synthesize smallAnnotationIcon=_smallAnnotationIcon;
@property (strong, nonatomic) UIImage *smallOverlayIcon; // @synthesize smallOverlayIcon=_smallOverlayIcon;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (readonly, copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_updateLocation:(id)arg1;
- (id)agingItemTimestamp;
- (BOOL)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)distanceThenNameCompare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasKnownLocation;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forHandle:(id)arg2 maxLocatingInterval:(double)arg3 TTL:(double)arg4;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isThisDevice;
- (BOOL)isValid;
- (id)locationAge;
- (id)locationShortAddressWithAge;
- (id)locationShortAddressWithAgeIncludeLocating;
- (void)resetLocateInProgress:(id)arg1;
- (void)resetLocateInProgressTimer;
- (void)updateHandle:(id)arg1;
- (void)updateLocation:(id)arg1;
- (void)updateLocationForCache:(id)arg1;

@end

