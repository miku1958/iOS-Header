//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SPAssetCacheAssets : NSObject
{
    NSMutableArray *_assets;
}

@property (strong, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;

+ (id)fromProto:(id)arg1;
+ (id)toProto:(id)arg1;
- (void).cxx_destruct;
- (void)addAsset:(id)arg1;
- (id)init;

@end
