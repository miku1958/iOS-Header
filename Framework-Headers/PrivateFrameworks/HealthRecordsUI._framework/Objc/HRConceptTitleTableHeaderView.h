//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;

@interface HRConceptTitleTableHeaderView : UIView
{
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *fontChoices;
    MISSING_TYPE *widthCache;
    MISSING_TYPE *titleCache;
    MISSING_TYPE *bottomExtraSpace;
}

@property (nonatomic) double bottomExtraSpace; // @synthesize bottomExtraSpace;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
