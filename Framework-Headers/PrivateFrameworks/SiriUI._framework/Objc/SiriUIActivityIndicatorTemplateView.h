//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/SiriUIBaseTemplateView.h>

#import <SiriUI/SiriUITemplateView-Protocol.h>

@class NSString, UIActivityIndicatorView, UILabel;
@protocol SiriUIActivityIndicatorTemplateModel, SiriUITemplatedView;

@interface SiriUIActivityIndicatorTemplateView : SiriUIBaseTemplateView <SiriUITemplateView>
{
    UILabel *_detailTextLabel;
    UIActivityIndicatorView *_spinnerView;
}

@property (weak, nonatomic) id<SiriUIActivityIndicatorTemplateModel> dataSource; // @dynamic dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<SiriUITemplatedView> templatedSuperview;

- (void).cxx_destruct;
- (double)desiredHeight;
- (id)initWithDataSource:(id)arg1;
- (void)layoutSubviews;
- (void)reloadData;

@end
