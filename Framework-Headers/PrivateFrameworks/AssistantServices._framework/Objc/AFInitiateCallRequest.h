//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STCall;

@interface AFInitiateCallRequest : AFSiriRequest
{
    STCall *_call;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithCall:(id)arg1;
- (id)call;
- (id)createResponse;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
