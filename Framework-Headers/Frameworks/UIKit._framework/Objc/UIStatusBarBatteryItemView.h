//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class UIImage, UIView, _UILegibilityImageSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarBatteryItemView : UIStatusBarItemView
{
    int _capacity;
    int _state;
    BOOL _batterySaverModeActive;
    UIView *_accessoryView;
    BOOL _cachedImageHasAccessoryImage;
    int _cachedCapacity;
    int _cachedAXHUDCapacity;
    _UILegibilityImageSet *_cachedImageSet;
    unsigned long long _cachedBatteryStyle;
    unsigned long long _cachedAXHUDStyle;
    UIImage *_cachedAXHUDImage;
}

@property (nonatomic) int cachedAXHUDCapacity; // @synthesize cachedAXHUDCapacity=_cachedAXHUDCapacity;
@property (strong, nonatomic) UIImage *cachedAXHUDImage; // @synthesize cachedAXHUDImage=_cachedAXHUDImage;
@property (nonatomic) unsigned long long cachedAXHUDStyle; // @synthesize cachedAXHUDStyle=_cachedAXHUDStyle;
@property (nonatomic) unsigned long long cachedBatteryStyle; // @synthesize cachedBatteryStyle=_cachedBatteryStyle;
@property (nonatomic) int cachedCapacity; // @synthesize cachedCapacity=_cachedCapacity;
@property (nonatomic) BOOL cachedImageHasAccessoryImage; // @synthesize cachedImageHasAccessoryImage=_cachedImageHasAccessoryImage;
@property (strong, nonatomic) _UILegibilityImageSet *cachedImageSet; // @synthesize cachedImageSet=_cachedImageSet;

- (void).cxx_destruct;
- (id)_accessoryImage;
- (struct CGSize)_batteryOffsetWithBackground:(id)arg1;
- (id)_contentsImage;
- (BOOL)_needsAccessoryImage;
- (void)_updateAccessoryImage;
- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (double)extraRightPadding;
- (double)legibilityStrength;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end

