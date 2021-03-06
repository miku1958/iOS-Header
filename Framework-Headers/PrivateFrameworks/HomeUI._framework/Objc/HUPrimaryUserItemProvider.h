//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;
@protocol HFMediaProfileContainer;

@interface HUPrimaryUserItemProvider : HFItemProvider
{
    HMHome *_home;
    id<HFMediaProfileContainer> _mediaProfileContainer;
    NSMutableSet *_userItems;
}

@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property (strong, nonatomic) NSMutableSet *userItems; // @synthesize userItems=_userItems;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1 mediaProfileContainer:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

