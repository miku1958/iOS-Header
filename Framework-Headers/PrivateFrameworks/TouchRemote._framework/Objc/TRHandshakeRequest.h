//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@interface TRHandshakeRequest : TRRequestMessage
{
    long long _protocolVersion;
}

@property (nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;

+ (BOOL)supportsSecureCoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

