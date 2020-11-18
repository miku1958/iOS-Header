//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface NSURLSessionTaskHTTPAuthenticator : NSObject <NSCopying>
{
    NSSet *_statusCodes;
}

@property (copy) NSSet *statusCodes; // @synthesize statusCodes=_statusCodes;

+ (id)sessionTaskHTTPAuthenticatorWithContext:(id)arg1 statusCodes:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)getAuthenticationHeadersForTask:(id)arg1 task:(id)arg2 response:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithStatusCodes:(id)arg1;

@end
