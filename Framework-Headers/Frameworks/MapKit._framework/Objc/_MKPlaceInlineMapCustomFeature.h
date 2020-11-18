//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/MKCustomFeatureAnnotation-Protocol.h>

@class NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface _MKPlaceInlineMapCustomFeature : NSObject <MKCustomFeatureAnnotation>
{
    VKCustomFeature *_feature;
    CDStruct_2c43369c _coordinate;
}

@property (nonatomic) CDStruct_c3b9c2ee coordinate;
@property (nonatomic) double course;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL showsBalloonCallout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)feature;
- (id)initWithCustomFeature:(id)arg1 coordinate:(CDStruct_c3b9c2ee)arg2;

@end

