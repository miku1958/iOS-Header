//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLRuntimeObject-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSParagraphStyle, NSShadow, NSString, NSTextAttachment, UIColor, UIFont;

@interface TMLAttributedString_Attributes : NSObject <NSCopying, TMLRuntimeObject>
{
    NSMutableDictionary *_attributes;
    BOOL _created;
    struct _NSRange _range;
}

@property (strong, nonatomic) NSString *accessibilitySpeechIPANotation;
@property (strong, nonatomic) NSString *accessibilitySpeechLanguage;
@property (strong, nonatomic) NSNumber *accessibilitySpeechPitch;
@property (nonatomic) BOOL accessibilitySpeechPunctuation;
@property (strong, nonatomic) NSNumber *accessibilitySpeechQueueAnnouncement;
@property (strong, nonatomic) NSNumber *accessibilityTextHeadingLevel;
@property (strong, nonatomic) NSTextAttachment *attachment;
@property (copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property (strong, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double baselineOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double expansion;
@property (strong, nonatomic) UIFont *font;
@property (strong, nonatomic) UIColor *foregroundColor;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSNumber *kern;
@property (nonatomic) long long ligature;
@property (strong, nonatomic) id link;
@property (nonatomic) double obliqueness;
@property (strong, nonatomic) NSParagraphStyle *paragraphStyle;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (strong, nonatomic) NSShadow *shadow;
@property (nonatomic) long long strikethroughStyle;
@property (strong, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (readonly) Class superclass;
@property (nonatomic) long long superscript;
@property (strong, nonatomic) NSString *textEffect;
@property (strong, nonatomic) UIColor *underlineColor;
@property (nonatomic) long long underlineStyle;
@property (nonatomic) long long verticalGlyphForm;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setAXAttribute:(id)arg1 value:(id)arg2;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)tmlObjectCompleted;
- (id)valueForUndefinedKey:(id)arg1;

@end

