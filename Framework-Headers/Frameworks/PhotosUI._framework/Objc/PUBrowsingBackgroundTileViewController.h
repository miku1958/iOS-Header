//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSString, PUBrowsingViewModel, UIColor, _UIContentUnavailableView;

__attribute__((visibility("hidden")))
@interface PUBrowsingBackgroundTileViewController : PUTileViewController <PUBrowsingViewModelChangeObserver>
{
    BOOL _shouldDisplayEmptyPlaceholder;
    BOOL __needsUpdateColor;
    UIColor *_backgroundColorOverride;
    PUBrowsingViewModel *_viewModel;
    CDUnknownBlockType __nextColorUpdateAnimatorBlock;
    _UIContentUnavailableView *__emptyPlaceholderView;
}

@property (strong, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property (nonatomic, setter=_setNeedsUpdateColor:) BOOL _needsUpdateColor; // @synthesize _needsUpdateColor=__needsUpdateColor;
@property (copy, nonatomic, setter=_setNextColorUpdateAnimatorBlock:) CDUnknownBlockType _nextColorUpdateAnimatorBlock; // @synthesize _nextColorUpdateAnimatorBlock=__nextColorUpdateAnimatorBlock;
@property (strong, nonatomic) UIColor *backgroundColorOverride; // @synthesize backgroundColorOverride=_backgroundColorOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldDisplayEmptyPlaceholder; // @synthesize shouldDisplayEmptyPlaceholder=_shouldDisplayEmptyPlaceholder;
@property (readonly) Class superclass;
@property (strong, nonatomic) PUBrowsingViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)_invalidateColor;
- (void)_invalidateColorWithAnimatorBlock:(CDUnknownBlockType)arg1;
- (void)_updateColorIfNeeded;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (void)applyLayoutInfo:(id)arg1;
- (void)loadView;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

