//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class HMHome, HMRoom, NSMutableSet;

@interface HFCameraItemProvider : HFItemProvider
{
    BOOL _onlyShowsFavorites;
    CDUnknownBlockType _filter;
    HMHome *_home;
    HMRoom *_room;
    NSMutableSet *_cameraItems;
}

@property (strong, nonatomic) NSMutableSet *cameraItems; // @synthesize cameraItems=_cameraItems;
@property (copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (nonatomic) BOOL onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property (strong, nonatomic) HMRoom *room; // @synthesize room=_room;

- (void).cxx_destruct;
- (CDUnknownBlockType)_favoriteFilter;
- (CDUnknownBlockType)_roomFilter;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;

@end

