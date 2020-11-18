//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarKit/IAPNavigationDelegate-Protocol.h>

@class IAPNavigation, NSMapTable, NSString;

@interface CARRouteGuidanceiAPSession : NSObject <IAPNavigationDelegate>
{
    NSString *_currentNavigationOwnerIdentifier;
    IAPNavigation *_iapNavigation;
    NSMapTable *_navigationAccessories;
}

@property (strong, nonatomic) NSString *currentNavigationOwnerIdentifier; // @synthesize currentNavigationOwnerIdentifier=_currentNavigationOwnerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IAPNavigation *iapNavigation; // @synthesize iapNavigation=_iapNavigation;
@property (strong, nonatomic) NSMapTable *navigationAccessories; // @synthesize navigationAccessories=_navigationAccessories;
@property (readonly) Class superclass;

+ (id)localizedNameForIdentifier:(id)arg1;
- (void).cxx_destruct;
- (void)IAPNavigationAccessory:(id)arg1 didDisableNavigationUpdatesForComponent:(id)arg2;
- (void)IAPNavigationAccessory:(id)arg1 didEnableNavigationUpdatesForComponent:(id)arg2;
- (void)IAPNavigationAccessoryDidBecomeAvailable:(id)arg1;
- (void)IAPNavigationAccessoryDidBecomeUnavailable:(id)arg1;
- (void)_setupiAPNavigation;
- (void)_updateAccessoryComponentsWithGuidanceInfo:(id)arg1;
- (id)init;
- (void)updateNavigationGuidanceInfo;

@end
