//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImageAsset;

__attribute__((visibility("hidden")))
@interface _UIImageAssetMapEnvelope : NSObject
{
    UIImageAsset *_imageAsset;
    NSString *_assetName;
}

@property (copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property (weak, nonatomic) UIImageAsset *imageAsset; // @synthesize imageAsset=_imageAsset;

+ (id)wrapAsset:(id)arg1;
- (void).cxx_destruct;
- (id)description;

@end
