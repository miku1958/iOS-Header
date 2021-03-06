//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <ReplayKit/RPVideoOverlayButton-Protocol.h>

@interface RPFlatVideoOverlayButton : UIButton <RPVideoOverlayButton>
{
    long long _style;
    id _target;
    SEL _action;
}

@property (nonatomic) SEL action; // @synthesize action=_action;
@property (weak, nonatomic) id target; // @synthesize target=_target;

- (void).cxx_destruct;
- (id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3;
- (void)_handleTap:(id)arg1;
- (id)_highlightedButtonImage;
- (id)_normalButtonImage;
- (id)initWithStyle:(long long)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
- (long long)style;

@end

