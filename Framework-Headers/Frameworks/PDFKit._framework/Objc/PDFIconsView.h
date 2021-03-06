//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, PDFPageIconLayer, PDFThumbnailView;

__attribute__((visibility("hidden")))
@interface PDFIconsView : UIView
{
    PDFThumbnailView *_thumbnailView;
    NSMutableArray *_icons;
    PDFPageIconLayer *_activeIcon;
}

- (void).cxx_destruct;
- (int)_iconsLayoutIconCount;
- (struct CGSize)_iconsLayoutSize;
- (void)_updateScrubberAtViewLocation:(struct CGPoint)arg1;
- (void)_updateScrubberForPageIndex:(int)arg1;
- (id)currentPage;
- (void)currentPageChanged:(id)arg1;
- (void)documentChanged:(id)arg1;
- (void)documentMutated:(id)arg1;
- (id)initFromThumbnailView:(id)arg1;
- (void)layoutSubviews;
- (void)pageChanged:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateIconsImages;

@end

