//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKUserLocationView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface _MKGemUserLocationView : MKUserLocationView
{
    CALayer *_gemLayer;
}

- (void).cxx_destruct;
- (id)_baseLayer;
- (id)_pulseAnimation;
- (id)_pulseLayer;
- (void)_setMapType:(unsigned long long)arg1;
- (void)_setupLayers;
- (void)_updateLayers;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)normalImage;
- (id)staleImage;

@end

