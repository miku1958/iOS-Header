//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/JSExport-Protocol.h>

@class NSString, TMLInsets, TMLRect, UIColor, UIImage;

@protocol UIImageJSExports <JSExport>

@property (readonly, nonatomic) id CGImageRef;
@property (copy, nonatomic) NSString *accessibilityHint;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (strong, nonatomic) NSString *accessibilityLanguage;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (copy, nonatomic) NSString *accessibilityValue;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) TMLRect *bounds;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) double width;

- (UIColor *)colorPattern;
- (UIImage *)cropImageToRect:(struct CGRect)arg1;
- (UIImage *)resizableImage:(TMLInsets *)arg1:(long long)arg2;
- (UIImage *)withRenderingMode:(long long)arg1;
@end

