//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKCustomFeatureAnnotation-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSString, VKCustomFeature;

@interface MKMapSnapshotFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding>
{
    long long _representation;
    NSString *_title;
    VKCustomFeature *_customFeature;
    CDStruct_2c43369c _coordinate;
}

@property (nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long representation; // @synthesize representation=_representation;
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)feature;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 title:(id)arg2 representation:(long long)arg3;
- (void)setShowsBalloonCallout:(BOOL)arg1;

@end

