//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/UIPopoverControllerDelegate-Protocol.h>

@class NSString, UIPopoverController;

__attribute__((visibility("hidden")))
@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate>
{
    UIPopoverController *_popoverController;
    SEL _selector;
    id _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (id)initWithPopoverController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)setTarget:(id)arg1 selector:(SEL)arg2;

@end

