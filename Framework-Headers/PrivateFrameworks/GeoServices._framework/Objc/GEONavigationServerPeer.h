//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEONavdPeer.h>

#import <GeoServices/GEONavigationServerRequestStateXPCInterface-Protocol.h>

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer <GEONavigationServerRequestStateXPCInterface>
{
    GEONavigationServer *_delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) GEONavigationServer *delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestRideSelections;
- (void)requestRouteSummary;
- (void)requestStepIndex;
- (void)requestTransitSummary;
- (void)requestUpdates;

@end

