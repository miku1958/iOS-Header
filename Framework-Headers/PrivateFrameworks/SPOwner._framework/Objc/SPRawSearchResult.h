//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface SPRawSearchResult : NSObject <NSCopying, NSSecureCoding>
{
    NSData *_hashedPublicKey;
    NSData *_publicKey;
    long long _status;
    NSDate *_timestamp;
    double _latitude;
    double _longitude;
    double _horizontalAccuracy;
}

@property (readonly, copy, nonatomic) NSData *hashedPublicKey; // @synthesize hashedPublicKey=_hashedPublicKey;
@property (readonly, nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property (readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (readonly, copy, nonatomic) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property (readonly, nonatomic) long long status; // @synthesize status=_status;
@property (readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHashedPublicKey:(id)arg1 publicKey:(id)arg2 status:(long long)arg3 timestamp:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 horizontalAccuracy:(double)arg7;

@end

