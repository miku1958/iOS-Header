//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITableViewCell.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIMainPrinterUtilityCell : UITableViewCell
{
    NSArray *_supplyLevelViews;
    BOOL _showSupplyDataUnderPrinterName;
    NSArray *_supplies;
}

@property (nonatomic) BOOL showSupplyDataUnderPrinterName; // @synthesize showSupplyDataUnderPrinterName=_showSupplyDataUnderPrinterName;
@property (strong, nonatomic) NSArray *supplies; // @synthesize supplies=_supplies;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

