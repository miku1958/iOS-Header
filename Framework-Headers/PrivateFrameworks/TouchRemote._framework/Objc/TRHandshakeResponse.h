//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@interface TRHandshakeResponse : TRResponseMessage
{
    long long _protocolVersion;
}

@property (nonatomic) long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
