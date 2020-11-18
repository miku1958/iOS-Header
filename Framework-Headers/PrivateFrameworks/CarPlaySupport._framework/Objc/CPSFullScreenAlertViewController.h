//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSBaseTemplateViewController.h>

#import <CarPlaySupport/CPSButtonDelegate-Protocol.h>

@class CPAlertTemplate, NSArray, NSString;

@interface CPSFullScreenAlertViewController : CPSBaseTemplateViewController <CPSButtonDelegate>
{
    NSArray *_alertButtons;
}

@property (readonly, nonatomic) CPAlertTemplate *alert;
@property (strong, nonatomic) NSArray *alertButtons; // @synthesize alertButtons=_alertButtons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)didSelectButton:(id)arg1;
- (id)initWithAlert:(id)arg1 alertDelegate:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;

@end

