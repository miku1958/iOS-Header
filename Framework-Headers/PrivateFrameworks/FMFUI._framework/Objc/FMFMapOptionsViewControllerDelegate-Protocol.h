//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMFUI/NSObject-Protocol.h>

@class MKMapView;

@protocol FMFMapOptionsViewControllerDelegate <NSObject>
- (void)_dismiss:(id)arg1;
- (void)mapTypeChanged:(unsigned long long)arg1;
- (MKMapView *)mapView;
- (void)openInMapsButtonTapped:(id)arg1;
@end

