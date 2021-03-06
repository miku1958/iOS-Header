//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSString, SBFolder, SBFolderControllerAnimationContext, SBFolderIconImageCache, SBHIconImageCache, SBIconPageIndicatorImageSetCache, UIView, _UILegibilitySettings;
@protocol SBFolderControllerDelegate, SBIconListLayoutProvider, SBIconViewProviding, SBNestingViewControllerDelegate;

@interface SBFolderControllerConfiguration : NSObject <NSCopying, BSDescriptionProviding>
{
    SBFolder *_folder;
    long long _orientation;
    unsigned long long _allowedOrientations;
    id<SBIconListLayoutProvider> _listLayoutProvider;
    id<SBIconViewProviding> _iconViewProvider;
    id<SBNestingViewControllerDelegate> _delegate;
    id<SBFolderControllerDelegate> _folderDelegate;
    _UILegibilitySettings *_legibilitySettings;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBIconPageIndicatorImageSetCache *_iconPageIndicatorImageSetCache;
    SBFolderControllerAnimationContext *_animationContext;
    UIView *_headerView;
    double _headerHeight;
    NSString *_originatingIconLocation;
    unsigned long long _userInterfaceLayoutDirectionHandling;
    struct CGRect _initialViewFrame;
}

@property (nonatomic) unsigned long long allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
@property (strong, nonatomic) SBFolderControllerAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBNestingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property (weak, nonatomic) id<SBFolderControllerDelegate> folderDelegate; // @synthesize folderDelegate=_folderDelegate;
@property (strong, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (strong, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property (strong, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // @synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache;
@property (strong, nonatomic) id<SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property (nonatomic) struct CGRect initialViewFrame; // @synthesize initialViewFrame=_initialViewFrame;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (strong, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (copy, nonatomic) NSString *originatingIconLocation; // @synthesize originatingIconLocation=_originatingIconLocation;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long userInterfaceLayoutDirectionHandling; // @synthesize userInterfaceLayoutDirectionHandling=_userInterfaceLayoutDirectionHandling;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

