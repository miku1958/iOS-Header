//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXGRenderer;

@protocol PXGRendererDelegate <NSObject>
- (void)renderer:(id<PXGRenderer>)arg1 viewportSizeWillChange:(struct CGSize)arg2;
- (void)rendererNeedsUpdate:(id<PXGRenderer>)arg1;
- (void)rendererPerformRender:(id<PXGRenderer>)arg1;
@end

