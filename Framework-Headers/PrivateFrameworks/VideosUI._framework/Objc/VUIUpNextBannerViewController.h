//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVAppTemplateImpressionable-Protocol.h>
#import <VideosUI/TVMediaProviding-Protocol.h>
#import <VideosUI/__TVShelfViewControllerDelegate-Protocol.h>

@class IKViewElement, NSString, TVMediaInfo, TVObservableEventController, UIView, _TVShelfViewController;

__attribute__((visibility("hidden")))
@interface VUIUpNextBannerViewController : UIViewController <__TVShelfViewControllerDelegate, TVMediaProviding, TVAppTemplateImpressionable>
{
    BOOL _firstViewAppearance;
    unsigned long long _host;
    IKViewElement *_viewElement;
    _TVShelfViewController *_shelfViewController;
    TVMediaInfo *_selectedMediaInfo;
    TVObservableEventController *_observableEventController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFirstViewAppearance) BOOL firstViewAppearance; // @synthesize firstViewAppearance=_firstViewAppearance;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long host; // @synthesize host=_host;
@property (strong, nonatomic) TVObservableEventController *observableEventController; // @synthesize observableEventController=_observableEventController;
@property (strong, nonatomic) TVMediaInfo *selectedMediaInfo; // @synthesize selectedMediaInfo=_selectedMediaInfo;
@property (strong, nonatomic) _TVShelfViewController *shelfViewController; // @synthesize shelfViewController=_shelfViewController;
@property (readonly) Class superclass;
@property (strong, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property (readonly, nonatomic) UIView *visualEffectView;

- (void).cxx_destruct;
- (id)_focusedMediaInfoForElementAtIndex:(long long)arg1;
- (id)_selectedMediaInfoForEvent:(id)arg1 forElementAtIndex:(long long)arg2;
- (void)addObserver:(id)arg1 forEvent:(id)arg2;
- (void)dealloc;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(unsigned long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forEvent:(id)arg2;
- (void)shelfViewController:(id)arg1 didPlayItemAtIndexPath:(id)arg2;
- (void)shelfViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)shelfViewController:(id)arg1 didSettleOnItemAtIndexPath:(id)arg2;
- (void)updateWithElement:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
