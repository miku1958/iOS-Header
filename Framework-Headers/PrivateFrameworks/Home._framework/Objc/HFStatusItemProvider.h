//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFStaticItemProvider.h>

@class HMHome, HMRoom;

@interface HFStatusItemProvider : HFStaticItemProvider
{
    HMHome *_home;
    HMRoom *_room;
}

@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) HMRoom *room; // @synthesize room=_room;

+ (id)_statusItemClasses;
+ (BOOL)hasStatusItemForServiceType:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)initWithItems:(id)arg1;

@end
