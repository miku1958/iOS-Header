//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUTextDrawingContext, NSString;

@interface MPUTextDrawingView : UIView
{
    double _cachedDisplayScale;
    MPUTextDrawingContext *_textDrawingContext;
}

@property (readonly, nonatomic) NSString *text;
@property (strong, nonatomic) MPUTextDrawingContext *textDrawingContext; // @synthesize textDrawingContext=_textDrawingContext;

- (void).cxx_destruct;
- (double)_cachedDisplayScale;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

