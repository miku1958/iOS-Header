//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FamilyCircleUI/NSObject-Protocol.h>

@class NSArray, UIViewController;
@protocol AAUISpecifierProvider;

@protocol AAUISpecifierProviderDelegate <NSObject>
- (void)reloadSpecifiersForProvider:(id<AAUISpecifierProvider>)arg1 oldSpecifiers:(NSArray *)arg2 animated:(BOOL)arg3;
- (void)showViewController:(UIViewController *)arg1 sender:(id)arg2;
@end
