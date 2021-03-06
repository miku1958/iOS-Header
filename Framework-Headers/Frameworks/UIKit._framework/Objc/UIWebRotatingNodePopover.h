//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIPopoverControllerDelegate-Protocol.h>

@class DOMNode, NSString, UIPopoverController;
@protocol UIWebRotatingNodePopoverDelegate;

__attribute__((visibility("hidden")))
@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate>
{
    BOOL _isRotating;
    DOMNode *_node;
    struct CGPoint _presentationPoint;
    UIPopoverController *_popoverController;
    id<UIWebRotatingNodePopoverDelegate> _dismissDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) id<UIWebRotatingNodePopoverDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) DOMNode *node; // @synthesize node=_node;
@property (strong, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;
@property (nonatomic) struct CGPoint presentationPoint; // @synthesize presentationPoint=_presentationPoint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)dismissPopoverAnimated:(BOOL)arg1;
- (id)initWithDOMNode:(id)arg1;
- (unsigned long long)popoverArrowDirections;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPopoverAnimated:(BOOL)arg1;
- (void)willRotate:(id)arg1;

@end

