//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSArray;

@interface SBAppSwitcherDefaults : SBAbstractSpringBoardDefaultDomain
{
}

@property (nonatomic) unsigned long long bottomEdgeGestureSwipeCount; // @dynamic bottomEdgeGestureSwipeCount;
@property (readonly, nonatomic) NSArray *legacyRecentApplications; // @dynamic legacyRecentApplications;
@property (readonly, nonatomic) NSArray *legacyRecentDisplayItemRoles; // @dynamic legacyRecentDisplayItemRoles;
@property (readonly, nonatomic) NSArray *legacyRecentDisplayItems; // @dynamic legacyRecentDisplayItems;
@property (strong, nonatomic) NSArray *recentsPlistRepresentation; // @dynamic recentsPlistRepresentation;
@property (readonly, nonatomic, getter=isSpringBoardKillable) BOOL springBoardKillable; // @dynamic springBoardKillable;
@property (readonly, nonatomic, getter=areTrackpadSwitcherGesturesEnabled) BOOL trackpadSwitcherGesturesEnabled; // @dynamic trackpadSwitcherGesturesEnabled;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end

