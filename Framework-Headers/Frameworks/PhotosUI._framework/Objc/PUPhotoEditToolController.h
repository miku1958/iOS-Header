//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUI/PUPhotoEditLayoutDynamicAdaptable-Protocol.h>
#import <PhotosUI/PUViewControllerSpecChangeObserver-Protocol.h>
#import <PhotosUI/UIScrollViewDelegate-Protocol.h>

@class NSString, PLPhotoEditAggregateSession, PLPhotoEditMutableModel, PUPhotoEditToolControllerSpec, PUPhotoEditValuesCalculator, UIButton, UIColor, UIImage, UIScrollView, UIView;
@protocol PUPhotoEditToolControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotoEditToolController : UIViewController <PUViewControllerSpecChangeObserver, PUPhotoEditLayoutDynamicAdaptable, UIScrollViewDelegate>
{
    BOOL _performingLiveInteraction;
    long long _layoutOrientation;
    PLPhotoEditMutableModel *_photoEditModel;
    PUPhotoEditValuesCalculator *_valuesCalculator;
    PUPhotoEditToolControllerSpec *_spec;
    id<PUPhotoEditToolControllerDelegate> _delegate;
    PLPhotoEditAggregateSession *_aggregateSession;
    NSString *_localizedName;
    UIImage *_toolbarIcon;
    UIImage *_selectedToolbarIcon;
    unsigned long long _preferredRenderMode;
    UIButton *_preferredAlternateToolbarButton;
    UIScrollView *__toolControllerScrollView;
    UIView *__dummyScrollContentView;
}

@property (strong, nonatomic, setter=_setDummyScrollContentView:) UIView *_dummyScrollContentView; // @synthesize _dummyScrollContentView=__dummyScrollContentView;
@property (strong, nonatomic, setter=_setToolControllerScrollView:) UIScrollView *_toolControllerScrollView; // @synthesize _toolControllerScrollView=__toolControllerScrollView;
@property (readonly, nonatomic) PLPhotoEditAggregateSession *aggregateSession; // @synthesize aggregateSession=_aggregateSession;
@property (readonly, nonatomic) BOOL canResetToDefaultValue;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUPhotoEditToolControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long layoutOrientation;
@property (readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (readonly, nonatomic) NSString *localizedResetToolActionTitle;
@property (readonly, nonatomic, getter=isPerformingLiveInteraction) BOOL performingLiveInteraction; // @synthesize performingLiveInteraction=_performingLiveInteraction;
@property (readonly, nonatomic) PLPhotoEditMutableModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property (readonly, nonatomic) UIButton *preferredAlternateToolbarButton; // @synthesize preferredAlternateToolbarButton=_preferredAlternateToolbarButton;
@property (readonly, copy, nonatomic) UIColor *preferredPreviewBackgroundColor;
@property (readonly, nonatomic) struct UIEdgeInsets preferredPreviewViewInsets;
@property (readonly, nonatomic) unsigned long long preferredRenderMode; // @synthesize preferredRenderMode=_preferredRenderMode;
@property (readonly, nonatomic) UIImage *selectedToolbarIcon; // @synthesize selectedToolbarIcon=_selectedToolbarIcon;
@property (readonly, nonatomic) PUPhotoEditToolControllerSpec *spec; // @synthesize spec=_spec;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIImage *toolbarIcon; // @synthesize toolbarIcon=_toolbarIcon;
@property (readonly, nonatomic) PUPhotoEditValuesCalculator *valuesCalculator; // @synthesize valuesCalculator=_valuesCalculator;
@property (readonly, nonatomic) BOOL wantsDefaultPreviewView;
@property (readonly, nonatomic) BOOL wantsSecondaryToolbarVisible;
@property (readonly, nonatomic) BOOL wantsZoomAndPanEnabled;

- (void).cxx_destruct;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_updateScrollViewCentering;
- (void)_updateTraitCollectionAndLayoutReferenceSize;
- (void)_updateTraitCollectionAndLayoutReferenceSize:(struct CGSize)arg1;
- (void)animateBecomingActiveTool;
- (void)animateResigningActiveTool;
- (void)baseLivePhotoInvalidated;
- (void)basePhotoInvalidated;
- (void)dealloc;
- (void)didBecomeActiveTool;
- (void)didResignActiveTool;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)installLivePhotoPlaybackGestureRecognizer:(id)arg1;
- (BOOL)installTogglePreviewGestureRecognizer:(id)arg1;
- (void)photoEditModelDidChange;
- (void)resetForZoomAndPan;
- (void)resetToDefaultValueAnimated:(BOOL)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setAggregateSession:(id)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setPerformingLiveInteraction:(BOOL)arg1;
- (void)setPreferredAlternateToolbarButton:(id)arg1;
- (void)setPreferredRenderMode:(unsigned long long)arg1;
- (void)setSpec:(id)arg1;
- (void)setupWithPhotoEditModel:(id)arg1 valuesCalculator:(id)arg2;
- (void)specDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewControllerSpec:(id)arg1 didChange:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willBecomeActiveTool;
- (void)willResignActiveTool;

@end

