//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

@interface SBWallpaperImage : UIImage
{
    long long _variant;
    NSData *_data;
}

@property (readonly, strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) long long variant; // @synthesize variant=_variant;

+ (struct CGImage *)_newBlackWallpaperImage;
+ (id)cachedWallpaperDataForVariant:(long long)arg1;
+ (void)preheatWallpaperDataForVariant:(long long)arg1;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;
- (BOOL)isEqual:(id)arg1;

@end

