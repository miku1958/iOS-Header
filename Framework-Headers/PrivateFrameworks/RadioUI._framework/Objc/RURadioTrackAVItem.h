//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RadioUI/RURadioAVItem.h>

@class NSString;

@interface RURadioTrackAVItem : RURadioAVItem
{
    NSString *_assetFlavor;
    NSString *_preferredAssetFlavor;
}

+ (id)_currentPreferredAssetFlavor;
- (void).cxx_destruct;
- (id)_bestRadioTrackAssetWithPreferredAssetFlavor:(id)arg1 availableAssets:(id)arg2;
- (void)_saveDownloadKeyCookie:(id)arg1 forURL:(id)arg2;
- (id)_sinfsByRemovingEmptyPinfsFromSinfs:(id)arg1;
- (id)assetFlavor;
- (BOOL)isValidPlayerSubstituteForItem:(id)arg1;
- (void)loadAssetAndPlayerItem;
- (BOOL)supportsRadioTrackActions;

@end

