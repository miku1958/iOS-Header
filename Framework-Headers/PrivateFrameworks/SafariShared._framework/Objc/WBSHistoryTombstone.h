//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString;

@interface WBSHistoryTombstone : NSObject
{
    NSString *_urlString;
    NSData *_urlHash;
    NSData *_urlSalt;
    double _startTime;
    double _endTime;
    long long _generation;
}

@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property (readonly, nonatomic) long long generation; // @synthesize generation=_generation;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;
@property (readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly, nonatomic) NSData *urlHash; // @synthesize urlHash=_urlHash;
@property (readonly, nonatomic) NSData *urlSalt; // @synthesize urlSalt=_urlSalt;
@property (readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1 crypto:(id)arg2;
- (id)initWithURLString:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 generation:(long long)arg6;
- (BOOL)matchesVisitTime:(double)arg1 urlString:(id)arg2;
- (id)secureTombstoneWithSalt:(id)arg1;

@end

