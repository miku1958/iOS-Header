//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateView.h>

@protocol SiriUIMessageContentTemplateModel;

@interface SiriUIMessageContentTemplateView : SiriUIBaseTemplateView
{
}

@property (weak, nonatomic) id<SiriUIMessageContentTemplateModel> dataSource; // @dynamic dataSource;

- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setSemanticContentAttribute:(long long)arg1;

@end

