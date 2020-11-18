//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class AMSDialogAction, AMSMetricsEvent, NSArray, NSDictionary, NSString, NSURL;

@interface AMSDialogRequest : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_buttonActions;
    AMSDialogAction *_defaultAction;
    NSURL *_iconBundleURL;
    NSString *_identifier;
    NSString *_logKey;
    NSString *_message;
    AMSMetricsEvent *_metricsEvent;
    long long _style;
    NSArray *_textFields;
    NSString *_title;
    NSDictionary *_userInfo;
}

@property (copy, nonatomic) NSArray *buttonActions; // @synthesize buttonActions=_buttonActions;
@property (strong, nonatomic) AMSDialogAction *defaultAction; // @synthesize defaultAction=_defaultAction;
@property (copy, nonatomic) NSURL *iconBundleURL; // @synthesize iconBundleURL=_iconBundleURL;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property (copy, nonatomic) NSString *message; // @synthesize message=_message;
@property (copy, nonatomic) AMSMetricsEvent *metricsEvent; // @synthesize metricsEvent=_metricsEvent;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (copy, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;

+ (id)requestWithTitle:(id)arg1 message:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addButtonAction:(id)arg1;
- (void)addTextField:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2;
- (id)locateActionWithIdentifier:(id)arg1;
- (void)replaceAction:(id)arg1;

@end
