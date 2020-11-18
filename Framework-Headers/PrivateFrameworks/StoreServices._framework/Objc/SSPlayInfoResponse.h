//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSData, NSError, NSString;

@interface SSPlayInfoResponse : NSObject <SSXPCCoding, NSCopying>
{
    NSError *_error;
    NSData *_playInfoData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *playInfoData; // @synthesize playInfoData=_playInfoData;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithPlayInfoData:(id)arg1 error:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;

@end
