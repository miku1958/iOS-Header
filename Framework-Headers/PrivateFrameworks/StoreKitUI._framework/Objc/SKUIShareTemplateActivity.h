//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class SKUIClientContext, SKUIShareSheetActivityViewElement;

@interface SKUIShareTemplateActivity : UIActivity
{
    SKUIClientContext *_clientContext;
    SKUIShareSheetActivityViewElement *_viewElement;
}

- (void).cxx_destruct;
- (id)_beforeActivity;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)initWithActivityViewElement:(id)arg1 clientContext:(id)arg2;
- (void)performActivity;

@end

