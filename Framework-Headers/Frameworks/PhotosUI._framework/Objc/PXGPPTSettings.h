//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXGPPTSettings : PXSettings
{
    BOOL _useAssetBadgeDecoration;
    long long _numberOfItems;
    long long _numberOfSections;
    long long _numberOfColumns;
    long long _selectionDecorationStlye;
}

@property (nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property (nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property (nonatomic) long long numberOfSections; // @synthesize numberOfSections=_numberOfSections;
@property (nonatomic) long long selectionDecorationStlye; // @synthesize selectionDecorationStlye=_selectionDecorationStlye;
@property (nonatomic) BOOL useAssetBadgeDecoration; // @synthesize useAssetBadgeDecoration=_useAssetBadgeDecoration;

+ (id)allPresetNames;
+ (id)scrollingPresetNames;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)createLayout;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setDefaultValuesWithPresetName:(id)arg1;

@end
