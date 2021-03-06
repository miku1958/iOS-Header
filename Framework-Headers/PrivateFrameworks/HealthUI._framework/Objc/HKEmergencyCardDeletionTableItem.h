//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class UITableViewCell;
@protocol HKEmergencyCardDeletionDelegate;

@interface HKEmergencyCardDeletionTableItem : HKEmergencyCardTableItem
{
    UITableViewCell *_cell;
    id<HKEmergencyCardDeletionDelegate> _deletionDelegate;
}

@property (weak, nonatomic) id<HKEmergencyCardDeletionDelegate> deletionDelegate; // @synthesize deletionDelegate=_deletionDelegate;

- (void).cxx_destruct;
- (id)initInEditMode:(BOOL)arg1;
- (struct UIEdgeInsets)separatorInset;
- (BOOL)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (id)title;

@end

