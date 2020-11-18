//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _LTTranslationParagraph : NSObject <NSSecureCoding>
{
    NSString *_identifier;
    NSString *_text;
    NSArray *_spans;
}

@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, copy, nonatomic) NSArray *spans; // @synthesize spans=_spans;
@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2 spans:(id)arg3;

@end
