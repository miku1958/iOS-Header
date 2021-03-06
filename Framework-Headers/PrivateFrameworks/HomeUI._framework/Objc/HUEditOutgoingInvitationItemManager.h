//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemManager.h>

#import <HomeUI/HUUserItemManager-Protocol.h>

@class HFStaticItem, HMOutgoingHomeInvitation, NSString;

@interface HUEditOutgoingInvitationItemManager : HFItemManager <HUUserItemManager>
{
    HFStaticItem *_inviteAgainItem;
    HFStaticItem *_removeItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HFStaticItem *inviteAgainItem; // @synthesize inviteAgainItem=_inviteAgainItem;
@property (readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation;
@property (strong, nonatomic) HFStaticItem *removeItem; // @synthesize removeItem=_removeItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_removeTitleForInvitationState:(long long)arg1;

@end

