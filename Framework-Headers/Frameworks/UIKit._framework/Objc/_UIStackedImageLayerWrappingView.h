//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@protocol CALayerDelegate;

__attribute__((visibility("hidden")))
@interface _UIStackedImageLayerWrappingView : UIView
{
    id<CALayerDelegate> _actionDelegate;
}

@property (weak, nonatomic) id<CALayerDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;

@end

