//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation
{
    NSString *_address;
    NSString *_addressSHA1;
    NSString *_addressPrefix;
    BOOL _verified;
}

@property (strong, nonatomic) NSString *address; // @synthesize address=_address;
@property (strong, nonatomic) NSString *addressPrefix; // @synthesize addressPrefix=_addressPrefix;
@property (strong, nonatomic) NSString *addressSHA1; // @synthesize addressSHA1=_addressSHA1;
@property (nonatomic) BOOL verified; // @synthesize verified=_verified;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

