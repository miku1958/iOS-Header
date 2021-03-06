//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary;

@interface AFOpportuneSpeakingModelFeedback : NSObject <NSSecureCoding>
{
    NSDate *_lastNegativeFeedback;
    NSDictionary *_negativeFeedbackByContact;
}

@property (strong, nonatomic) NSDate *lastNegativeFeedback; // @synthesize lastNegativeFeedback=_lastNegativeFeedback;
@property (strong, nonatomic) NSDictionary *negativeFeedbackByContact; // @synthesize negativeFeedbackByContact=_negativeFeedbackByContact;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

