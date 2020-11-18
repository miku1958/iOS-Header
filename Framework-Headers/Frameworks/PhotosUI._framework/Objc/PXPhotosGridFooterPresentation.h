//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate-Protocol.h>
#import <PhotosUICore/PXScrollViewControllerObserver-Protocol.h>

@class NSString, NSTimer, PXGView, PXPhotosGlobalFooterView, PXPhotosLayout, PXPhotosViewModel;
@protocol PXPhotosGridFooterPresentationDelegate;

@interface PXPhotosGridFooterPresentation : NSObject <PXChangeObserver, PXPhotosGlobalFooterViewDelegate, PXScrollViewControllerObserver>
{
    PXPhotosViewModel *_viewModel;
    PXGView *_gridView;
    PXPhotosLayout *_layout;
    BOOL _hasAppearedOnce;
    BOOL _hasReachedInitialPosition;
    PXPhotosGlobalFooterView *_reusableFooterView;
    double _lastUserScrollTime;
    BOOL _didAutoReveal;
    NSTimer *_autoRevealMinimumIdleTimer;
    BOOL _shouldAutoReveal;
    BOOL _wantsFooter;
    id<PXPhotosGridFooterPresentationDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXPhotosGridFooterPresentationDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldAutoReveal; // @synthesize shouldAutoReveal=_shouldAutoReveal;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsFooter; // @synthesize wantsFooter=_wantsFooter;

- (void).cxx_destruct;
- (void)_conditionallyAutoRevealFooterView;
- (void)_conditionallyAutoRevealFooterViewWithLastUserScrollTime:(double)arg1;
- (double)_footerVisibleAmountIncludingSafeAreaInsets:(BOOL)arg1;
- (BOOL)_shouldAutoRevealFooterView;
- (void)_updateFooterView;
- (void)_updateWantsFooter;
- (id)init;
- (id)initWithViewModel:(id)arg1 gridView:(id)arg2 layout:(id)arg3;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2;
- (void)photosGlobalFooterViewDidChangeHeight:(id)arg1;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerWillBeginScrolling:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidScrollToInitialPosition;

@end
