//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIImage.h>

@class NSString;

@interface SearchUIAppIconImage : SearchUIImage
{
    NSString *_bundleIdentifier;
    unsigned long long _variant;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (nonatomic) unsigned long long variant; // @synthesize variant=_variant;

+ (id)appIconForBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
+ (id)appIconForImage:(id)arg1 variant:(unsigned long long)arg2;
+ (id)appIconForResult:(id)arg1 variant:(unsigned long long)arg2;
+ (unsigned long long)bestVariantForSize:(struct CGSize)arg1;
+ (double)cornerRadiusForVariant:(unsigned long long)arg1;
+ (id)descriptorNameForVariant:(unsigned long long)arg1;
+ (int)iconFormatForVariant:(unsigned long long)arg1;
+ (struct CGSize)sizeForVariant:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)appIconWillChange:(id)arg1;
- (int)defaultCornerRoundingStyle;
- (id)generateImageWithFormat:(int)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1 variant:(unsigned long long)arg2;
- (void)invalidateAppIcon;
- (BOOL)isEqual:(id)arg1;
- (id)loadImage;
- (BOOL)needsTinting;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg1;
- (id)uniqueIdentifier;

@end

