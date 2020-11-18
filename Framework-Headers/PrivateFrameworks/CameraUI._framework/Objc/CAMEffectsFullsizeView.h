//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMGLView.h>

@class CIFilter;

@interface CAMEffectsFullsizeView : CAMGLView
{
    CIFilter *_selectedFilter;
    long long _selectedFilterType;
    long long _filterType;
}

@property long long filterType; // @synthesize filterType=_filterType;

- (void).cxx_destruct;
- (void)_layoutGLLayer;
- (void)_renderWithInputImage:(id)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3;
- (id)_updateSelectedFilter;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)renderPixelBuffer:(struct __CVBuffer *)arg1 ciContext:(id)arg2 mirrorRendering:(BOOL)arg3;
- (void)setFixedSize:(struct CGSize)arg1;

@end

