//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>

@class NSMapTable, NSString, PUBrowsingSession;
@protocol PUOneUpAccessoryViewControllersManagerDelegate;

@interface PUOneUpAccessoryViewControllersManager : NSObject <PUBrowsingViewModelChangeObserver>
{
    struct {
        BOOL preventRevealInMomentActionForAssetReference;
    } _delegateRepondsTo;
    PUBrowsingSession *_browsingSession;
    id<PUOneUpAccessoryViewControllersManagerDelegate> _delegate;
    NSMapTable *__accessoryViewControllers;
}

@property (readonly, nonatomic) NSMapTable *_accessoryViewControllers; // @synthesize _accessoryViewControllers=__accessoryViewControllers;
@property (readonly, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUOneUpAccessoryViewControllersManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_accessoryViewTypeForAssetReference:(id)arg1;
- (id)_createAccessoryViewControllerForAssetReference:(id)arg1;
- (void)_invalidateAccessoryViewControllersForAssetReferences:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1;
- (id)accessoryViewControllerForAssetReference:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)assetReferenceForAccessoryViewController:(id)arg1;
- (BOOL)canProvideAccessoryViewControllerForAssetReference:(id)arg1 type:(out long long *)arg2;
- (id)init;
- (id)initWithBrowsingSession:(id)arg1;
- (BOOL)shouldHideToolbarWhenShowingAccessoryViewControllerForAssetReference:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;

@end

