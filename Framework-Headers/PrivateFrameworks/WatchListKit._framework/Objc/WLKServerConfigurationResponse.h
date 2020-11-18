//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSCopying-Protocol.h>
#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding, NSCopying>
{
    NSDictionary *_responseDictionary;
    NSDate *_expirationDate;
    unsigned long long _environmentHash;
}

@property (readonly, nonatomic) NSDictionary *endpointsDictionary;
@property (readonly, nonatomic) unsigned long long environmentHash; // @synthesize environmentHash=_environmentHash;
@property (readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic) NSArray *orderedChannels;
@property (readonly, nonatomic) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (readonly, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property (readonly, nonatomic) NSDictionary *serverRoutesDictionary;
@property (readonly, nonatomic) NSString *vppaStatus;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;

@end
