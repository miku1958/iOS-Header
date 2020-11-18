//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpotlightUI/UIInteractionProgressObserver-Protocol.h>
#import <SpotlightUI/UIViewControllerPreviewingDelegate-Protocol.h>

@class NSIndexPath, NSString, SFSearchResult, SPUITableViewController, UITableViewCell, UIView;

@interface SPUIPeekDelegate : NSObject <UIInteractionProgressObserver, UIViewControllerPreviewingDelegate>
{
    BOOL _keyboardShouldReturn;
    BOOL _didPeek;
    BOOL _shouldFadeOutTableView;
    SPUITableViewController *_viewController;
    SFSearchResult *_result;
    NSIndexPath *_indexPath;
    UIView *_hiddenSectionHeader;
    UITableViewCell *_hiddenCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL didPeek; // @synthesize didPeek=_didPeek;
@property (readonly) unsigned long long hash;
@property (strong) UITableViewCell *hiddenCell; // @synthesize hiddenCell=_hiddenCell;
@property (strong) UIView *hiddenSectionHeader; // @synthesize hiddenSectionHeader=_hiddenSectionHeader;
@property (strong) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property BOOL keyboardShouldReturn; // @synthesize keyboardShouldReturn=_keyboardShouldReturn;
@property (strong) SFSearchResult *result; // @synthesize result=_result;
@property BOOL shouldFadeOutTableView; // @synthesize shouldFadeOutTableView=_shouldFadeOutTableView;
@property (readonly) Class superclass;
@property (weak) SPUITableViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint)arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)fillParentViewController:(id)arg1 withChild:(id)arg2;
- (id)initWithViewController:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (void)prepareForPreviewAtIndexPath:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)showSectionHeader;

@end
