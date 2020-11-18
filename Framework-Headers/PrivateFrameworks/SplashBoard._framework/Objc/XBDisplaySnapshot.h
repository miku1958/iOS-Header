//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SplashBoard/BSInvalidatable-Protocol.h>

@class FBSDisplayConfiguration, NSOrderedSet, NSString, UIImage;

@interface XBDisplaySnapshot : NSObject <BSInvalidatable>
{
    FBSDisplayConfiguration *_displayConfiguration;
    NSOrderedSet *_layers;
    BOOL _opaque;
    struct CGSize _snapshotSize;
    double _scale;
    UIImage *_image;
    struct CGImage *_imageRef;
    void *_nonProtectedSurfaceRef;
    void *_protectedSurfaceRef;
    BOOL _allowsProtectedContent;
}

@property (readonly, nonatomic) struct CGImage *CGImage;
@property (readonly, nonatomic) void *IOSurface;
@property (readonly, nonatomic) UIImage *UIImage;
@property (nonatomic) BOOL allowsProtectedContent; // @synthesize allowsProtectedContent=_allowsProtectedContent;
@property (readonly, nonatomic, getter=isDataLoaded) BOOL dataLoaded;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // @synthesize displayConfiguration=_displayConfiguration;
@property (readonly, nonatomic) void *fallbackIOSurface;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSOrderedSet *layers; // @synthesize layers=_layers;
@property (nonatomic, getter=isOpaque) BOOL opaque; // @synthesize opaque=_opaque;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (nonatomic) struct CGSize snapshotSize; // @synthesize snapshotSize=_snapshotSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_scale;
- (struct CGSize)_scaledSnapshotSize;
- (void)_synchronizedCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)capture;
- (void)dealloc;
- (id)initWithDisplayConfiguration:(id)arg1 layer:(id)arg2;
- (id)initWithDisplayConfiguration:(id)arg1 layers:(id)arg2;
- (void)invalidate;

@end

