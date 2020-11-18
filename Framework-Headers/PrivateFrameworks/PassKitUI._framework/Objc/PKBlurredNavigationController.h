//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <PassKitUI/PKObservableContentContainer-Protocol.h>

@class NSHashTable, NSString, UIVisualEffectView;

@interface PKBlurredNavigationController : UINavigationController <PKObservableContentContainer>
{
    UIVisualEffectView *_backdropView;
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGSize preferredContentSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_observers;
- (void)addContentContainerObserver:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)removeContentContainerObserver:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
