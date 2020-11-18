//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/WFUIKitUserInterface-Protocol.h>
#import <WorkflowUI/WFUIKitUserInterfaceImpl-Protocol.h>

@class NSString, UIView, UIViewController;

@interface WFConcreteUIKitUserInterface : NSObject <WFUIKitUserInterface, WFUIKitUserInterfaceImpl>
{
    UIViewController *_viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;

- (void).cxx_destruct;
- (id)initWithViewController:(id)arg1;
- (void)presentAlert:(id)arg1;

@end
