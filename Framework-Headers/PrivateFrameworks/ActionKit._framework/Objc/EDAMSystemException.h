//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMSystemException : FATException
{
    NSNumber *_errorCode;
    NSString *_message;
    NSNumber *_rateLimitDuration;
}

@property (strong, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;
@property (strong, nonatomic) NSNumber *rateLimitDuration; // @synthesize rateLimitDuration=_rateLimitDuration;

+ (id)structFields;
+ (id)structName;
- (void).cxx_destruct;

@end

