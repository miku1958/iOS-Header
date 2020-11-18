//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFCardSectionFeedback.h>

@class SFPunchout;

@interface SFCardSectionEngagementFeedback : SFCardSectionFeedback
{
    SFPunchout *_destination;
    unsigned long long _triggerEvent;
    unsigned long long _actionCardType;
    unsigned long long _actionTarget;
}

@property (nonatomic) unsigned long long actionCardType; // @synthesize actionCardType=_actionCardType;
@property (nonatomic) unsigned long long actionTarget; // @synthesize actionTarget=_actionTarget;
@property (strong, nonatomic) SFPunchout *destination; // @synthesize destination=_destination;
@property (nonatomic) unsigned long long triggerEvent; // @synthesize triggerEvent=_triggerEvent;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCardSection:(id)arg1 destination:(id)arg2 triggerEvent:(unsigned long long)arg3 actionCardType:(unsigned long long)arg4;
- (id)initWithCoder:(id)arg1;

@end

