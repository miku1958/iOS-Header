//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface HFTriggerActionsSetsUISummary : NSObject
{
    BOOL _needsIconSort;
    NSString *_uniqueServiceGroupName;
    unsigned long long _numberOfScenes;
    unsigned long long _numberOfStandaloneServices;
    unsigned long long _numberOfMediaAccessories;
    unsigned long long _totalStandaloneAndMediaAccessoriesCount;
    NSString *_firstSceneName;
    NSString *_firstServiceName;
    NSString *_mediaAccessoryName;
    NSMutableArray *_icons;
    NSMutableArray *_iconDescriptors;
    NSMutableDictionary *_iconCounter;
    NSString *_summaryDescription;
    NSArray *_summaryDescriptors;
}

@property (strong, nonatomic) NSString *firstSceneName; // @synthesize firstSceneName=_firstSceneName;
@property (strong, nonatomic) NSString *firstServiceName; // @synthesize firstServiceName=_firstServiceName;
@property (readonly, nonatomic) BOOL hasUniqueServiceGroup;
@property (strong, nonatomic) NSMutableDictionary *iconCounter; // @synthesize iconCounter=_iconCounter;
@property (strong, nonatomic) NSMutableArray *iconDescriptors; // @synthesize iconDescriptors=_iconDescriptors;
@property (strong, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property (strong, nonatomic) NSString *mediaAccessoryName; // @synthesize mediaAccessoryName=_mediaAccessoryName;
@property (nonatomic) BOOL needsIconSort; // @synthesize needsIconSort=_needsIconSort;
@property (readonly, nonatomic) unsigned long long numberOfIcons;
@property (nonatomic) unsigned long long numberOfMediaAccessories; // @synthesize numberOfMediaAccessories=_numberOfMediaAccessories;
@property (nonatomic) unsigned long long numberOfScenes; // @synthesize numberOfScenes=_numberOfScenes;
@property (nonatomic) unsigned long long numberOfStandaloneServices; // @synthesize numberOfStandaloneServices=_numberOfStandaloneServices;
@property (readonly, nonatomic) NSString *summaryDescription; // @synthesize summaryDescription=_summaryDescription;
@property (readonly, nonatomic) NSArray *summaryDescriptors; // @synthesize summaryDescriptors=_summaryDescriptors;
@property (nonatomic) unsigned long long totalStandaloneAndMediaAccessoriesCount; // @synthesize totalStandaloneAndMediaAccessoriesCount=_totalStandaloneAndMediaAccessoriesCount;
@property (strong, nonatomic) NSString *uniqueServiceGroupName; // @synthesize uniqueServiceGroupName=_uniqueServiceGroupName;

- (void).cxx_destruct;
- (id)_descriptionForZeroAccessories;
- (id)_descriptionForZeroScenes;
- (void)_incrementIconCounter:(id)arg1;
- (void)_sortIconDescriptors;
- (void)addIconDescriptor:(id)arg1;
- (void)addMediaAccessoryNamed:(id)arg1;
- (void)addSceneNamed:(id)arg1;
- (void)addServiceNamed:(id)arg1;
- (id)init;
- (id)initWithSummaryText:(id)arg1 summaryIconDescriptors:(id)arg2;
- (id)initWithSummaryText:(id)arg1 summaryIconNames:(id)arg2;
- (id)summaryIconDescriptors;
- (id)summaryIcons;
- (id)summaryText;
- (id)summaryText:(BOOL)arg1;

@end

