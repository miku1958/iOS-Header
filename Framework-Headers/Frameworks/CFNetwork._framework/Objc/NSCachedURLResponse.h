//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@class NSCachedURLResponseInternal, NSData, NSDictionary, NSURLResponse;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSCachedURLResponseInternal *_internal;
}

@property (readonly, copy) NSData *data;
@property (readonly, copy) NSURLResponse *response;
@property (readonly) unsigned long long storagePolicy;
@property (readonly, copy) NSDictionary *userInfo;

+ (BOOL)supportsSecureCoding;
- (struct _CFCachedURLResponse *)_CFCachedURLResponse;
- (void)_deallocInternalCFCachedURLResponse;
- (id)_initWithCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (void)_reestablishInternalCFCachedURLResponse:(struct _CFCachedURLResponse *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataArray;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponse:(id)arg1 data:(id)arg2;
- (id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;
- (id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4;

@end

