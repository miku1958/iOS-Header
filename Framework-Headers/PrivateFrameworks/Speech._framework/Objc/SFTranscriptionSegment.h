//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Speech/NSCopying-Protocol.h>
#import <Speech/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface SFTranscriptionSegment : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_substring;
    double _timestamp;
    double _duration;
    NSArray *_alternativeSubstrings;
    struct _NSRange _substringRange;
}

@property (readonly, nonatomic) NSArray *alternativeSubstrings; // @synthesize alternativeSubstrings=_alternativeSubstrings;
@property (readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly, copy, nonatomic) NSString *substring; // @synthesize substring=_substring;
@property (readonly, nonatomic) struct _NSRange substringRange; // @synthesize substringRange=_substringRange;
@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithSubstring:(id)arg1 range:(struct _NSRange)arg2 timestamp:(double)arg3 duration:(double)arg4 alternativeSubstrings:(id)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
