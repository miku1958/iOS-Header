//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionReusableView.h>

@class NSArray, NSString, UILabel;

@interface STSHeaderView : UICollectionReusableView
{
    UILabel *_label;
    NSArray *_constraints;
    NSString *_title;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;

@end
