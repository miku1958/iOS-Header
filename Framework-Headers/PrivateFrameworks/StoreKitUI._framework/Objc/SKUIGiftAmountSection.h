//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIGiftTableViewSection.h>

@class NSString, SKUIGiftAmountControl, UIControl;

__attribute__((visibility("hidden")))
@interface SKUIGiftAmountSection : SKUIGiftTableViewSection
{
    SKUIGiftAmountControl *_amountControl;
}

@property (readonly, nonatomic) UIControl *amountControl;
@property (readonly, nonatomic) long long selectedAmount;
@property (readonly, nonatomic) NSString *selectedAmountString;

- (void).cxx_destruct;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (long long)numberOfRowsInSection;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end
