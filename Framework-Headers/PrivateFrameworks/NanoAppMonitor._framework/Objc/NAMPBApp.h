//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoAppMonitor/NSCopying-Protocol.h>

@class NSString;

@interface NAMPBApp : PBCodable <NSCopying>
{
    double _timeIntervalSinceReferenceDate;
    NSString *_companionBundleID;
    NSString *_watchBundleID;
}

@property (strong, nonatomic) NSString *companionBundleID; // @synthesize companionBundleID=_companionBundleID;
@property (nonatomic) double timeIntervalSinceReferenceDate; // @synthesize timeIntervalSinceReferenceDate=_timeIntervalSinceReferenceDate;
@property (strong, nonatomic) NSString *watchBundleID; // @synthesize watchBundleID=_watchBundleID;

+ (id)fromUsage:(id)arg1;
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

