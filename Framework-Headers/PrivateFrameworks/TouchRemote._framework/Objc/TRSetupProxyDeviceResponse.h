//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRResponseMessage.h>

@class AKDevice;

@interface TRSetupProxyDeviceResponse : TRResponseMessage
{
    AKDevice *_proxyDevice;
}

@property (strong, nonatomic) AKDevice *proxyDevice; // @synthesize proxyDevice=_proxyDevice;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

