//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIWebFormRotatingAccessoryPopover.h>

#import <UIKitCore/UIWebFormControl-Protocol.h>

@class UIWebDateTimePopoverViewController;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>
{
    UIWebDateTimePopoverViewController *_webDateTimeViewController;
}

@property (strong, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController; // @synthesize _webDateTimeViewController;

- (void)clear:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;

@end

