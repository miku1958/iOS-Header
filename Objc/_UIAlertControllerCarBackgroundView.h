//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <UIKitCore/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKitCore/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerCarBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPressed:(BOOL)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;

@end

