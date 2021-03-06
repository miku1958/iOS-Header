//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUArticleNextButton, UIBarButtonItem, UIViewController;
@protocol NUArticleBarButtonItemManagerDelegate;

@interface NUArticleBarButtonItemManager : NSObject
{
    id<NUArticleBarButtonItemManagerDelegate> _delegate;
    UIViewController *_viewController;
    NUArticleNextButton *_nextButton;
    UIBarButtonItem *_shareBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    UIBarButtonItem *_nextBarButtonItem;
}

@property (weak, nonatomic) id<NUArticleBarButtonItemManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIBarButtonItem *doneBarButtonItem; // @synthesize doneBarButtonItem=_doneBarButtonItem;
@property (readonly, nonatomic) UIBarButtonItem *nextBarButtonItem; // @synthesize nextBarButtonItem=_nextBarButtonItem;
@property (readonly, nonatomic) NUArticleNextButton *nextButton; // @synthesize nextButton=_nextButton;
@property (strong, nonatomic) UIBarButtonItem *shareBarButtonItem; // @synthesize shareBarButtonItem=_shareBarButtonItem;
@property (readonly, weak, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (struct CGRect)adjustedFrameForDoneBarButtonItemForTraitCollection:(id)arg1;
- (struct CGRect)adjustedFrameForNextArticleButtonForTraitCollection:(id)arg1;
- (struct CGRect)adjustedFrameForShareBarButtonItemForTraitCollection:(id)arg1;
- (void)applyPageStyleToNextBarButtonItem:(id)arg1;
- (id)createDoneBarButtonItem;
- (id)createFlexibleSpacerBarButtonItem;
- (id)createShareBarButtonItem;
- (void)doDone:(id)arg1;
- (void)doNext:(id)arg1;
- (void)doShare:(id)arg1;
- (id)initWithViewController:(id)arg1;
- (void)positionBarButtonItemsForTraitCollection:(id)arg1;
- (void)sizeBarButtonItemsForTraitCollection:(id)arg1;

@end

