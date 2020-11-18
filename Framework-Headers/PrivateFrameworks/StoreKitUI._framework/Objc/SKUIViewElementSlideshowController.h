//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUISlideshowViewControllerDataSource-Protocol.h>
#import <StoreKitUI/SKUISlideshowViewControllerDelegate-Protocol.h>

@class NSMutableArray, NSString, SKUIIPhoneSlideshowViewController, SKUISlideshowViewController, SKUIViewElementLayoutContext;
@protocol SKUIViewElementSlideshowDelegate;

@interface SKUIViewElementSlideshowController : NSObject <SKUISlideshowViewControllerDataSource, SKUISlideshowViewControllerDelegate>
{
    id<SKUIViewElementSlideshowDelegate> _delegate;
    SKUIViewElementLayoutContext *_layoutContext;
    NSMutableArray *_lockups;
    SKUISlideshowViewController *_padViewController;
    SKUIIPhoneSlideshowViewController *_phoneViewController;
    long long _selectedIndex;
    NSString *_title;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIViewElementSlideshowDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SKUIViewElementLayoutContext *layoutContext; // @synthesize layoutContext=_layoutContext;
@property (readonly, nonatomic) long long numberOfSlideshowItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithShelf:(id)arg1 selectedLockup:(id)arg2;
- (long long)numberOfItemsInSlideshowViewController:(id)arg1;
- (void)presentFromParentViewController:(id)arg1;
- (id)slideshowViewController:(id)arg1 imageAtIndex:(long long)arg2;
- (id)slideshowViewController:(id)arg1 imageURLAtIndex:(long long)arg2 size:(struct CGSize *)arg3;
- (void)slideshowViewControllerDidFinish:(id)arg1;

@end

