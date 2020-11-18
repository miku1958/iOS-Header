//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSDisplay, NSOrderedSet, UIImage;

@interface XBDisplaySnapshot : NSObject
{
    FBSDisplay *_display;
    NSOrderedSet *_layers;
    BOOL _opaque;
    struct CGSize _snapshotSize;
    double _scale;
    UIImage *_image;
    struct CGImage *_imageRef;
    void *_surfaceRef;
}

@property (readonly, nonatomic) struct CGImage *CGImage;
@property (readonly, nonatomic) void *IOSurface;
@property (readonly, strong, nonatomic) UIImage *UIImage;
@property (readonly, nonatomic, getter=isDataLoaded) BOOL dataLoaded;
@property (readonly, strong, nonatomic) FBSDisplay *display; // @synthesize display=_display;
@property (readonly, copy, nonatomic) NSOrderedSet *layers; // @synthesize layers=_layers;
@property (nonatomic, getter=isOpaque) BOOL opaque; // @synthesize opaque=_opaque;
@property (nonatomic) double scale; // @synthesize scale=_scale;
@property (nonatomic) struct CGSize snapshotSize; // @synthesize snapshotSize=_snapshotSize;

- (double)_scale;
- (struct CGSize)_scaledSnapshotSize;
- (void)_synchronizedCaptureWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)capture;
- (void)dealloc;
- (id)initWithDisplay:(id)arg1 layer:(id)arg2;
- (id)initWithDisplay:(id)arg1 layers:(id)arg2;

@end

