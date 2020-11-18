//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNLabeledCell.h>

@class UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNLinkedCardsCell : CNLabeledCell
{
    id<CNPropertyCellDelegate> _delegate;
    UILabel *_sourceLabel;
    UILabel *_nameLabel;
}

@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (readonly, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;

+ (BOOL)wantsChevron;
- (void).cxx_destruct;
- (id)labelView;
- (void)performDefaultAction;
- (void)setCardGroupItem:(id)arg1;
- (BOOL)shouldPerformDefaultAction;
- (void)updateConstraints;
- (id)valueView;

@end

