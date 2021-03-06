//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface _ICNamedEntityRecord : NSObject
{
    unsigned char _source;
    unsigned char _type;
    unsigned char _changeType;
    NSString *_name;
    NSString *_phoneticName;
    NSString *_identifier;
    double _score;
    NSString *_languageIdentifier;
    NSDate *_contentCreationDate;
    NSDate *_detectionDate;
    NSString *_sourceIdentifier;
    NSString *_donorBundleIdentifier;
    unsigned long long _detectionAlgorithm;
}

@property (readonly, nonatomic) unsigned char changeType; // @synthesize changeType=_changeType;
@property (readonly, nonatomic) NSDate *contentCreationDate; // @synthesize contentCreationDate=_contentCreationDate;
@property (readonly, nonatomic) unsigned long long detectionAlgorithm; // @synthesize detectionAlgorithm=_detectionAlgorithm;
@property (readonly, nonatomic) NSDate *detectionDate; // @synthesize detectionDate=_detectionDate;
@property (readonly, nonatomic) NSString *donorBundleIdentifier; // @synthesize donorBundleIdentifier=_donorBundleIdentifier;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property (nonatomic) double score; // @synthesize score=_score;
@property (readonly, nonatomic) unsigned char source; // @synthesize source=_source;
@property (readonly, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property (readonly, nonatomic) unsigned char type; // @synthesize type=_type;

+ (id)namedEntityRecordWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 donorBundleIdentifier:(id)arg10 detectionAlgorithm:(unsigned long long)arg11;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 phoneticName:(id)arg2 type:(unsigned char)arg3 languageIdentifier:(id)arg4 contentCreationDate:(id)arg5 detectionDate:(id)arg6 score:(double)arg7 source:(unsigned char)arg8 sourceIdentifier:(id)arg9 donorBundleIdentifier:(id)arg10 detectionAlgorithm:(unsigned long long)arg11;
- (id)initWithName:(id)arg1 source:(unsigned char)arg2 type:(unsigned char)arg3 score:(double)arg4 changeType:(unsigned char)arg5;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToNamedEntityRecord:(id)arg1;
- (id)sourceString:(unsigned char)arg1;
- (id)typeString:(unsigned char)arg1;

@end

