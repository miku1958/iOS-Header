//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol _UIActivityViewControllerContentControllerAPI <NSObject>
- (void)cleanupWithSelectedActivityType:(NSString *)arg1;
- (void)createContentViewControllersWithActivityItems:(NSArray *)arg1 availableActivities:(NSArray *)arg2 excludedActivityTypes:(NSArray *)arg3 includedActivityTypes:(NSArray *)arg4 excludedActivityCategories:(long long)arg5 sourceIsManaged:(BOOL)arg6 allowsEmbedding:(BOOL)arg7;
- (double)displayHeight;
- (BOOL)hasAirDrop;
- (void)invalidateLayout;
- (void)reloadImageForActivityType:(NSString *)arg1;
- (void)setDarkStyleOnLegacyApp:(BOOL)arg1;
- (void)setNeedsRequestingSharedItems;
- (void)setOtherActivityViewPresented:(BOOL)arg1;
- (void)setSharedItemsAvailable:(BOOL)arg1;
- (void)updateActivities:(NSArray *)arg1 animated:(BOOL)arg2;
- (struct CGSize)updatePreferredContentSizeWithWidth:(double)arg1;
@end

