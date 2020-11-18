//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CLKDevice, NSMutableArray, UIColor;

@interface NTKPageDotsView : UIView
{
    unsigned long long _numberOfPages;
    unsigned long long _currentPage;
    UIColor *_currentPageColor;
    UIColor *_otherPageColor;
    double _dotDiameter;
    double _dotPadding;
    CLKDevice *_device;
    NSMutableArray *_pageDots;
}

@property (nonatomic) unsigned long long currentPage; // @synthesize currentPage=_currentPage;
@property (strong, nonatomic) UIColor *currentPageColor; // @synthesize currentPageColor=_currentPageColor;
@property (readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property (nonatomic) double dotDiameter; // @synthesize dotDiameter=_dotDiameter;
@property (nonatomic) double dotPadding; // @synthesize dotPadding=_dotPadding;
@property (nonatomic) unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property (strong, nonatomic) UIColor *otherPageColor; // @synthesize otherPageColor=_otherPageColor;
@property (strong, nonatomic) NSMutableArray *pageDots; // @synthesize pageDots=_pageDots;

- (void).cxx_destruct;
- (void)_regenerateDots;
- (void)applyDefaultConfiguration;
- (id)initForDevice:(id)arg1;
- (void)layoutSubviews;
- (id)makePageDot;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

