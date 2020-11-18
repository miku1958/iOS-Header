//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, PKOSVersionRequirementRange, PKPaymentHeroImageSet;

@interface PKPaymentHeroImage : NSObject
{
    NSData *_imageData;
    PKPaymentHeroImageSet *_images;
    BOOL _isBeta;
    NSString *_identifier;
    PKOSVersionRequirementRange *_versionRequirement;
    NSArray *_requiredDeviceFeatures;
    long long _credentialType;
    long long _cardType;
}

@property (readonly, nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property (readonly, nonatomic) long long credentialType; // @synthesize credentialType=_credentialType;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) BOOL isBeta; // @synthesize isBeta=_isBeta;
@property (readonly, nonatomic) NSArray *requiredDeviceFeatures; // @synthesize requiredDeviceFeatures=_requiredDeviceFeatures;
@property (readonly, nonatomic) PKOSVersionRequirementRange *versionRequirement; // @synthesize versionRequirement=_versionRequirement;

- (void).cxx_destruct;
- (void)downloadImageForPreferredLanguages:(id)arg1 scale:(double)arg2 fileDownloader:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)downloadImageWithScale:(double)arg1 fileDownloader:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)hasCachedImageWithScale:(double)arg1;
- (id)imageFilePathForImageModel:(id)arg1;
- (id)imageFilePathOnDiskForPreferredLanguages:(id)arg1 scale:(double)arg2;
- (id)imageForPreferredLanguages:(id)arg1 scale:(double)arg2;
- (id)imageWithScale:(double)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 imageData:(id)arg2 credentialType:(long long)arg3;
- (id)initWithLegacyDictionary:(id)arg1 identifier:(id)arg2;
- (BOOL)isSupportedByDevice:(id)arg1 deviceVersion:(id)arg2 deviceClass:(id)arg3;

@end

