//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@interface TRSetupCompletionRequest : TRRequestMessage
{
    BOOL _completedSuccessfully;
    long long _errorCode;
}

@property (nonatomic) BOOL completedSuccessfully; // @synthesize completedSuccessfully=_completedSuccessfully;
@property (nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

