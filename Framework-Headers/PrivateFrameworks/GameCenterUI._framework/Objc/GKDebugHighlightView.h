//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface GKDebugHighlightView : UIView
{
    BOOL _isOval;
    UIColor *_color;
    NSString *_caption;
}

@property (strong, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (nonatomic) BOOL isOval; // @synthesize isOval=_isOval;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;

@end
