//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKRouteActivityProvider.h>

#import <MapKit/UIActivityItemLinkPresentationSource-Protocol.h>

@class GEOComposedRoute, LPLinkMetadata, NSString;

@interface MKRouteLinkPresentationActivityProvider : MKRouteActivityProvider <UIActivityItemLinkPresentationSource>
{
    GEOComposedRoute *_composedRoute;
    LPLinkMetadata *_cachedMetadata;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewControllerLinkPresentationMetadata:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3;
- (id)mapMetadataSpecialization;

@end
