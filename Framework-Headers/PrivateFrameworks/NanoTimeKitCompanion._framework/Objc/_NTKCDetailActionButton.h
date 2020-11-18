//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSString;

@interface _NTKCDetailActionButton : UIButton
{
    BOOL _disabled;
    NSString *_disabledReason;
}

@property (readonly, nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly, nonatomic) NSString *disabledReason; // @synthesize disabledReason=_disabledReason;

- (void).cxx_destruct;
- (void)_setTitle:(id)arg1;
- (void)_updateColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDisabled:(BOOL)arg1 forReason:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end

