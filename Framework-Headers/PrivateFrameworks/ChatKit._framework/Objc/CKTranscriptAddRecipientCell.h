//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface CKTranscriptAddRecipientCell : UITableViewCell
{
    UILabel *_addLabel;
    UIImageView *_addIcon;
}

@property (strong, nonatomic) UIImageView *addIcon; // @synthesize addIcon=_addIcon;
@property (strong, nonatomic) UILabel *addLabel; // @synthesize addLabel=_addLabel;

+ (double)preferredHeight;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)arg1;

@end
