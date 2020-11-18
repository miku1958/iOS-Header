//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Search/SPFeedback.h>

@class NSString;

@interface SPFeedbackContext : SPFeedback
{
    double _start_ts;
    NSString *_start_method;
    NSString *_last_search;
}

@property (strong, nonatomic) NSString *last_search; // @synthesize last_search=_last_search;
@property (strong, nonatomic) NSString *start_method; // @synthesize start_method=_start_method;
@property (nonatomic) double start_ts; // @synthesize start_ts=_start_ts;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parsecFeedbackFromSession:(id)arg1;

@end

