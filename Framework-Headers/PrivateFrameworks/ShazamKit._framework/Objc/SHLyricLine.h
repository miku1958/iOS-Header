//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ShazamKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface SHLyricLine : NSObject <NSSecureCoding>
{
    NSString *_text;
    double _offset;
}

@property (nonatomic) double offset; // @synthesize offset=_offset;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

+ (id)lyricLineWithText:(id)arg1 offset:(double)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLineWithText:(id)arg1 offset:(double)arg2;

@end
