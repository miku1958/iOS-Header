//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class SKUIClientContext, SKUIColorScheme;
@protocol SKUISwooshViewControllerDelegate;

@interface SKUISwooshViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    id<SKUISwooshViewControllerDelegate> _delegate;
}

@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (copy, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property (weak, nonatomic) id<SKUISwooshViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)deselectAllItems;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (id)indexPathsForVisibleItems;
- (id)popImageViewForItemAtIndex:(long long)arg1;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)unhideImages;

@end

