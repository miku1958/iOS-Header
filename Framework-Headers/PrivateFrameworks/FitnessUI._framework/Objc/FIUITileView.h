//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSIndexPath, UIColor;

@interface FIUITileView : UIView
{
    unsigned long long _transitioningState;
    UIColor *_backgroundColors[8];
    double _easing;
    NSIndexPath *_indexPath;
    unsigned long long _state;
}

@property (nonatomic) double cornerRadius; // @dynamic cornerRadius;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property double easing; // @synthesize easing=_easing;
@property (strong) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (nonatomic, getter=isTracking) BOOL tracking;

- (void).cxx_destruct;
- (id)_bestBGColor:(unsigned long long)arg1;
- (id)_defaultBackgroundColor;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

