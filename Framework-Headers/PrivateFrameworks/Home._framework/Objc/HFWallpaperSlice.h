//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class NSString, UIImage;

@interface HFWallpaperSlice : NSObject <NSCopying>
{
    long long _type;
    long long _variant;
    UIImage *_image;
    NSString *_identifier;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) long long variant; // @synthesize variant=_variant;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithType:(long long)arg1 variant:(long long)arg2 identifier:(id)arg3 image:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSlicedFromWallpaper:(id)arg1;

@end
