//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class HKAdjustableTapTargetButton;
@protocol HKCDADocumentTableViewCellDelegate;

@interface HKCDADocumentTableViewCell : UITableViewCell
{
    BOOL _showsCheckbox;
    id<HKCDADocumentTableViewCellDelegate> _delegate;
    HKAdjustableTapTargetButton *_checkboxButton;
}

@property (strong, nonatomic) HKAdjustableTapTargetButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (strong, nonatomic) id<HKCDADocumentTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL showsCheckbox; // @synthesize showsCheckbox=_showsCheckbox;

- (void).cxx_destruct;
- (id)_createDocumentCellLabelWithTag:(long long)arg1 fontSizePts:(double)arg2 whiteLevel:(double)arg3 flexibleHeight:(BOOL)arg4;
- (void)_selectedCheckbox:(id)arg1;
- (void)_setDocumentLabelWithTag:(long long)arg1 text:(id)arg2 view:(id)arg3;
- (void)_setupCellStructure;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setCellValuesForDocumentSample:(id)arg1;

@end
