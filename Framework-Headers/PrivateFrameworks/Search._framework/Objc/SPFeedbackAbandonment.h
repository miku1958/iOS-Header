//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPFeedback.h>

@interface SPFeedbackAbandonment : SPFeedback
{
    unsigned long long _reason;
}

@property (nonatomic) unsigned long long reason; // @synthesize reason=_reason;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1;

@end
