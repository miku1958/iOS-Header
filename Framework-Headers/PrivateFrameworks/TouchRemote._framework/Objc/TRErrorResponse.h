//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class NSError;

@interface TRErrorResponse : TRResponseMessage
{
    NSError *_error;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

