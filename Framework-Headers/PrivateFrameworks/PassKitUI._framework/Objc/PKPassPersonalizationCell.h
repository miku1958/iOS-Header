//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <PassKitUI/UITextFieldDelegate-Protocol.h>

@class NSString, PKContact, PKPassPersonalizationCellContext;
@protocol PKPassPersonalizationCellDelegate;

@interface PKPassPersonalizationCell : UITableViewCell <UITextFieldDelegate>
{
    PKContact *_contact;
    PKPassPersonalizationCellContext *_context;
    id<PKPassPersonalizationCellDelegate> _delegate;
}

@property (readonly, nonatomic) PKContact *contact; // @synthesize contact=_contact;
@property (readonly, nonatomic) PKPassPersonalizationCellContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<PKPassPersonalizationCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_textFieldFont;
+ (id)_textLabelFont;
+ (double)minimumCellHeight;
+ (double)textLabelWidthForText:(id)arg1;
- (void).cxx_destruct;
- (void)_editableTextFieldChanged:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContext:(id)arg1 andContact:(id)arg2;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
