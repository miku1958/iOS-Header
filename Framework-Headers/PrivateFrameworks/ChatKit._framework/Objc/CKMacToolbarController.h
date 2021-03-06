//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKMacToolbarViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIView, UIVisualEffectView, UIWindowScene;
@protocol CKMacToolbarItemProvider;

@interface CKMacToolbarController : UIViewController <CKMacToolbarViewDelegate>
{
    BOOL _shouldDrawPrimaryBlur;
    BOOL _shouldDrawSecondaryBlur;
    BOOL _isInStandaloneWindow;
    NSString *_sceneSessionIdentifier;
    id<CKMacToolbarItemProvider> _primaryItemProvider;
    id<CKMacToolbarItemProvider> _secondaryItemProvider;
    double _splitViewDividerXPosition;
    UIWindowScene *_windowScene;
    NSMutableDictionary *_toolbarItemCache;
    UIVisualEffectView *_primaryVirtualBackgroundView;
    UIVisualEffectView *_secondaryVirtualBackgroundView;
    double _preferredPrimaryHeight;
    double _preferredSecondaryHeight;
    UIView *_primaryProvidedVirtualView;
    UIView *_secondaryProvidedVirtualView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isInStandaloneWindow; // @synthesize isInStandaloneWindow=_isInStandaloneWindow;
@property (nonatomic) double preferredPrimaryHeight; // @synthesize preferredPrimaryHeight=_preferredPrimaryHeight;
@property (nonatomic) double preferredSecondaryHeight; // @synthesize preferredSecondaryHeight=_preferredSecondaryHeight;
@property (strong, nonatomic) id<CKMacToolbarItemProvider> primaryItemProvider; // @synthesize primaryItemProvider=_primaryItemProvider;
@property (weak, nonatomic) UIView *primaryProvidedVirtualView; // @synthesize primaryProvidedVirtualView=_primaryProvidedVirtualView;
@property (readonly, nonatomic) UIVisualEffectView *primaryVirtualBackgroundView; // @synthesize primaryVirtualBackgroundView=_primaryVirtualBackgroundView;
@property (readonly, weak, nonatomic) NSString *sceneSessionIdentifier; // @synthesize sceneSessionIdentifier=_sceneSessionIdentifier;
@property (strong, nonatomic) id<CKMacToolbarItemProvider> secondaryItemProvider; // @synthesize secondaryItemProvider=_secondaryItemProvider;
@property (weak, nonatomic) UIView *secondaryProvidedVirtualView; // @synthesize secondaryProvidedVirtualView=_secondaryProvidedVirtualView;
@property (readonly, nonatomic) UIVisualEffectView *secondaryVirtualBackgroundView; // @synthesize secondaryVirtualBackgroundView=_secondaryVirtualBackgroundView;
@property (nonatomic) BOOL shouldDrawPrimaryBlur; // @synthesize shouldDrawPrimaryBlur=_shouldDrawPrimaryBlur;
@property (nonatomic) BOOL shouldDrawSecondaryBlur; // @synthesize shouldDrawSecondaryBlur=_shouldDrawSecondaryBlur;
@property (nonatomic) double splitViewDividerXPosition; // @synthesize splitViewDividerXPosition=_splitViewDividerXPosition;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *toolbarItemCache; // @synthesize toolbarItemCache=_toolbarItemCache;
@property (readonly, weak, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;

- (void).cxx_destruct;
- (id)_cachedVirtualViewForProviderType:(long long)arg1;
- (double)_getPreferredHeightForProviderType:(long long)arg1 withDefaultHeight:(double)arg2;
- (id)_providerForType:(long long)arg1;
- (long long)_providerTypeForItemIdentifier:(id)arg1;
- (long long)_providerTypeForPointInsideVirtualView:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setVirtualView:(id)arg1 forProviderType:(long long)arg2;
- (BOOL)_shouldDisAllowTouchesToPassForProviderType:(long long)arg1;
- (void)_updateBackgroundViewsRefreshingViewHeights:(BOOL)arg1;
- (BOOL)_updateFrameWithPreferredHeightsForFrame:(struct CGRect)arg1;
- (void)_updateVirtualViewForProviderType:(long long)arg1;
- (id)_virtualBackgroundViewForProviderType:(long long)arg1;
- (id)initWithScene:(id)arg1 connectingToSession:(id)arg2 inStandaloneWindow:(BOOL)arg3;
- (void)loadView;
- (BOOL)macToolbarView:(id)arg1 shouldAllowTouchesForPoint:(struct CGPoint)arg2 andEvent:(id)arg3;
- (void)reloadToolbarItems;
- (void)removeItemProvider:(id)arg1;
- (void)removeItemProviders;
- (void)removeToolbarItems;
- (void)removeVirtualViewForProvider:(id)arg1;
- (BOOL)reparentToolbarItemsForProvider:(id)arg1;
- (void)updateVirtualViewForProvider:(id)arg1;
- (void)updateWithFrame:(struct CGRect)arg1;
- (void)viewWillLayoutSubviews;

@end

