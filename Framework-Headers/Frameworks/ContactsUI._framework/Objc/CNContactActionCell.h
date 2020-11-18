//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class CNCardActionGroupItem, CNContactAction, CNTransportButton, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactActionCell : CNLabeledCell
{
    UILabel *_label;
    CNTransportButton *_transportIcon;
}

@property (readonly, nonatomic) CNContactAction *action;
@property (readonly, nonatomic) CNCardActionGroupItem *actionGroupItem;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (strong, nonatomic) CNTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;

+ (BOOL)shouldIndentWhileEditing;
- (void).cxx_destruct;
- (id)labelView;
- (double)minCellHeight;
- (id)rightMostView;
- (void)setCardGroupItem:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (void)tintColorDidChange;
- (id)variableConstraints;

@end
