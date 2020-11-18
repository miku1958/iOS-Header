//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKEmergencyCardFooterCell, NSAttributedString;

@interface HKEmergencyCardFooterTableItem : HKEmergencyCardTableItem
{
    HKEmergencyCardFooterCell *_cell;
    NSAttributedString *_attributedTitleForFooter;
    CDUnknownBlockType _shouldInteractWithURLBlock;
}

@property (strong, nonatomic) NSAttributedString *attributedTitleForFooter; // @synthesize attributedTitleForFooter=_attributedTitleForFooter;
@property (copy, nonatomic) CDUnknownBlockType shouldInteractWithURLBlock; // @synthesize shouldInteractWithURLBlock=_shouldInteractWithURLBlock;

- (void).cxx_destruct;
- (id)_cell;
- (BOOL)hasPresentableData;
- (id)initInEditMode:(BOOL)arg1;
- (struct UIEdgeInsets)separatorInset;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;

@end
