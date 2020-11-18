//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFilteredMomentsViewController.h>

#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSString, UIViewController;
@protocol PXGridPresentationNavigationItemDelegate;

__attribute__((visibility("hidden")))
@interface PUPXFilteredMomentsViewController : PUFilteredMomentsViewController <PXChangeObserver>
{
    UIViewController *_containerViewController;
    id<PXGridPresentationNavigationItemDelegate> _navigationItemDelegate;
}

@property (weak, nonatomic) UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PXGridPresentationNavigationItemDelegate> navigationItemDelegate; // @synthesize navigationItemDelegate=_navigationItemDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)getEmptyPlaceholderViewTitle:(id *)arg1 message:(id *)arg2;
- (BOOL)isInPlaces:(id)arg1;
- (void)loadView;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)oneUpPresentationHelperViewController:(id)arg1;
- (void)pu_performBarsVisibilityUpdatesWithAnimationSettings:(struct PUBarAnimationSettings)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (void)viewDidLoad;

@end

