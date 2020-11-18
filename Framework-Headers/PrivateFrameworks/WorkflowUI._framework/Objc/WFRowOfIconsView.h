//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIStackView;

@interface WFRowOfIconsView : UIView
{
    unsigned long long _maxNumberOfIcons;
    UIStackView *_stackView;
    NSMutableArray *_iconViews;
    double _height;
}

@property (readonly, nonatomic) double height; // @synthesize height=_height;
@property (readonly, nonatomic) NSMutableArray *iconViews; // @synthesize iconViews=_iconViews;
@property (readonly, nonatomic) unsigned long long maxNumberOfIcons; // @synthesize maxNumberOfIcons=_maxNumberOfIcons;
@property (readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;

- (void).cxx_destruct;
- (id)initWithMaxNumberOfIcons:(unsigned long long)arg1 height:(double)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)rebuildSubviewsForItems:(id)arg1;
- (void)setHomeIcons:(id)arg1;
- (void)setIcons:(id)arg1;

@end
