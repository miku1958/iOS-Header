//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSTripPreviewsCardView.h>

#import <CarPlaySupport/CPSAlternateRouteSelecting-Protocol.h>

@class CPSAlternateRoutesView, NSString, UIButton;

@interface CPSRoutePreviewsCardView : CPSTripPreviewsCardView <CPSAlternateRouteSelecting>
{
    CPSAlternateRoutesView *_alternatesView;
    UIButton *_goButton;
}

@property (readonly, nonatomic) CPSAlternateRoutesView *alternatesView; // @synthesize alternatesView=_alternatesView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIButton *goButton; // @synthesize goButton=_goButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;
- (id)preferredFocusEnvironments;
- (void)setSelectedTrip:(id)arg1;

@end

