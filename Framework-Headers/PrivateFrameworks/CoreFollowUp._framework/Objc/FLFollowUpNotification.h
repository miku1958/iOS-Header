//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/NSSecureCoding-Protocol.h>

@class FLFollowUpAction, NSDate, NSSet, NSString;

@interface FLFollowUpNotification : NSObject <NSSecureCoding>
{
    NSString *_title;
    NSString *_informativeText;
    FLFollowUpAction *_activateAction;
    FLFollowUpAction *_clearAction;
    FLFollowUpAction *_dismissAction;
    NSString *_unlockActionLabel;
    double _frequency;
    double _firstNotificationDelay;
    NSSet *_options;
    unsigned long long _sqlID;
    NSDate *_previousNotificationActionDate;
    NSDate *_creationDate;
}

@property (strong, nonatomic) FLFollowUpAction *activateAction; // @synthesize activateAction=_activateAction;
@property (strong, nonatomic) FLFollowUpAction *clearAction; // @synthesize clearAction=_clearAction;
@property (strong, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (strong, nonatomic) FLFollowUpAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property (nonatomic) double firstNotificationDelay; // @synthesize firstNotificationDelay=_firstNotificationDelay;
@property (nonatomic) BOOL forceDelivery;
@property (nonatomic) double frequency; // @synthesize frequency=_frequency;
@property (copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property (copy, nonatomic) NSSet *options; // @synthesize options=_options;
@property (strong, nonatomic) NSDate *previousNotificationActionDate; // @synthesize previousNotificationActionDate=_previousNotificationActionDate;
@property (nonatomic) unsigned long long sqlID; // @synthesize sqlID=_sqlID;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *unlockActionLabel; // @synthesize unlockActionLabel=_unlockActionLabel;

+ (id)defaultOptions;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (double)_creationDateAugmentedRepeatTimer;
- (double)_frequencyDelta;
- (id)_optionsData;
- (BOOL)_shouldDeliverNotificationWithStringOut:(id *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)recalculateActionDateToAccountForDelay;
- (void)set_optionsData:(id)arg1;
- (BOOL)shouldDeliverNotification;

@end
