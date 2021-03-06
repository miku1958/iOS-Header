//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@protocol MTLDevice;

@interface CAMetalLayer : CALayer
{
    struct _CAMetalLayerPrivate *_priv;
}

@property BOOL allowsNextDrawableTimeout;
@property struct CGColorSpace *colorspace;
@property (strong) id<MTLDevice> device;
@property (readonly, nonatomic) unsigned long long displayCompositingInternalStatus;
@property struct CGSize drawableSize;
@property (nonatomic) double drawableTimeoutSeconds;
@property (nonatomic) BOOL exclusiveMode;
@property (nonatomic) BOOL fenceEnabled;
@property BOOL framebufferOnly;
@property (nonatomic) double inputTime;
@property (nonatomic) BOOL lowLatency;
@property unsigned long long maximumDrawableCount;
@property (nonatomic) BOOL nonDefaultColorspace;
@property unsigned long long pixelFormat;
@property (readonly) id<MTLDevice> preferredDevice;
@property BOOL presentsWithTransaction;
@property (nonatomic) BOOL serverSyncEnabled;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)_display;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)discardContents;
- (BOOL)displaySyncEnabled;
- (id)init;
- (BOOL)isDrawableAvailable;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (id)newDrawable;
- (id)nextDrawable;
- (void)removeBackBuffers;
- (void)setColorspace:(struct CGColorSpace *)arg1 nonDefault:(BOOL)arg2;
- (void)setContents:(id)arg1;
- (void)setDisplaySyncEnabled:(BOOL)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;

@end

