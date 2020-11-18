//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKDevice, FAFamilyCircle, FAFamilyMember, FAProfilePictureStore, NSSManager;
@protocol OS_dispatch_queue;

@interface BPSTinkerSupport : NSObject
{
    FAFamilyCircle *_cachedFamilyCircle;
    FAProfilePictureStore *_profilePictureStore;
    NSSManager *_nssManager;
    NSObject<OS_dispatch_queue> *_queue;
    FAFamilyMember *_currentTinkerMember;
    FAFamilyMember *_pairingParentFamilyMember;
    FAFamilyMember *_organizerParentFamilyMember;
    AKDevice *_currentTinkerAKDevice;
}

@property (strong, nonatomic) FAFamilyCircle *cachedFamilyCircle; // @synthesize cachedFamilyCircle=_cachedFamilyCircle;
@property (strong, nonatomic) AKDevice *currentTinkerAKDevice; // @synthesize currentTinkerAKDevice=_currentTinkerAKDevice;
@property (strong, nonatomic) FAFamilyMember *currentTinkerMember; // @synthesize currentTinkerMember=_currentTinkerMember;
@property (strong, nonatomic) NSSManager *nssManager; // @synthesize nssManager=_nssManager;
@property (strong, nonatomic) FAFamilyMember *organizerParentFamilyMember; // @synthesize organizerParentFamilyMember=_organizerParentFamilyMember;
@property (strong, nonatomic) FAFamilyMember *pairingParentFamilyMember; // @synthesize pairingParentFamilyMember=_pairingParentFamilyMember;
@property (strong, nonatomic) FAProfilePictureStore *profilePictureStore; // @synthesize profilePictureStore=_profilePictureStore;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)cachedOrganizerParentFamilyMember;
- (id)cachedPairingParentFamilyMember;
- (id)cachedProfilePictureForFamilyMember:(id)arg1;
- (id)cachedTinkerAKDevice;
- (id)cachedTinkerFamilyMemeber;
- (id)familyMemberMatchingAccount:(id)arg1 inCircle:(id)arg2;
- (void)fetchFamilyDetails;
- (void)fetchProfilePictures;
- (void)getActiveTinkerFamilyDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getActiveTinkerFamilyMember:(CDUnknownBlockType)arg1;
- (void)getActiveTinkerFamilyMemberDetailsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getActiveTinkerFamilyMemberWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (BOOL)isActiveTinker;
- (void)resetCachedDeviceValues;
- (void)setTinkerFamilyMember:(id)arg1;

@end
