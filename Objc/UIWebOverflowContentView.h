//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer;

__attribute__((visibility("hidden")))
@interface UIWebOverflowContentView : UIView
{
    CALayer *_webLayer;
}

@property (strong, nonatomic) CALayer *webLayer; // @synthesize webLayer=_webLayer;

- (void)_setCachedSubviews:(id)arg1;
- (void)dealloc;
- (void)fixUpViewAfterInsertion;
- (id)initWithLayer:(id)arg1;
- (void)replaceLayer:(id)arg1;
- (id)superview;
- (void)willBeRemoved;

@end

