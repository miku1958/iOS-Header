//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHAsset.h>

@interface PHAsset (PhotosUICore)

@property (readonly, nonatomic) long long px_currentVariationType;

+ (id)px_fetchAssetsInArray:(id)arg1;
+ (id)px_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;
+ (id)px_orderedAssetsFromAssets:(id)arg1 sortDescriptors:(id)arg2;
- (struct CGRect)faceAreaRect;
- (struct CGRect)originalFaceAreaRect;
- (id)px_mailingAddressIncludeZipCode:(BOOL)arg1;
- (id)px_postalAddressIncludeZipCode:(BOOL)arg1;
- (id)px_singleLineMailingAddressIncludeZipCode:(BOOL)arg1;
@end

