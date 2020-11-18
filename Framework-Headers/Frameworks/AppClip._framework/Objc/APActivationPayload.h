//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppClip/NSCopying-Protocol.h>
#import <AppClip/NSSecureCoding-Protocol.h>

@class NSURL;

@interface APActivationPayload : NSObject <NSSecureCoding, NSCopying>
{
    NSURL *_URL;
}

@property (readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)confirmAcquiredInRegion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;

@end
