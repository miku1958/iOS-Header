//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKAnnotationView.h>

@class CPImageSet;

@interface CPSPointOfInterestAnnotationView : MKAnnotationView
{
    CPImageSet *_imageSet;
}

@property (strong, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;

+ (struct CGPath *)_createPathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (id)balloonWithText:(id)arg1 traitCollection:(id)arg2;
- (void).cxx_destruct;
- (void)_configure;
- (id)_defaultPOI;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)update;

@end

