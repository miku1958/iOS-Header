//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STTimer;

@interface AFSetTimerRequest : AFSiriRequest
{
    STTimer *_timer;
}

@property (strong, nonatomic) STTimer *timer; // @synthesize timer=_timer;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

