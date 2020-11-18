//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKCustomFeatureAnnotation-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSString, _MKAnnotationViewCustomFeatureAnnotation;

@interface MKMapSnapshotCustomFeatureAnnotation : NSObject <MKCustomFeatureAnnotation, NSSecureCoding>
{
    _MKAnnotationViewCustomFeatureAnnotation *_internalCustomFeatureAnnotation;
}

@property (nonatomic) CDStruct_c3b9c2ee coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _MKAnnotationViewCustomFeatureAnnotation *internalCustomFeatureAnnotation; // @synthesize internalCustomFeatureAnnotation=_internalCustomFeatureAnnotation;
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (readonly) Class superclass;

+ (id)customFeatureAnnotationForMapItem:(id)arg1;
+ (id)customFeatureAnnotationForMapItem:(id)arg1 styleAttributes:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)feature;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomFeature:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;

@end
