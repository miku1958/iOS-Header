//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class MKPlaceCardActionsViewController;

@protocol MKPlaceCardActionControllerDelegate <NSObject>
- (void)placeCardActionControllerDidSelectReportAProblem:(MKPlaceCardActionsViewController *)arg1;

@optional
- (void)placeCardActionControllerDidSelectAddPhoto:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToContacts:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToExistingContact:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddToFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectOpenInSkyline:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromSuggestedFavorites:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectSimulateLocation:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectionOpenInPinpoint:(MKPlaceCardActionsViewController *)arg1;
@end

