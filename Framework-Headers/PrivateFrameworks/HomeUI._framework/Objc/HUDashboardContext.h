//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMHome, HMRoom, NSString;

@interface HUDashboardContext : NSObject
{
    BOOL _allowsAdding;
    BOOL _allowsAnnounce;
    BOOL _allowsEditing;
    BOOL _shouldHideHeadline;
    BOOL _shouldHideStatus;
    BOOL _shouldHideStatusBanner;
    BOOL _shouldHideCameras;
    BOOL _shouldHidePlaceholderButtons;
    BOOL _shouldIncludeRoomInAccessoryNames;
    BOOL _onlyShowsFavorites;
    HMHome *_home;
    HMRoom *_room;
    unsigned long long _dashboardType;
}

@property (nonatomic) BOOL allowsAdding; // @synthesize allowsAdding=_allowsAdding;
@property (nonatomic) BOOL allowsAnnounce; // @synthesize allowsAnnounce=_allowsAnnounce;
@property (nonatomic) BOOL allowsEditing; // @synthesize allowsEditing=_allowsEditing;
@property (readonly, nonatomic) unsigned long long dashboardType; // @synthesize dashboardType=_dashboardType;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL onlyShowsFavorites; // @synthesize onlyShowsFavorites=_onlyShowsFavorites;
@property (readonly, nonatomic) HMRoom *room; // @synthesize room=_room;
@property (nonatomic) BOOL shouldHideCameras; // @synthesize shouldHideCameras=_shouldHideCameras;
@property (nonatomic) BOOL shouldHideHeadline; // @synthesize shouldHideHeadline=_shouldHideHeadline;
@property (nonatomic) BOOL shouldHidePlaceholderButtons; // @synthesize shouldHidePlaceholderButtons=_shouldHidePlaceholderButtons;
@property (nonatomic) BOOL shouldHideStatus; // @synthesize shouldHideStatus=_shouldHideStatus;
@property (nonatomic) BOOL shouldHideStatusBanner; // @synthesize shouldHideStatusBanner=_shouldHideStatusBanner;
@property (nonatomic) BOOL shouldIncludeRoomInAccessoryNames; // @synthesize shouldIncludeRoomInAccessoryNames=_shouldIncludeRoomInAccessoryNames;

+ (id)favoritesDashboardForHome:(id)arg1;
+ (id)na_identity;
+ (id)roomDashboardForRoom:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_hasOnlySensorServices:(id)arg1;
- (BOOL)_shouldHideAccessory:(id)arg1 limitedByServiceTypes:(id)arg2;
- (BOOL)_shouldHideMediaProfileContainer:(id)arg1;
- (BOOL)_shouldHideService:(id)arg1 limitedByServiceTypes:(id)arg2;
- (BOOL)_shouldHideServiceGroup:(id)arg1 limitedByServiceTypes:(id)arg2;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1 home:(id)arg2 room:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)shouldHideHomeKitObject:(id)arg1;
- (BOOL)shouldHideHomeKitObject:(id)arg1 limitedByServiceTypes:(id)arg2;

@end

