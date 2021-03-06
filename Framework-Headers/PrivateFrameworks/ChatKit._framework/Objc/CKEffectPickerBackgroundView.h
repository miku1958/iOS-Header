//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, CALayer, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface CKEffectPickerBackgroundView : UIView
{
    UIVisualEffectView *_effectView;
    CALayer *_blueContrastLayer;
    CABackdropLayer *_backdrop;
}

@property (strong, nonatomic) CABackdropLayer *backdrop; // @synthesize backdrop=_backdrop;
@property (strong, nonatomic) CALayer *blueContrastLayer; // @synthesize blueContrastLayer=_blueContrastLayer;
@property (strong, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateBackgroundVisualEffect;

@end

