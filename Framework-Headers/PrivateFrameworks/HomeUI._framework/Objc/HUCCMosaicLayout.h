//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;
@protocol HUCCMosaicOrderable;

@interface HUCCMosaicLayout : NSObject
{
    unsigned long long _layoutType;
    unsigned long long _priority;
    unsigned long long _scenesNeeded;
    unsigned long long _accessoriesNeeded;
    unsigned long long _numberOfFilledItems;
    unsigned long long _numberOfMisses;
    id<HUCCMosaicOrderable> _homeItem;
    NSMutableArray *_scenes;
    NSMutableArray *_accessories;
    NSMutableArray *_fillers;
    NSString *_layoutDescription;
}

@property (strong, nonatomic) NSMutableArray *accessories; // @synthesize accessories=_accessories;
@property (nonatomic) unsigned long long accessoriesNeeded; // @synthesize accessoriesNeeded=_accessoriesNeeded;
@property (readonly, nonatomic) NSArray *arrangedItems;
@property (strong, nonatomic) NSMutableArray *fillers; // @synthesize fillers=_fillers;
@property (strong, nonatomic) id<HUCCMosaicOrderable> homeItem; // @synthesize homeItem=_homeItem;
@property (readonly, nonatomic) BOOL isComplete;
@property (strong, nonatomic) NSString *layoutDescription; // @synthesize layoutDescription=_layoutDescription;
@property (readonly, nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property (readonly, nonatomic) unsigned long long numberOfFilledItems; // @synthesize numberOfFilledItems=_numberOfFilledItems;
@property (nonatomic) unsigned long long numberOfMisses; // @synthesize numberOfMisses=_numberOfMisses;
@property (readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property (strong, nonatomic) NSMutableArray *scenes; // @synthesize scenes=_scenes;
@property (nonatomic) unsigned long long scenesNeeded; // @synthesize scenesNeeded=_scenesNeeded;

+ (id)allLandscapeLayouts;
+ (id)allPortraitLayouts;
+ (unsigned long long)maxItemsNeededForLandscape;
+ (unsigned long long)maxItemsNeededForPortrait;
+ (id)sortDescriptors;
- (void).cxx_destruct;
- (void)_addAccessoryItem:(id)arg1;
- (void)_addFillerItem:(id)arg1;
- (void)_addSceneItem:(id)arg1;
- (void)_registerPossibleMiss;
- (void)_sizeAllItems;
- (void)addItem:(id)arg1;
- (id)description;
- (id)initWithLayoutType:(unsigned long long)arg1;

@end
