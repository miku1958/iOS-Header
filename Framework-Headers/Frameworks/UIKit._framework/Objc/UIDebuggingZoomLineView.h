//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface UIDebuggingZoomLineView : UIView
{
    unsigned long long _direction;
    UILabel *_lineLabel;
    struct CGPoint _start;
    struct CGPoint _end;
    struct CGRect _rect;
}

@property (nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property (nonatomic) struct CGPoint end; // @synthesize end=_end;
@property (strong, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property (nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property (nonatomic) struct CGPoint start; // @synthesize start=_start;

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateLabelFrame;

@end

