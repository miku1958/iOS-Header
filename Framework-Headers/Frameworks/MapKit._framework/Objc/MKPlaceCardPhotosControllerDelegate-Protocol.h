//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlacePhotosViewController, NSString;

@protocol MKPlaceCardPhotosControllerDelegate <NSObject>

@optional
- (void)placeCardPhotosController:(MKPlacePhotosViewController *)arg1 didSelectViewPhotoWithID:(NSString *)arg2;
- (BOOL)shouldUseSmallPhotosWithPhotosController:(MKPlacePhotosViewController *)arg1;
@end
