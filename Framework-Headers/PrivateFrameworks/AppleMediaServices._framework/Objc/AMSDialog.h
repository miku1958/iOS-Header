//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSImage, NSString;
@protocol OS_dispatch_queue;

@interface AMSDialog : NSObject
{
    NSObject<OS_dispatch_queue> *_systemDialogQueue;
    NSArray *_buttons;
    CDUnknownBlockType _completionHandler;
    NSImage *_icon;
    NSString *_message;
    long long _selectedButtonIndex;
    long long _style;
    NSArray *_textFields;
    NSString *_title;
}

@property (copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic) long long selectedButtonIndex; // @synthesize selectedButtonIndex=_selectedButtonIndex;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)dialogWithTitle:(id)arg1 message:(id)arg2;
+ (id)dialogWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;
- (void).cxx_destruct;
- (void)addButton:(id)arg1;
- (void)addTextField:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3;
- (void)present;
- (void)presentFromViewController:(id)arg1;
- (void)presentSheetFromWindow:(id)arg1;
- (void)presentSystemDialog;

@end

