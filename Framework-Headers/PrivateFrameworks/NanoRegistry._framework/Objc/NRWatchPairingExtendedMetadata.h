//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding>
{
    BOOL _postFailsafeObliteration;
    BOOL _isCellularEnabled;
    long long _chipID;
    long long _pairingVersion;
    NSString *_productType;
}

@property (nonatomic) long long chipID; // @synthesize chipID=_chipID;
@property (nonatomic) BOOL isCellularEnabled; // @synthesize isCellularEnabled=_isCellularEnabled;
@property (nonatomic) long long pairingVersion; // @synthesize pairingVersion=_pairingVersion;
@property (nonatomic) BOOL postFailsafeObliteration; // @synthesize postFailsafeObliteration=_postFailsafeObliteration;
@property (strong, nonatomic) NSString *productType; // @synthesize productType=_productType;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

