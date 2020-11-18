//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class NSData;

@interface SBWallpaperImage : UIImage
{
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 wallpaperData:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlatColor:(id)arg1;
- (id)initWithFlatColor:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3;
- (id)initWithImage:(id)arg1 wallpaperData:(id)arg2;
- (id)initWithWallpaperData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)preheatWallpaperData;

@end

