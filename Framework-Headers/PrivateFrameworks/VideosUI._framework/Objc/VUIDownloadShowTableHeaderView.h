//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, VUILabel, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUIDownloadShowTableHeaderView : UITableViewHeaderFooterView
{
    NSString *_headerTitle;
    VUILabel *_titleLabel;
    VUISeparatorView *_separatorView;
}

@property (strong, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property (strong, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property (strong, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(BOOL)arg2;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
