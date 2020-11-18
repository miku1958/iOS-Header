//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID, UIImage, UISUIActivityImageConfiguration;

__attribute__((visibility("hidden")))
@interface UISUIActivityConfiguration : NSObject <NSSecureCoding>
{
    BOOL _activitySupportsPromiseURLs;
    NSUUID *_activityUUID;
    long long _activityCategory;
    NSString *_activityType;
    NSString *_fallbackActivityType;
    long long _defaultSortGroup;
    unsigned long long _indexInApplicationDefinedActivities;
    NSString *_overrideTitle;
    NSString *_defaultActivityTitle;
    NSString *_positionBeforeActivityType;
    NSString *_activityClassName;
    long long _encodingType;
    UISUIActivityImageConfiguration *_activityImageConfiguration;
    UISUIActivityImageConfiguration *_activitySettingsImageConfiguration;
    struct CGSize _preferredThumbnailSize;
}

@property (readonly, nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property (strong, nonatomic) NSString *activityClassName; // @synthesize activityClassName=_activityClassName;
@property (readonly, nonatomic) UIImage *activityImage; // @dynamic activityImage;
@property (strong, nonatomic) UISUIActivityImageConfiguration *activityImageConfiguration; // @synthesize activityImageConfiguration=_activityImageConfiguration;
@property (strong, nonatomic) UISUIActivityImageConfiguration *activitySettingsImageConfiguration; // @synthesize activitySettingsImageConfiguration=_activitySettingsImageConfiguration;
@property (readonly, nonatomic) BOOL activitySupportsPromiseURLs; // @synthesize activitySupportsPromiseURLs=_activitySupportsPromiseURLs;
@property (readonly, nonatomic) NSString *activityTitle; // @dynamic activityTitle;
@property (readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property (readonly, nonatomic) NSUUID *activityUUID; // @synthesize activityUUID=_activityUUID;
@property (readonly, nonatomic) NSString *defaultActivityTitle; // @synthesize defaultActivityTitle=_defaultActivityTitle;
@property (readonly, nonatomic) long long defaultSortGroup; // @synthesize defaultSortGroup=_defaultSortGroup;
@property (nonatomic) long long encodingType; // @synthesize encodingType=_encodingType;
@property (readonly, nonatomic) NSString *fallbackActivityType; // @synthesize fallbackActivityType=_fallbackActivityType;
@property (readonly, nonatomic) unsigned long long indexInApplicationDefinedActivities; // @synthesize indexInApplicationDefinedActivities=_indexInApplicationDefinedActivities;
@property (strong, nonatomic) NSString *overrideTitle; // @synthesize overrideTitle=_overrideTitle;
@property (readonly, nonatomic) NSString *positionBeforeActivityType; // @synthesize positionBeforeActivityType=_positionBeforeActivityType;
@property (readonly, nonatomic) struct CGSize preferredThumbnailSize; // @synthesize preferredThumbnailSize=_preferredThumbnailSize;
@property (readonly, nonatomic) UIImage *settingsImage;

+ (id)configurationForActivity:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_collectPropertiesFromAttributesOfUnderlyingActivity:(id)arg1;
- (void)_encodeByClassNameWithCoder:(id)arg1;
- (void)_encodeByPropertiesWithCoder:(id)arg1;
- (void)_encodeOverridePropertiesWithCoder:(id)arg1;
- (id)_init;
- (void)_initByLoadingClassNameWithCoder:(id)arg1;
- (void)_initByLoadingOverridePropertiesWithCoder:(id)arg1;
- (void)_initByLoadingPropertiesWithCoder:(id)arg1;
- (void)_validateProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActivity:(id)arg1 encodingType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (void)updateConfigurationWithOverrideTitle:(id)arg1;

@end
