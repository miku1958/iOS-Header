//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class STUser, UILabel;

@interface STNoUsageDataView : UIView
{
    STUser *_user;
    UILabel *_noDataDetailTextLabel;
}

@property (readonly, nonatomic) UILabel *noDataDetailTextLabel; // @synthesize noDataDetailTextLabel=_noDataDetailTextLabel;
@property (strong, nonatomic) STUser *user; // @synthesize user=_user;

- (void).cxx_destruct;
- (id)initWithPreferredFontTextStyle:(id)arg1 isWidget:(BOOL)arg2;

@end

