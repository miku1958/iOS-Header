//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlacesKit/NSObject-Protocol.h>

@class NSSet;

@protocol PXPlacesMapUpdatePlanResult <NSObject>

@property (readonly) NSSet *annotationsToAddImmediately;
@property (readonly) NSSet *annotationsToRedraw;
@property (readonly) NSSet *annotationsToRemoveAfterAnimationHasEnded;
@property (readonly) NSSet *annotationsToRemoveAfterAnimationHasStarted;
@property (readonly) NSSet *annotationsToRemoveImmediately;
@property (readonly) NSSet *annotationsWithUpdatedIndex;
@property (readonly) NSSet *overlaysToAddImmediately;
@property (readonly) NSSet *overlaysToRemoveImmediately;

@end
