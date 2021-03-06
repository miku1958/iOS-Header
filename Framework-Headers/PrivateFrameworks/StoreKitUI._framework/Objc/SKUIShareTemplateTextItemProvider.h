//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIShareTemplateViewElement;

__attribute__((visibility("hidden")))
@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider
{
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (id)item;

@end

