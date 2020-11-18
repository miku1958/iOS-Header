//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/CNContactPickerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface PKContactPicker : NSObject <CNContactPickerDelegate>
{
    UIViewController *_pickerViewController;
    CDUnknownBlockType _selectionHandler;
    CDUnknownBlockType _cancelationHandler;
}

@property (copy, nonatomic) CDUnknownBlockType cancelationHandler; // @synthesize cancelationHandler=_cancelationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIViewController *pickerViewController; // @synthesize pickerViewController=_pickerViewController;
@property (copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (id)initWithSelectionHandler:(CDUnknownBlockType)arg1 cancelationHandler:(CDUnknownBlockType)arg2;

@end
