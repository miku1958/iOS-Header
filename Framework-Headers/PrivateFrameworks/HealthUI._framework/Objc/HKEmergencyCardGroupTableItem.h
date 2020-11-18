//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class NSArray, NSMutableArray;

@interface HKEmergencyCardGroupTableItem : HKEmergencyCardTableItem
{
    NSMutableArray *_cumulativeRowOffsets;
    NSArray *_subitems;
}

@property (strong, nonatomic) NSArray *subitems; // @synthesize subitems=_subitems;

- (void).cxx_destruct;
- (void)_getSubitem:(id *)arg1 andSubitemRow:(long long *)arg2 forTableViewRow:(long long)arg3;
- (BOOL)canEditRowAtIndex:(long long)arg1;
- (void)commitEditing;
- (long long)commitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (void)didCommitEditingStyle:(long long)arg1 forRowAtIndex:(long long)arg2;
- (long long)editingStyleForRowAtIndex:(long long)arg1;
- (BOOL)hasPresentableData;
- (long long)numberOfRows;
- (void)setData:(id)arg1;
- (void)setOwningViewController:(id)arg1;
- (BOOL)shouldHighlightRowAtIndex:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (id)titleForFooter;

@end

