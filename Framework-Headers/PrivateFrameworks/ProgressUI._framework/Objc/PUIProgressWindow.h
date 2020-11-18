//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CAContext, CALayer, NSString;

@interface PUIProgressWindow : NSObject
{
    BOOL _weCreatedTheContext;
    CAContext *_context;
    struct CGSize _displaySize;
    struct CGSize _framebufferSize;
    float _displayScale;
    float _displayOrientation;
    BOOL _sideways;
    BOOL _renderWithIOSurface;
    float _currentProgress;
    struct CGImage *_appleLogo;
    double _progressXDelta;
    double _progressYDelta;
    double _progressWidth;
    BOOL _forceInverted;
    BOOL _white;
    BOOL _showsProgressBar;
    CALayer *_progressLayer;
    BOOL _showPluginName;
    CALayer *_pluginNameLayer;
    NSString *_pluginName;
    CALayer *_layer;
}

@property (readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;

+ (BOOL)_usesPreBoardAppearance;
+ (void)setUsesPreBoardAppearance;
- (void).cxx_destruct;
- (const char *)_appleTVProductSuffix;
- (void)_collectDisplayInfo;
- (void)_createContext;
- (struct CGImage *)_createImageWithName:(const char *)arg1 scale:(int)arg2 displayHeight:(int)arg3;
- (void)_createLayer;
- (void)_drawPluginNameLayerInContext:(struct CGContext *)arg1;
- (void)_drawProgressLayerInContext:(struct CGContext *)arg1;
- (BOOL)_isNano;
- (void)_layoutScreen;
- (unsigned long long)_nanoDeviceType;
- (int)_nanoMaterial;
- (const char *)_productSuffix;
- (void)_updateIOSurface;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)init;
- (id)initWithForceInverted:(BOOL)arg1;
- (id)initWithOptions:(unsigned long long)arg1 contextLevel:(float)arg2 appearance:(long long)arg3;
- (id)initWithProgressBarVisibility:(BOOL)arg1;
- (id)initWithProgressBarVisibility:(BOOL)arg1 context:(id)arg2;
- (id)initWithProgressBarVisibility:(BOOL)arg1 createContext:(BOOL)arg2 contextLevel:(float)arg3 appearance:(long long)arg4;
- (id)initWithProgressBarVisibility:(BOOL)arg1 level:(float)arg2;
- (id)initWithProgressBarVisibility:(BOOL)arg1 level:(float)arg2 forceInverted:(BOOL)arg3;
- (void)setPluginName:(id)arg1;
- (void)setProgressValue:(float)arg1;
- (void)setVisible:(BOOL)arg1;

@end

