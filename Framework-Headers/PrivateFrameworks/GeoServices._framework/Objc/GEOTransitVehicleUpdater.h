//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol GEOTransitVehicleUpdaterDelegate;

@interface GEOTransitVehicleUpdater : NSObject
{
    id<GEOTransitVehicleUpdaterDelegate> _delegate;
    BOOL _active;
    NSSet *_tripIDs;
}

@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (weak, nonatomic) id<GEOTransitVehicleUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSSet *tripIDs; // @synthesize tripIDs=_tripIDs;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

