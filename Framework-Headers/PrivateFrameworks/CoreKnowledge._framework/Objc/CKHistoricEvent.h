//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSDictionary, NSString;

@interface CKHistoricEvent : NSObject
{
    MISSING_TYPE *identifier;
    MISSING_TYPE *_firstSeen;
    MISSING_TYPE *_lastSeen;
    MISSING_TYPE *_frequency;
    MISSING_TYPE *_lastDuration;
    MISSING_TYPE *_totalDuration;
    MISSING_TYPE *_metadata;
}

@property (nonatomic, copy) NSDate *_firstSeen; // @synthesize _firstSeen;
@property (nonatomic) long long _frequency; // @synthesize _frequency;
@property (nonatomic) double _lastDuration; // @synthesize _lastDuration;
@property (nonatomic, copy) NSDate *_lastSeen; // @synthesize _lastSeen;
@property (nonatomic, copy) NSDictionary *_metadata; // @synthesize _metadata;
@property (nonatomic) double _totalDuration; // @synthesize _totalDuration;
@property (nonatomic, readonly) NSDate *firstSeen;
@property (nonatomic, readonly) long long frequency;
@property (nonatomic, readonly) NSString *identifier; // @synthesize identifier;
@property (nonatomic, readonly) double lastDuration;
@property (nonatomic, readonly) NSDate *lastSeen;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) double totalDuration;

+ (id)EventIdSeparator;
+ (id)dateFormat;
+ (id)identifierWithPrefix:(id)arg1 intent:(id)arg2 error:(id *)arg3;
+ (BOOL)supportsSecureCoding;
- (CDUnknownBlockType).cxx_destruct;
- (id)copyWithZone:(void *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)init:(id)arg1;
- (id)initFrom:(id)arg1 withIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 firstSeen:(id)arg2 lastSeen:(id)arg3 frequency:(long long)arg4 lastDuration:(double)arg5 totalDuration:(double)arg6 metadata:(id)arg7;

@end

