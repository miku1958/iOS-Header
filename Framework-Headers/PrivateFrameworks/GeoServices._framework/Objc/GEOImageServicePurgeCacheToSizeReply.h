//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOXPCReply.h>

#import <GeoServices/GEOXPCReply-Protocol.h>

@class NSString;

@interface GEOImageServicePurgeCacheToSizeReply : GEOXPCReply <GEOXPCReply>
{
    unsigned long long _amountDeleted;
}

@property (nonatomic) unsigned long long amountDeleted; // @synthesize amountDeleted=_amountDeleted;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id *)arg2;
- (BOOL)isValid;

@end
