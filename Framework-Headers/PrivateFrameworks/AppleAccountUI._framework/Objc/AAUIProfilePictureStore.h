//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AAGrandSlamSigner, ABMonogrammer, ACAccount, ACAccountStore, NSOperationQueue;

@interface AAUIProfilePictureStore : NSObject
{
    ACAccount *_account;
    ACAccountStore *_accountStore;
    AAGrandSlamSigner *_grandSlamSigner;
    ABMonogrammer *_monogrammer;
    NSOperationQueue *_networkingQueue;
    BOOL _didBeginUsingAddressBookSingleton;
    double _pictureDiameter;
    long long _pictureStyle;
}

@property (nonatomic) double pictureDiameter; // @synthesize pictureDiameter=_pictureDiameter;
@property (nonatomic) long long pictureStyle; // @synthesize pictureStyle=_pictureStyle;

- (void).cxx_destruct;
- (id)_correctlySizedImageFromImage:(id)arg1;
- (id)_fallbackProfilePictureForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)_familyMember:(id)arg1 rawImageAndCropRect:(CDUnknownBlockType)arg2;
- (id)_familyMemberPersonPicture:(id)arg1;
- (void)_fetchAndCacheRawImageAndCropRectWithRequest:(id)arg1 personID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProfilePictureForAccountOwnerFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProfilePictureForFamilyMemberFromServer:(id)arg1 serverCacheTag:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProfilePictureSupersetWithRequest:(id)arg1 personID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_fetchProfilePictureWithRequest:(id)arg1 personID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_invalidateMonogrammer;
- (id)_meCardPicture;
- (void)_meCardRawImageAndCropRect:(CDUnknownBlockType)arg1;
- (id)_monogramPersonImage:(void *)arg1;
- (id)_monogrammer;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMember:(id)arg1;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberEmailAddress:(id)arg1;
- (void *)_onAddressBookQueue_copyPersonWithImageDataMatchingFamilyMemberFirstAndLastNames:(id)arg1;
- (BOOL)_onAddressBookQueue_peopleLinkedToMeCardContainsRecordID:(int)arg1;
- (BOOL)_onAddressBookQueue_personSyncsWithiCloud:(void *)arg1;
- (id)_profilePictureForFamilyMemberWithoutMonogramFallback:(id)arg1;
- (id)_profilePictureForPicture:(id)arg1 crop:(BOOL)arg2 cropRect:(struct CGRect)arg3 cacheable:(BOOL)arg4;
- (void)_updateServerProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;
- (void)_updateServerProfilePictureWithRequest:(id)arg1;
- (id)cacheablePictureForPicture:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)dealloc;
- (void)fetchProfilePictureForAccountOwner:(CDUnknownBlockType)arg1;
- (void)fetchProfilePictureForFamilyMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRawImageAndCropRectForAccountOwner:(CDUnknownBlockType)arg1;
- (void)fetchRawImageAndCropRectForFamilyMember:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithAppleAccount:(id)arg1 grandSlamAccount:(id)arg2 accountStore:(id)arg3;
- (id)initWithAppleAccount:(id)arg1 grandSlamSigner:(id)arg2;
- (id)initWithAppleAccount:(id)arg1 store:(id)arg2;
- (id)initWithGrandSlamSigner:(id)arg1;
- (id)profilePictureForAccountOwner;
- (id)profilePictureForAccountOwnerWithoutMonogramFallback;
- (id)profilePictureForFamilyMember:(id)arg1;
- (id)profilePictureForFamilyMemberWithFirstName:(id)arg1 lastName:(id)arg2 email:(id)arg3;
- (id)profilePictureForPicture:(id)arg1;
- (id)profilePictureForPicture:(id)arg1 cropRect:(struct CGRect)arg2;
- (void)setProfilePictureForAccountOwner:(id)arg1;
- (void)setProfilePictureForAccountOwner:(id)arg1 cropRect:(id)arg2;

@end

