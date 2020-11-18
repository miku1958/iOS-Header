//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TSUQuicklookAssetColorMap : NSObject
{
    NSMutableDictionary *mAssetMap;
    NSString *mAppAssetPath;
}

@property (strong, nonatomic) NSString *appAssetPath; // @synthesize appAssetPath=mAppAssetPath;
@property (strong, nonatomic) NSMutableDictionary *assetMap; // @synthesize assetMap=mAssetMap;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)colorForResource:(id)arg1;
+ (BOOL)hasAppAssets;
+ (id)locatorForSageChartTextureSet:(id)arg1 image:(id)arg2;
+ (id)quicklookAssetMap;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
