//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateViewController.h>

@class SiriUIMessageContentTemplateView;
@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateViewController : SiriUIBaseTemplateViewController
{
}

@property (strong, nonatomic) id<SiriUIMessageContentTemplateModel> templateModel; // @dynamic templateModel;
@property (strong, nonatomic) SiriUIMessageContentTemplateView *view; // @dynamic view;

- (Class)templateViewClass;

@end
