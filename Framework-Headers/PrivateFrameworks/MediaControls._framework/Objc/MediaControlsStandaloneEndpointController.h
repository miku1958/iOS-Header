//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaControls/MediaControlsEndpointController.h>

#import <MediaControls/MPAVRoutingControllerDelegate-Protocol.h>

@class MPAVRoutingController, NSString;

@interface MediaControlsStandaloneEndpointController : MediaControlsEndpointController <MPAVRoutingControllerDelegate>
{
    MPAVRoutingController *_routingController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithEndpoint:(id)arg1;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAutomaticResponseLoading:(BOOL)arg1;

@end

