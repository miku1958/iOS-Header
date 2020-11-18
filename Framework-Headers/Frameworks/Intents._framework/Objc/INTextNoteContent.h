//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INNoteContent.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSString;

@interface INTextNoteContent : INNoteContent <NSSecureCoding, NSCopying>
{
    NSString *_text;
}

@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
