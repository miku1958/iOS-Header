//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class HFCroppedWallpaperInfo, NSString;

@interface HFWallpaper : NSObject <NSCopying>
{
    long long _type;
    HFCroppedWallpaperInfo *_cropInfo;
    NSString *_assetIdentifier;
}

@property (readonly, copy, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property (copy, nonatomic) HFCroppedWallpaperInfo *cropInfo; // @synthesize cropInfo=_cropInfo;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;

+ (struct CGSize)size;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(long long)arg1 assetIdentifier:(id)arg2 cropInfo:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)sliceIdentifierForVariant:(long long)arg1;
- (id)wallpaperIdentifier;

@end

