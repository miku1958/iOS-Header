//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface MKAttributionLabel : UIView
{
    NSAttributedString *_strokeText;
    NSAttributedString *_innerText;
    unsigned long long _mapType;
    BOOL _useDarkText;
}

@property (nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;

- (void).cxx_destruct;
- (id)_attributesWithStroke:(BOOL)arg1;
- (void)_prepareLabel;
- (void)_updateTextColor;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sizeToFit;

@end

