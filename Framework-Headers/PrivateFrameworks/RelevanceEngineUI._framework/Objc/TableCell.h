//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class REUpNextBaseCell;

@interface TableCell : UITableViewCell
{
    REUpNextBaseCell *_contentCell;
}

@property (strong, nonatomic) REUpNextBaseCell *contentCell; // @synthesize contentCell=_contentCell;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

