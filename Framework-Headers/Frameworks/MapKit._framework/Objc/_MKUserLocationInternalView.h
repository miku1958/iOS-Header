//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/_MKUserLocationView.h>

@class MKUserLocationView;

__attribute__((visibility("hidden")))
@interface _MKUserLocationInternalView : _MKUserLocationView
{
    MKUserLocationView *_parentView;
}

@property (weak, nonatomic) MKUserLocationView *parentView; // @synthesize parentView=_parentView;

- (void).cxx_destruct;
- (id)_annotationContainer;
- (id)_containerView;
- (id)_mapView;
- (double)_pointsForDistance:(double)arg1;

@end

