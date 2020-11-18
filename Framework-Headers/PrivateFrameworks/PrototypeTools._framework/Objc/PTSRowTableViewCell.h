//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <PrototypeTools/PTSRowObserver-Protocol.h>

@class NSString, PTSRow;
@protocol PTSRowTableViewCellDelegate;

@interface PTSRowTableViewCell : UITableViewCell <PTSRowObserver>
{
    PTSRow *_row;
    id<PTSRowTableViewCellDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PTSRowTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PTSRow *row; // @synthesize row=_row;
@property (readonly) Class superclass;

+ (double)cellHeightForRow:(id)arg1;
+ (long long)cellStyleForRow:(id)arg1;
+ (id)reuseIdentifierForRow:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)rowDidChangeImage:(id)arg1;
- (void)rowDidChangeTitle:(id)arg1;
- (void)rowDidChangeValue:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateCellCharacteristics;
- (void)updateDisplayedContent;
- (void)updateDisplayedValue;

@end

