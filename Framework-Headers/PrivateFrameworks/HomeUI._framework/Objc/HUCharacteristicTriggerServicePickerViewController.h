//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUInstructionsTableViewController.h>

@class HFCharacteristicTriggerBuilder, HUCharacteristicTriggerServicePickerContentViewController;
@protocol HUTriggerEditorDelegate;

@interface HUCharacteristicTriggerServicePickerViewController : HUInstructionsTableViewController
{
}

@property (readonly, nonatomic) HFCharacteristicTriggerBuilder *characteristicTriggerBuilder;
@property (weak, nonatomic) id<HUTriggerEditorDelegate> delegate;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, nonatomic) HUCharacteristicTriggerServicePickerContentViewController *servicePickerContentViewController;
@property (readonly, nonatomic) unsigned long long source;

+ (BOOL)adoptsDefaultGridLayoutMargins;
+ (BOOL)canPickServicesFromSource:(unsigned long long)arg1 home:(id)arg2;
+ (unsigned long long)sourceForCharacteristicTriggerBuilder:(id)arg1;
- (id)initWithCharacteristicTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 source:(unsigned long long)arg3 delegate:(id)arg4;
- (id)initWithInstructionsItem:(id)arg1 contentViewController:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4;
- (void)viewDidLoad;

@end
