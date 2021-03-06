//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest <NSCopying>
{
    NSData *_contentiAdID;
    NSData *_dPID;
    NSData *_iAdID;
    NSString *_iTunesStore;
    NSString *_localeIdentifier;
    BOOL _isSignedInToiTunes;
    BOOL _limitAdTracking;
    struct {
        unsigned int isSignedInToiTunes:1;
        unsigned int limitAdTracking:1;
    } _has;
}

@property (strong, nonatomic) NSData *contentiAdID; // @synthesize contentiAdID=_contentiAdID;
@property (strong, nonatomic) NSData *dPID; // @synthesize dPID=_dPID;
@property (readonly, nonatomic) BOOL hasContentiAdID;
@property (readonly, nonatomic) BOOL hasDPID;
@property (readonly, nonatomic) BOOL hasIAdID;
@property (readonly, nonatomic) BOOL hasITunesStore;
@property (nonatomic) BOOL hasIsSignedInToiTunes;
@property (nonatomic) BOOL hasLimitAdTracking;
@property (readonly, nonatomic) BOOL hasLocaleIdentifier;
@property (strong, nonatomic) NSData *iAdID; // @synthesize iAdID=_iAdID;
@property (strong, nonatomic) NSString *iTunesStore; // @synthesize iTunesStore=_iTunesStore;
@property (nonatomic) BOOL isSignedInToiTunes; // @synthesize isSignedInToiTunes=_isSignedInToiTunes;
@property (nonatomic) BOOL limitAdTracking; // @synthesize limitAdTracking=_limitAdTracking;
@property (strong, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;

+ (id)options;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

