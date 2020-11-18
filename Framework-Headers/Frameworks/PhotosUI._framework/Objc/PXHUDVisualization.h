//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;
@protocol PXHUDVisualizationDelegate;

@interface PXHUDVisualization : NSObject
{
    UIColor *_color;
    NSString *_title;
    id<PXHUDVisualizationDelegate> _delegate;
}

@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (weak, nonatomic) id<PXHUDVisualizationDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)_notifyDelegateVisualizationDidChange;

@end
