//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTransitItemReferenceDateUpdaterDelegate-Protocol.h>

@class MKMapItem, MKTransitMapItemUpdater, NSError;
@protocol MKMapServiceTicket;

@protocol MKTransitMapItemUpdaterDelegate <MKTransitItemReferenceDateUpdaterDelegate>
- (id<MKMapServiceTicket>)ticketForTransitMapItemUpdater:(MKTransitMapItemUpdater *)arg1;
- (void)transitMapItemUpdater:(MKTransitMapItemUpdater *)arg1 updatedMapItem:(MKMapItem *)arg2 error:(NSError *)arg3;
- (void)transitMapItemUpdater:(MKTransitMapItemUpdater *)arg1 willUpdateMapItem:(MKMapItem *)arg2;
@end
