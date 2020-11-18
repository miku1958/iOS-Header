//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface PKDashboardPassMessage : NSObject
{
    BOOL _isDestructiveAction;
    BOOL _showDisclosure;
    BOOL _showSpinner;
    BOOL _reportToAnalytics;
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    NSString *_message;
    CDUnknownBlockType _actionOnMessagePress;
    NSString *_buttonTitle;
    CDUnknownBlockType _actionOnButtonPress;
    CDUnknownBlockType _actionOnDismiss;
    UIImage *_image;
    NSString *_analyticsReporterSubject;
}

@property (copy, nonatomic) CDUnknownBlockType actionOnButtonPress; // @synthesize actionOnButtonPress=_actionOnButtonPress;
@property (copy, nonatomic) CDUnknownBlockType actionOnDismiss; // @synthesize actionOnDismiss=_actionOnDismiss;
@property (copy, nonatomic) CDUnknownBlockType actionOnMessagePress; // @synthesize actionOnMessagePress=_actionOnMessagePress;
@property (nonatomic) NSString *analyticsReporterSubject; // @synthesize analyticsReporterSubject=_analyticsReporterSubject;
@property (copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic) BOOL isDestructiveAction; // @synthesize isDestructiveAction=_isDestructiveAction;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic, getter=canReportToAnalytics) BOOL reportToAnalytics; // @synthesize reportToAnalytics=_reportToAnalytics;
@property (nonatomic) BOOL showDisclosure; // @synthesize showDisclosure=_showDisclosure;
@property (nonatomic) BOOL showSpinner; // @synthesize showSpinner=_showSpinner;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;

- (void).cxx_destruct;

@end
