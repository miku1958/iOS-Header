//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/UIPageViewControllerDataSource-Protocol.h>
#import <StoreKitUI/UIPageViewControllerDelegate-Protocol.h>
#import <StoreKitUI/UIScrollViewDelegate-Protocol.h>

@class NSMapTable, NSObject, NSString, SKUIGalleryPageComponent, SKUIMediaComponent, SKUIResourceLoader, UIPageControl, UIPageViewController, UITapGestureRecognizer;
@protocol OS_dispatch_source, SKUIEmbeddedMediaViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIGalleryViewController : UIViewController <SKUIArtworkRequestDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate>
{
    SKUIResourceLoader *_artworkLoader;
    NSMapTable *_componentArtworkRequests;
    NSObject<OS_dispatch_source> *_cycleTimer;
    id<SKUIEmbeddedMediaViewDelegate> _embeddedMediaDelegate;
    SKUIGalleryPageComponent *_galleryComponent;
    UIPageControl *_pageIndicator;
    UIPageViewController *_pageViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) id<SKUIEmbeddedMediaViewDelegate> embeddedMediaDelegate; // @synthesize embeddedMediaDelegate=_embeddedMediaDelegate;
@property (readonly, nonatomic) SKUIGalleryPageComponent *galleryComponent; // @synthesize galleryComponent=_galleryComponent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SKUIMediaComponent *selectedMediaComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishPaneAnimation;
- (id)_newViewControllerWithIndex:(long long)arg1;
- (id)_newViewWithMediaComponent:(id)arg1;
- (id)_selectedViewController;
- (void)_showNextPaneAnimated:(BOOL)arg1;
- (void)_startCycleTimer;
- (void)_stopCycleTimer;
- (void)_tapAction:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (id)initWithGalleryComponent:(id)arg1 artworkLoader:(id)arg2;
- (void)loadArtworkForChildComponent:(id)arg1 reason:(long long)arg2 constraintWidth:(double)arg3;
- (void)loadView;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)performActionForSelectedComponentAnimated:(BOOL)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

