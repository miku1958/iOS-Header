//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMarkerAnnotationView.h>

@class CPImageSet;

@interface CPSPointOfInterestClusterView : MKMarkerAnnotationView
{
    CPImageSet *_imageSet;
}

@property (strong, nonatomic) CPImageSet *imageSet; // @synthesize imageSet=_imageSet;

- (void).cxx_destruct;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUnselected:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)update;

@end
