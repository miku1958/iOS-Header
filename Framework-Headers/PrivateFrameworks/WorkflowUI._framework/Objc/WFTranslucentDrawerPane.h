//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <WorkflowUI/WFDrawerPane-Protocol.h>
#import <WorkflowUI/WFDrawerPaneHeaderViewDelegate-Protocol.h>

@class NSString, UISearchBar, UIView, UIVisualEffectView, WFDrawerGrabberView, WFDrawerPaneContainer;
@protocol WFDrawerPaneHeaderView;

@interface WFTranslucentDrawerPane : UIViewController <WFDrawerPaneHeaderViewDelegate, WFDrawerPane>
{
    BOOL _translucent;
    BOOL _roundsTopCorners;
    BOOL _usesVisualEffectView;
    BOOL _candidateForContentCapture;
    WFDrawerPaneContainer *_container;
    UIViewController *_viewController;
    double _bottomContentInset;
    double _topCornerRadius;
    UISearchBar *_searchBar;
    NSString *_title;
    UIView *_titleView;
    UIView<WFDrawerPaneHeaderView> *_activeHeaderView;
    UIView *_contentView;
    NSString *_drawerGroup;
    UIView *_shadowView;
    WFDrawerGrabberView *_grabberView;
    UIVisualEffectView *_visualEffectView;
    UIView *_backgroundView;
    UIView *_backgroundContentView;
}

@property (weak, nonatomic) UIView<WFDrawerPaneHeaderView> *activeHeaderView; // @synthesize activeHeaderView=_activeHeaderView;
@property (weak, nonatomic) UIView *backgroundContentView; // @synthesize backgroundContentView=_backgroundContentView;
@property (weak, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) double bottomContentInset; // @synthesize bottomContentInset=_bottomContentInset;
@property (nonatomic, getter=isCandidateForContentCapture) BOOL candidateForContentCapture; // @synthesize candidateForContentCapture=_candidateForContentCapture;
@property (weak, nonatomic) WFDrawerPaneContainer *container; // @synthesize container=_container;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *drawerGroup; // @synthesize drawerGroup=_drawerGroup;
@property (readonly, nonatomic) struct CGRect grabberAreaBounds;
@property (weak, nonatomic) WFDrawerGrabberView *grabberView; // @synthesize grabberView=_grabberView;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL roundsTopCorners; // @synthesize roundsTopCorners=_roundsTopCorners;
@property (strong, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property (weak, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property (nonatomic) double topCornerRadius; // @synthesize topCornerRadius=_topCornerRadius;
@property (nonatomic, getter=isTranslucent) BOOL translucent; // @synthesize translucent=_translucent;
@property (nonatomic) BOOL usesVisualEffectView; // @synthesize usesVisualEffectView=_usesVisualEffectView;
@property (strong, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property (weak, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;

- (void).cxx_destruct;
- (BOOL)accessibilityPerformEscape;
- (void)didDismissHeaderView:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)installChildViewController:(id)arg1;
- (void)loadView;
- (void)transitionContentForHeight:(double)arg1;
- (void)updateHeaderView;
- (void)updatePaneProperties;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (id)wf_drawerController;
- (id)wf_drawerItem;
- (void)wf_setDrawerController:(id)arg1;
- (void)wf_setDrawerItem:(id)arg1;
- (void)willTransitionToVisibility:(unsigned long long)arg1;

@end

