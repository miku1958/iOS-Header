//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSError;

@protocol MapEngineDelegate <NSObject>
- (void)didFinishLoadingData;
- (void)didFinishLoadingDataWithError:(NSError *)arg1;
- (void)didPresent;
- (void)didStartLoadingData;
- (void)didUpdateSceneStatus:(unsigned char)arg1;
- (void)labelManagerDidLayout;
- (void)labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg1;
- (void)nearestVenueDidChange:(const struct Venue *)arg1 building:(const struct VenueBuilding *)arg2;
- (void)selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg1;
- (BOOL)wantsTimerTick;
- (void)willBecomeFullyDrawn;
- (void)willLayoutWithTimestamp:(double)arg1;

@optional
- (void)muninJunctionDidChange:(const struct MuninJunction *)arg1 currentRoad:(const struct MuninRoadEdge *)arg2;
@end
