//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/NSUserActivity.h>

@class NSNumber, NSUUID, _SFNavigationIntent;

@interface NSUserActivity (SafariServicesExtras)

@property (readonly, nonatomic) NSNumber *_sf_windowCreationMode;
@property (readonly, nonatomic) _SFNavigationIntent *_sf_windowCreationNavigationIntent;
@property (readonly, nonatomic) NSUUID *_sf_windowCreationRecentlyClosedTabUUID;
@property (readonly, nonatomic) NSUUID *_sf_windowCreationSourceBrowserControllerUUID;
@property (readonly, nonatomic) NSUUID *_sf_windowCreationTabUUID;

+ (id)_sf_windowCreationAcitivtyFromSceneConnectionOptions:(id)arg1;
+ (id)_sf_windowCreationActivityWithMode:(long long)arg1;
+ (id)_sf_windowCreationActivityWithNavigationIntent:(id)arg1;
+ (id)_sf_windowCreationActivityWithRecentlyClosedTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
+ (id)_sf_windowCreationActivityWithTabUUID:(id)arg1 browserControllerUUID:(id)arg2;
- (void)_sf_invalidateWindowCreationData;
- (id)sf_windowCreationNavigationIntentID;
@end
