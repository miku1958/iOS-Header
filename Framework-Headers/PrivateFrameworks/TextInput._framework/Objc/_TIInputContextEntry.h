//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface _TIInputContextEntry : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_text;
    NSDate *_timestamp;
}

@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (strong, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;

+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
