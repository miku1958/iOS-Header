//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BrookServices/CLLocationManagerDelegate-Protocol.h>

@class BRKSettings, CLInUseAssertion, CLLocationManager, CNContactStore, NSString, RTRoutineManager;
@protocol BRKRemindersSettingDelegate;

@interface BRKRemindersSettingHelper : NSObject <CLLocationManagerDelegate>
{
    BOOL _coreRoutineAvailable;
    BOOL _locationAvailable;
    BOOL _locationAuthorizationValid;
    id<BRKRemindersSettingDelegate> _delegate;
    BRKSettings *_brookSettings;
    CNContactStore *_contactStore;
    CLLocationManager *_locationManager;
    CLInUseAssertion *_inUseAssertion;
    RTRoutineManager *_routineManager;
}

@property (strong, nonatomic) BRKSettings *brookSettings; // @synthesize brookSettings=_brookSettings;
@property (strong, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (nonatomic, getter=isCoreRoutineAvailable) BOOL coreRoutineAvailable; // @synthesize coreRoutineAvailable=_coreRoutineAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<BRKRemindersSettingDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CLInUseAssertion *inUseAssertion; // @synthesize inUseAssertion=_inUseAssertion;
@property (nonatomic, getter=isLocationAuthorizationValid) BOOL locationAuthorizationValid; // @synthesize locationAuthorizationValid=_locationAuthorizationValid;
@property (nonatomic, getter=isLocationAvailable) BOOL locationAvailable; // @synthesize locationAvailable=_locationAvailable;
@property (strong, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (readonly, nonatomic, getter=isMeCardAvailable) BOOL meCardAvailable;
@property (readonly, nonatomic, getter=areRemindersAvailable) BOOL remindersAvailable;
@property (strong, nonatomic) RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchLocationAuthorizationStatus;
- (void)_fetchLocationAvailableStatus;
- (id)_handwashingLocationManager;
- (void)_isCoreRoutineHomeAvailableWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateWithLocationAuthorizationStatus:(int)arg1 manager:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (id)meContactWithKeysToFetch:(id)arg1;
- (id)remindersFooterTextAndLinkString;
- (void)requestLocationAuthorizationIfNeeded;
- (void)update;

@end
