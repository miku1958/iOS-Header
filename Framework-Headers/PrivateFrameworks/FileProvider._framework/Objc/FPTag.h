//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class NSString;

@interface FPTag : NSObject <NSSecureCoding, NSCopying>
{
    int _color;
    NSString *_label;
}

@property (readonly, nonatomic) int color; // @synthesize color=_color;
@property (readonly, nonatomic) NSString *label; // @synthesize label=_label;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 color:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTag:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)localizedStandardCompare:(id)arg1;

@end

