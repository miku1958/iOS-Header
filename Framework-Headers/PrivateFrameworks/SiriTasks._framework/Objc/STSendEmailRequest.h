//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class STEmailMessage;

@interface STSendEmailRequest : AFSiriRequest
{
    STEmailMessage *_message;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithMessage:(id)arg1;
- (BOOL)_makeAppFrontmost;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;

@end
