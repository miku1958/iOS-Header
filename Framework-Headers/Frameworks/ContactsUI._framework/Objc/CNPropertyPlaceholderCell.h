//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface CNPropertyPlaceholderCell : CNLabeledCell
{
    UILabel *_label;
}

@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;

+ (BOOL)shouldIndentWhileEditing;
- (void).cxx_destruct;
- (id)labelView;
- (double)minCellHeight;
- (void)setCardGroupItem:(id)arg1;
- (BOOL)shouldPerformDefaultAction;

@end
