//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <QuartzCore/EAGLDrawable-Protocol.h>

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable>
{
    struct _CAEAGLNativeWindow *_win;
}

@property (getter=isAsynchronous) BOOL asynchronous;
@property (copy) NSDictionary *drawableProperties;
@property double inputTime;
@property BOOL lowLatency;
@property unsigned long long maximumDrawableCount;
@property (readonly) struct _EAGLWindowObject *nativeWindow;
@property BOOL presentsWithTransaction;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
- (BOOL)_defersDidBecomeVisiblePostCommit;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)_display;
- (void)dealloc;
- (void)didChangeValueForKey:(id)arg1;
- (void)discardContents;
- (BOOL)isDrawableAvailable;
- (BOOL)isDrawableAvailableInternal;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)setPresentationHandler:(CDUnknownBlockType)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;

@end

