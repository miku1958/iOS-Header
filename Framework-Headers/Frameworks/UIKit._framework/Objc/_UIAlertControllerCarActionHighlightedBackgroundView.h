//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerCarActionHighlightedBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPressed:(BOOL)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)tintColorDidChange;

@end

