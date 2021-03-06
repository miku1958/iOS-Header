//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>
#import <VideosUI/VUIEpisodeDetailViewDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, VUIEpisodeDetailView, VUIMediaItem, VUIViewControllerContentPresenter;
@protocol VUIEpisodeDetailViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIEpisodeDetailViewController : UIViewController <UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate>
{
    VUIMediaItem *_mediaItem;
    VUIViewControllerContentPresenter *_contentPresenter;
    id<VUIEpisodeDetailViewControllerDelegate> _delegate;
    VUIEpisodeDetailView *_detailView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (strong, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // @synthesize contentPresenter=_contentPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VUIEpisodeDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) VUIEpisodeDetailView *detailView; // @synthesize detailView=_detailView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) VUIMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;

- (void).cxx_destruct;
- (void)_configureNavigationBar;
- (void)didTapPlay;
- (void)dismissPopover;
- (void)dismissTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithMediaItem:(id)arg1;
- (void)loadView;
- (void)reportMetricsPageEvent;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

