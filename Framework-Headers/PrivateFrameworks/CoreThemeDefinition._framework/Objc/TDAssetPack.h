//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class CUIMutableCommonAssetStorage, NSSet, NSString;

@interface TDAssetPack : NSObject <NSCopying>
{
    BOOL wasModified;
    NSSet *tags;
    NSString *outputPath;
    CUIMutableCommonAssetStorage *assetStore;
    NSString *assetPackIdentifier;
}

@property (copy, nonatomic) NSString *assetPackIdentifier; // @synthesize assetPackIdentifier;
@property (strong) CUIMutableCommonAssetStorage *assetStore; // @synthesize assetStore;
@property (copy, nonatomic) NSString *outputPath; // @synthesize outputPath;
@property (strong, nonatomic) NSSet *tags; // @synthesize tags;
@property (nonatomic) BOOL wasModified; // @synthesize wasModified;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end
