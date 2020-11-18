//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <SearchUI/UITabBarControllerDelegate-Protocol.h>

@class NSString;

@interface SearchUITestTabBarController : UITabBarController <UITabBarControllerDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didSelectRowAtIndexPath:(id)arg1;
- (void)didShowTableView;
- (id)initWithResults:(id)arg1 styles:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)updateAppearanceForViewController:(id)arg1;

@end
