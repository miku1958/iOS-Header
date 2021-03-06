//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class NSString, UITableViewCell;
@protocol HKDataMetadataDeletionSectionDelegate;

@interface HKDataMetadataDeletionSection : HKDataMetadataSection
{
    BOOL _enabled;
    id<HKDataMetadataDeletionSectionDelegate> _delegate;
    UITableViewCell *_cell;
    NSString *_title;
}

@property (strong, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property (weak, nonatomic) id<HKDataMetadataDeletionSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)_updateCellForEnabledState;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (unsigned long long)numberOfRowsInSection;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;

@end

