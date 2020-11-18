//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActivityAchievements/ACHTemplateSource-Protocol.h>

@class ACHBackCompatRemoteAchievementAvailabilityKeyWriting, ACHMobileAssetProvider, NSDictionary, NSString;
@protocol ACHTemplateSourceDelegate, OS_dispatch_queue;

@interface ACHRemoteTemplateSource : NSObject <ACHTemplateSource>
{
    NSObject<ACHTemplateSourceDelegate> *delegate;
    ACHMobileAssetProvider *_mobileAssetProvider;
    ACHBackCompatRemoteAchievementAvailabilityKeyWriting *_backCompatAvailabilityKeyWriter;
    NSDictionary *_resourceAssetURLsByUniqueName;
    NSDictionary *_stickerAssetURLsByUniqueName;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) ACHBackCompatRemoteAchievementAvailabilityKeyWriting *backCompatAvailabilityKeyWriter; // @synthesize backCompatAvailabilityKeyWriter=_backCompatAvailabilityKeyWriter;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (strong, nonatomic) ACHMobileAssetProvider *mobileAssetProvider; // @synthesize mobileAssetProvider=_mobileAssetProvider;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSDictionary *resourceAssetURLsByUniqueName; // @synthesize resourceAssetURLsByUniqueName=_resourceAssetURLsByUniqueName;
@property (readonly, nonatomic) long long runCadence;
@property (strong, nonatomic) NSDictionary *stickerAssetURLsByUniqueName; // @synthesize stickerAssetURLsByUniqueName=_stickerAssetURLsByUniqueName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addURLsByUniqueNameToDictionary:(id)arg1 fromAsset:(id)arg2;
- (id)_resourceAssetURLForTemplate:(id)arg1;
- (id)initWithMobileAssetProvider:(id)arg1 backCompatWriter:(id)arg2;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (BOOL)sourceShouldRunForDate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

