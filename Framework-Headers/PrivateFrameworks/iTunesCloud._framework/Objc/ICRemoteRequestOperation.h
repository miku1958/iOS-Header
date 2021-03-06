//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

#import <iTunesCloud/NSSecureCoding-Protocol.h>

@protocol NSSecureCoding;

@interface ICRemoteRequestOperation : ICRequestOperation <NSSecureCoding>
{
    BOOL __shadowOperationForRemoteExecution;
    id<NSSecureCoding> _response;
}

@property (nonatomic, getter=_isShadowOperationForRemoteExecution, setter=_setShadowOperationForRemoteExecution:) BOOL _shadowOperationForRemoteExecution; // @synthesize _shadowOperationForRemoteExecution=__shadowOperationForRemoteExecution;
@property (strong, nonatomic) id<NSSecureCoding> response; // @synthesize response=_response;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_execute;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

