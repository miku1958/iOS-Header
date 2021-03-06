//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCRequest.h>

#import <GeoServices/GEOXPCRequest-Protocol.h>

@class NSString;

@interface GEOImageServicePurgeCacheToSizeRequest : GEOXPCRequest <GEOXPCRequest>
{
    unsigned long long _targetSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetSize; // @synthesize targetSize=_targetSize;

+ (Class)replyClass;
- (void)encodeToXPCDictionary:(id)arg1;
- (BOOL)expectsReply;
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)isValid;

@end

