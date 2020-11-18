//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBFlow.h>

@class NSArray, NSBundle, NSDictionary, NSString, UIImage;

@interface OBPrivacyFlow : OBFlow
{
    NSBundle *_bundle;
    NSString *_splashContentName;
    NSDictionary *_splashPlist;
    BOOL _buttonIconLoaded;
    struct UIImage *_buttonIcon;
    NSString *_buttonTitle;
    NSString *_buttonCaption;
    NSString *_splashTitle;
    NSString *_splashShortTitle;
}

@property (readonly, nonatomic) UIImage *buttonIcon;
@property (readonly, nonatomic) unsigned long long contentVersion;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedButtonCaption;
@property (readonly, nonatomic) NSString *localizedButtonTitle;
@property (readonly, nonatomic) NSArray *localizedContentList;
@property (readonly, nonatomic) NSString *localizedShortTitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic, getter=isPersonallyIdentifiable) BOOL personallyIdentifiable;
@property (readonly, nonatomic) BOOL platformSupported;
@property (readonly, nonatomic) BOOL showInCombinedList;

+ (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
+ (id)flowWithBundle:(id)arg1;
- (void).cxx_destruct;
- (struct UIImage *)_bundleImageNamed:(id)arg1;
- (BOOL)_conformsToRequirement:(id)arg1;
- (BOOL)_conformsToRequirements:(id)arg1;
- (id)_currentPlatform;
- (id)_splashLocalizedStringForKey:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (id)_textForConditionalItem:(id)arg1 language:(id)arg2 preferredDeviceType:(unsigned long long)arg3;
- (id)initWithBundle:(id)arg1;
- (id)initWithSplashContent:(id)arg1;
- (id)localizedButtonCaptionForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedButtonTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedContentListForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedShortTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (id)localizedTitleForLanguage:(id)arg1 preferredDeviceType:(unsigned long long)arg2;
- (void)setButtonIcon:(struct UIImage *)arg1;

@end

