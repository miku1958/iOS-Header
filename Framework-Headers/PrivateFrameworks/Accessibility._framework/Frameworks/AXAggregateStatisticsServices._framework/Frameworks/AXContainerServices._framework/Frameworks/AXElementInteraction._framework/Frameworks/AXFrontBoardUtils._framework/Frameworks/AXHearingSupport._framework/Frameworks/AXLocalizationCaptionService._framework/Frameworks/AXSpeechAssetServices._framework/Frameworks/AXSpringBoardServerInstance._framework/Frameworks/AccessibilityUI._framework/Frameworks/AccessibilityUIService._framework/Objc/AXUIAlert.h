//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AXUIAlertContext;

@interface AXUIAlert : UIView
{
    AXUIAlertContext *_context;
}

@property (weak, nonatomic) AXUIAlertContext *context; // @synthesize context=_context;

+ (id)alertWithType:(unsigned long long)arg1 text:(id)arg2 subtitleText:(id)arg3 iconImage:(id)arg4 styleProvider:(id)arg5;
- (void).cxx_destruct;
- (void)addToContainerView:(id)arg1;

@end
