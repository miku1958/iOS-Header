//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class UIColor, UIImage, UIImageSymbolConfiguration;

@interface UIListContentImageProperties : NSObject <NSCopying, NSSecureCoding>
{
    struct {
        unsigned int hasCustomizedPreferredSymbolConfiguration:1;
        unsigned int hasCustomizedTintColor:1;
        unsigned int hasCustomizedTintColorTransformer:1;
        unsigned int hasCustomizedCornerRadius:1;
        unsigned int hasCustomizedReservedLayoutSize:1;
        unsigned int hasCustomizedMaximumSize:1;
        unsigned int hasCustomizedAccessibilityIgnoresInvertColors:1;
    } _imageFlags;
    BOOL _accessibilityIgnoresInvertColors;
    UIImage *_image;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIColor *_tintColor;
    CDUnknownBlockType _tintColorTransformer;
    double _cornerRadius;
    long long _tintColorTransformerIdentifier;
    struct CGSize _reservedLayoutSize;
    struct CGSize _maximumSize;
}

@property (nonatomic) BOOL accessibilityIgnoresInvertColors;
@property (nonatomic) double cornerRadius;
@property (nonatomic) struct CGSize maximumSize;
@property (copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic) struct CGSize reservedLayoutSize;
@property (strong, nonatomic) UIColor *tintColor;
@property (copy, nonatomic) CDUnknownBlockType tintColorTransformer;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)resolvedTintColorForTintColor:(id)arg1;

@end

