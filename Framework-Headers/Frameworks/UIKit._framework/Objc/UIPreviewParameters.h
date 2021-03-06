//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UIBezierPath, UIColor;

@interface UIPreviewParameters : NSObject <NSCopying>
{
    NSArray *_textLineRects;
    BOOL _appliesShadow;
    BOOL _hidesSourceViewDuringDropAnimation;
    UIBezierPath *_visiblePath;
    UIBezierPath *_shadowPath;
    UIColor *_backgroundColor;
    long long _previewMode;
    double _textPathCornerRadius;
    struct UIEdgeInsets _textPathInsets;
}

@property (nonatomic) BOOL appliesShadow; // @synthesize appliesShadow=_appliesShadow;
@property (copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) UIBezierPath *effectiveShadowPath;
@property (nonatomic) BOOL hidesSourceViewDuringDropAnimation; // @synthesize hidesSourceViewDuringDropAnimation=_hidesSourceViewDuringDropAnimation;
@property (nonatomic, getter=_previewMode, setter=_setPreviewMode:) long long previewMode; // @synthesize previewMode=_previewMode;
@property (copy, nonatomic) UIBezierPath *shadowPath; // @synthesize shadowPath=_shadowPath;
@property (readonly, nonatomic, getter=_isSingleLineText) BOOL singleLineText;
@property (nonatomic, getter=_textPathCornerRadius, setter=_setTextPathCornerRadius:) double textPathCornerRadius; // @synthesize textPathCornerRadius=_textPathCornerRadius;
@property (nonatomic, getter=_textPathInsets, setter=_setTextPathInsets:) struct UIEdgeInsets textPathInsets; // @synthesize textPathInsets=_textPathInsets;
@property (copy, nonatomic) UIBezierPath *visiblePath; // @synthesize visiblePath=_visiblePath;

- (void).cxx_destruct;
- (id)_initWithMode:(long long)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTextLineRects:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

