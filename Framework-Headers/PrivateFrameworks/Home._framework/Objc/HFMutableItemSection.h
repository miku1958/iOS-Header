//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItemSection.h>

@class NSArray, NSAttributedString, NSDictionary, NSString;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;

@interface HFMutableItemSection : HFItemSection
{
}

@property (copy, nonatomic) NSAttributedString *attributedFooterTitle; // @dynamic attributedFooterTitle;
@property (copy, nonatomic) NSString *footerTitle; // @dynamic footerTitle;
@property (weak, nonatomic) id<HFItemSectionAccessoryButtonHeaderDelegate> headerAccessoryButtonDelegate; // @dynamic headerAccessoryButtonDelegate;
@property (copy, nonatomic) NSString *headerAccessoryButtonTitle; // @dynamic headerAccessoryButtonTitle;
@property (copy, nonatomic) NSString *headerTitle; // @dynamic headerTitle;
@property (copy, nonatomic) NSArray *items; // @dynamic items;
@property (copy, nonatomic) NSDictionary *userInfo; // @dynamic userInfo;

- (void)setItems:(id)arg1 filteringToDisplayedItems:(id)arg2;
- (void)setItemsUsingDefaultSortComparator:(id)arg1;

@end

