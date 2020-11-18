//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEODirectionsRequest, GEOQuickETARequest, GEOQuickETARequester, MKDirectionsRequest;
@protocol MKLocationManagerOperation, OS_dispatch_group;

@interface MKDirections : NSObject
{
    MKDirectionsRequest *_request;
    GEODirectionsRequest *_geoRequest;
    GEOQuickETARequest *_etaRequest;
    GEOQuickETARequester *_etaRequester;
    id<MKLocationManagerOperation> _locationOperation;
    NSObject<OS_dispatch_group> *_waypointsDispatchGroup;
}

@property (readonly, nonatomic, getter=isCalculating) BOOL calculating;

- (void).cxx_destruct;
- (void)_calculateETAWithTraits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_cleanupLocationOperation;
- (void)_establishCurrentLocationAndThen:(CDUnknownBlockType)arg1;
- (void)_performWithValidCurrentLocationAndWaypointsForQuickETA:(BOOL)arg1 traits:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)calculateDirectionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)calculateETAWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1;

@end

