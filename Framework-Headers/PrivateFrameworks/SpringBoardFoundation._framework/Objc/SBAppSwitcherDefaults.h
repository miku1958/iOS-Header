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

@property (readonly, nonatomic) NSArray *legacyRecentApplications; // @dynamic legacyRecentApplications;
@property (strong, nonatomic) NSArray *recentDisplayItemRoles; // @dynamic recentDisplayItemRoles;
@property (strong, nonatomic) NSArray *recentDisplayItems; // @dynamic recentDisplayItems;
@property (readonly, nonatomic, getter=isSpringBoardKillable) BOOL springBoardKillable; // @dynamic springBoardKillable;

- (void)_bindAndRegisterDefaults;
- (void)clearLegacyDefaults;

@end

