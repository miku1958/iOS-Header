//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface AVTAvatarAssetLibrary : NSObject
{
    NSMutableArray *_assetsByType[13];
    NSMutableDictionary *_assets;
}

+ (id)sharedAvatarAssetLibrary;
- (void).cxx_destruct;
- (id)assetWithUID:(id)arg1;
- (id)assetsWithType:(long long)arg1;
- (id)assetsWithType:(long long)arg1 ContainingString:(id)arg2;
- (void)loadAssetWithPath:(id)arg1 type:(long long)arg2 inPackID:(id)arg3;
- (void)loadAssetsWithPackID:(id)arg1 inFolder:(id)arg2;
- (void)reload;

@end

