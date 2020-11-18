//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateViewController.h>

#import <SiriUI/SiriUILabelStackTemplateViewDelegate-Protocol.h>

@class NSString, SiriUIProfileTemplateView;
@protocol SiriUIProfileTemplateModel;

@interface SiriUIProfileTemplateViewController : SiriUIBaseTemplateViewController <SiriUILabelStackTemplateViewDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<SiriUIProfileTemplateModel> templateModel; // @dynamic templateModel;
@property (strong, nonatomic) SiriUIProfileTemplateView *view; // @dynamic view;

- (BOOL)labelStackTemplateViewShouldLayoutCompressed:(id)arg1;
- (void)loadView;
- (Class)templateViewClass;

@end

