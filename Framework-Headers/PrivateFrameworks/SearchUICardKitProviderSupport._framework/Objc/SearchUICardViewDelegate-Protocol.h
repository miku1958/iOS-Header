//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUICardKitProviderSupport/NSObject-Protocol.h>

@class SFCardSection, UIViewController;

@protocol SearchUICardViewDelegate <NSObject>

@optional
- (void)cardViewController:(UIViewController *)arg1 preferredContentSizeDidChange:(struct CGSize)arg2 animated:(BOOL)arg3;
- (UIViewController *)customViewControllerForCardSection:(SFCardSection *)arg1;
- (void)presentViewController:(UIViewController *)arg1;
@end

