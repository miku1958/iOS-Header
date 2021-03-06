//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <DocumentCamera/ICDocCamZoomablePageContentViewDelegate-Protocol.h>
#import <DocumentCamera/UIScrollViewDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UIScrollView;
@protocol ICDocCamZoomablePageContentDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamZoomablePageContentViewController : UIViewController <UIScrollViewDelegate, ICDocCamZoomablePageContentViewDelegate>
{
    BOOL _shouldSetupScalesInViewDidLayoutSubviews;
    id<ICDocCamZoomablePageContentDelegate> _pageContentDelegate;
    UIImage *_image;
    UIImageView *_imageView;
    unsigned long long _pageIndex;
    UIScrollView *_scrollView;
    struct CGSize _prevScrollViewSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (weak, nonatomic) id<ICDocCamZoomablePageContentDelegate> pageContentDelegate; // @synthesize pageContentDelegate=_pageContentDelegate;
@property (nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property (nonatomic) struct CGSize prevScrollViewSize; // @synthesize prevScrollViewSize=_prevScrollViewSize;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) BOOL shouldSetupScalesInViewDidLayoutSubviews; // @synthesize shouldSetupScalesInViewDidLayoutSubviews=_shouldSetupScalesInViewDidLayoutSubviews;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double zoomScale;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)accessibilityPerformEscape;
- (void)doubleTap:(id)arg1;
- (id)init;
- (void)pageContentViewDidPencilDown;
- (void)resetImageCentering;
- (void)resetZoom;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)setupAccessibility;
- (void)setupScales;
- (void)singleTap;
- (unsigned long long)supportedInterfaceOrientations;
- (void)view:(id)arg1 setCenter:(struct CGPoint)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForZoomingInScrollView:(id)arg1;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;

@end

