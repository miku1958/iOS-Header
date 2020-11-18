//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFOutgoingHomeInvitationItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    HMHome *_home;
    NSMutableSet *_outgoingInvites;
}

@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) NSMutableSet *outgoingInvites; // @synthesize outgoingInvites=_outgoingInvites;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

