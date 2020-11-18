//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel, UITextView, UIView;

@interface CKTranscriptRecipientsHeaderFooterView : UITableViewHeaderFooterView
{
    UILabel *_headerLabel;
    UILabel *_preceedingSectionFooterLabel;
    UITextView *_locationSharingTextView;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    double _margin;
}

@property (strong, nonatomic) UIView *bottomSeparator; // @synthesize bottomSeparator=_bottomSeparator;
@property (strong, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property (strong, nonatomic) UITextView *locationSharingTextView; // @synthesize locationSharingTextView=_locationSharingTextView;
@property (nonatomic) double margin; // @synthesize margin=_margin;
@property (strong, nonatomic) UILabel *preceedingSectionFooterLabel; // @synthesize preceedingSectionFooterLabel=_preceedingSectionFooterLabel;
@property (strong, nonatomic) UIView *topSeparator; // @synthesize topSeparator=_topSeparator;

+ (id)identifier;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

