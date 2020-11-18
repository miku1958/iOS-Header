//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import <PDFKit/UIScrollViewDelegate-Protocol.h>

@class NSString, PDFScrollViewPrivate;

__attribute__((visibility("hidden")))
@interface PDFScrollView : UIScrollView <UIScrollViewDelegate>
{
    PDFScrollViewPrivate *_private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_centerAlign;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)pdfDocumentView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setDocument:(id)arg1;
- (void)setForcesTopAlignment:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPDFView:(id)arg1;
- (void)updateLayout;
- (id)viewForZoomingInScrollView:(id)arg1;

@end

