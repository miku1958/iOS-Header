//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/XBSnapshotDataProvider-Protocol.h>

@class FBSceneSnapshot, IOSurface, NSString, SBFallbackSnapshotDataProvider, SBSnapshotDataProviderContext, UIImage, XBSnapshotDataProviderContext;

@interface SBSceneSnapshotDataProvider : NSObject <XBSnapshotDataProvider>
{
    FBSceneSnapshot *_snapshot;
    SBSnapshotDataProviderContext *_context;
    double _scaleFactor;
    UIImage *_cachedImage;
    SBFallbackSnapshotDataProvider *_fallbackSnapshotDataProvider;
    IOSurface *_processedSurface;
    BOOL _hasProtectedContent;
}

@property (readonly, strong, nonatomic) XBSnapshotDataProviderContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)IOSurfaceForFormat:(long long)arg1;
- (void)_invalidateSnapshotData;
- (id)fallbackSnapshotDataProvider;
- (id)fetchImageForFormat:(long long)arg1;
- (BOOL)hasProtectedContent;
- (id)initWithSceneSnapshot:(id)arg1 scaleFactor:(double)arg2;

@end

