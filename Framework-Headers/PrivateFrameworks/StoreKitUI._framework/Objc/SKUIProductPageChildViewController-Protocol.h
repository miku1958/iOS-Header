//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class SKUIProductPageHeaderViewController, UIScrollView;
@protocol SKUIProductPageChildViewControllerDelegate;

@protocol SKUIProductPageChildViewController <NSObject>

@property (weak, nonatomic) id<SKUIProductPageChildViewControllerDelegate> delegate;
@property (strong, nonatomic) SKUIProductPageHeaderViewController *headerViewController;
@property (readonly, nonatomic) UIScrollView *scrollView;

@end

