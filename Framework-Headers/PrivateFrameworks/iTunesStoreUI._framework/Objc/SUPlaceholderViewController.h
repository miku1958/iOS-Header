//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUViewController.h>

@class SUGradient, SUGradientView, SULoadingView;

@interface SUPlaceholderViewController : SUViewController
{
    SUGradient *_backgroundGradient;
    SUGradient *_defaultBackgroundGradient;
    BOOL _hideLoadingView;
    SULoadingView *_loadingView;
    SUGradientView *_gradientView;
}

@property (copy, nonatomic) SUGradient *backgroundGradient; // @synthesize backgroundGradient=_backgroundGradient;
@property (copy, nonatomic) SUGradient *defaultBackgroundGradient; // @synthesize defaultBackgroundGradient=_defaultBackgroundGradient;
@property (readonly, nonatomic) SULoadingView *loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;

- (void)_bagDidLoadNotification:(id)arg1;
- (id)_copyActiveGradient;
- (id)_newURLBagBackgroundGradient;
- (void)_reloadBackgroundGradient;
- (void)_reloadLoadingView;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (void)dealloc;
- (id)init;
- (void)loadView;
- (void)parentViewControllerHierarchyDidChange;
- (void)setLoading:(BOOL)arg1;
- (void)setScriptProperties:(id)arg1;

@end

