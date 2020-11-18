//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUICardSectionView.h>

#import <SearchUI/FUFlightViewControllerDelegate-Protocol.h>

@class FUFlightViewController, NSString, NUIContainerBoxView, SFFlightCardSection;

@interface SearchUIFlightCardSectionView : SearchUICardSectionView <FUFlightViewControllerDelegate>
{
    FUFlightViewController *_flightViewController;
    unsigned long long _lastSelectedLegIndex;
}

@property (strong) NUIContainerBoxView *contentView; // @dynamic contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) FUFlightViewController *flightViewController; // @synthesize flightViewController=_flightViewController;
@property (readonly) unsigned long long hash;
@property unsigned long long lastSelectedLegIndex; // @synthesize lastSelectedLegIndex=_lastSelectedLegIndex;
@property (strong) SFFlightCardSection *section; // @dynamic section;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)flightController:(id)arg1 didSelectLeg:(long long)arg2 ofFlight:(long long)arg3;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (id)setupContentView;
- (BOOL)spansFullWidth;
- (void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2;

@end

