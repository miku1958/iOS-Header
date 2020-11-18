//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface AVTAvatarAssetLibrary : NSObject
{
    NSMutableArray *_assets[28];
    NSMutableDictionary *_assetsByName[28];
}

+ (id)sharedAvatarAssetLibrary;
- (void).cxx_destruct;
- (id)assetWithType:(long long)arg1 identifier:(id)arg2;
- (id)assetsWithType:(long long)arg1;
- (void)reload;

@end
