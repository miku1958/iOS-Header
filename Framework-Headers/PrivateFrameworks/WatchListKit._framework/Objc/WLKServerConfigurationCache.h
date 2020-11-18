//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WLKServerConfigurationResponse;

@interface WLKServerConfigurationCache : NSObject
{
    WLKServerConfigurationResponse *_response;
    NSDate *_expirationDate;
    unsigned long long _environmentHash;
}

@property (readonly, nonatomic) unsigned long long environmentHash; // @synthesize environmentHash=_environmentHash;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) WLKServerConfigurationResponse *response; // @synthesize response=_response;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithServerResponse:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;
- (BOOL)isValid;

@end

