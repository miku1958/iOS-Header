//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIView;

@interface HKViewTableViewCell : UITableViewCell
{
    UIView *_hostedView;
}

@property (readonly, nonatomic) UIView *hostedView; // @synthesize hostedView=_hostedView;

- (void).cxx_destruct;
- (void)_pinViewToContent:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setHostedView:(id)arg1;

@end

