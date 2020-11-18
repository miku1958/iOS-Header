//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSDictionary;

@interface NSStringDrawingContext : NSObject
{
    double _minimumScaleFactor;
    double _minimumTrackingAdjustment;
    double _actualScaleFactor;
    double _actualTrackingAdjustment;
    struct CGRect _totalBounds;
    NSDictionary *_linkAttributes;
    CUICatalog *_CUICatalog;
    CUIStyleEffectConfiguration *_CUIStyleEffects;
    unsigned long long _numberOfLineFragments;
    unsigned long long _maximumNumberOfLines;
    double _baselineOffset;
    double _scaledBaselineOffset;
    double _scaledLineHeight;
    double _firstBaselineOffset;
    id _layout;
    struct {
        unsigned int _wantsNumberOfLineFragments:1;
        unsigned int _wrapsForTruncationMode:1;
        unsigned int _wantsBaselineOffset:1;
        unsigned int _wantsScaledBaselineOffset:1;
        unsigned int _wantsScaledLineHeight:1;
        unsigned int _drawsDebugBaselines:1;
        unsigned int _cachesLayout:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _activeRenderers:4;
        unsigned int _applicationPlatformContext:3;
    } _sdcFlags;
}

@property (nonatomic) unsigned long long activeRenderers;
@property (nonatomic) double actualScaleFactor; // @synthesize actualScaleFactor=_actualScaleFactor;
@property (readonly, nonatomic) double actualTrackingAdjustment; // @dynamic actualTrackingAdjustment;
@property (nonatomic) double actualTrackingAdjustment; // @synthesize actualTrackingAdjustment=_actualTrackingAdjustment;
@property (nonatomic) double baselineOffset; // @synthesize baselineOffset=_baselineOffset;
@property (nonatomic) BOOL cachesLayout;
@property (strong, nonatomic) CUICatalog *cuiCatalog; // @synthesize cuiCatalog=_CUICatalog;
@property (strong, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects; // @synthesize cuiStyleEffects=_CUIStyleEffects;
@property (nonatomic) BOOL drawsDebugBaselines;
@property (nonatomic) double firstBaselineOffset; // @synthesize firstBaselineOffset=_firstBaselineOffset;
@property (strong, nonatomic) id layout; // @synthesize layout=_layout;
@property (nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property (nonatomic) double minimumScaleFactor; // @synthesize minimumScaleFactor=_minimumScaleFactor;
@property (nonatomic) double minimumTrackingAdjustment; // @dynamic minimumTrackingAdjustment;
@property (nonatomic) unsigned long long numberOfLineFragments; // @synthesize numberOfLineFragments=_numberOfLineFragments;
@property (nonatomic) double scaledBaselineOffset; // @synthesize scaledBaselineOffset=_scaledBaselineOffset;
@property (nonatomic) double scaledLineHeight; // @synthesize scaledLineHeight=_scaledLineHeight;
@property (nonatomic) struct CGRect totalBounds; // @synthesize totalBounds=_totalBounds;
@property (nonatomic) BOOL usesSimpleTextEffects;
@property (nonatomic) BOOL wantsBaselineOffset;
@property (nonatomic) BOOL wantsNumberOfLineFragments;
@property (nonatomic) BOOL wantsScaledBaselineOffset;
@property (nonatomic) BOOL wantsScaledLineHeight;
@property (nonatomic) BOOL wrapsForTruncationMode;

- (long long)applicationFrameworkContext;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setApplicationFrameworkContext:(long long)arg1;

@end

