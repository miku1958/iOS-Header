//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class CLKTextProvider, NTKColoringLabel;

@interface NTKUpNextHeaderView : UICollectionReusableView
{
    NTKColoringLabel *_label;
    CLKTextProvider *_textProvider;
}

@property (copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

