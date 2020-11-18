//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSDictionary, NSString;

@interface PXAttributedStringHTMLParser : NSObject
{
    unsigned int __currentTraits;
    NSDictionary *_emphasizedAttributes;
    NSDictionary *_italicizedAttributes;
    CDUnknownBlockType _parsedAttributedStringBlock;
    CDUnknownBlockType _parsedErrorBlock;
    NSString *__htmlString;
    NSDictionary *__defaultAttributes;
    NSCountedSet *__currentMarkupElements;
    NSDictionary *__currentAttributes;
}

@property (copy, nonatomic, setter=_setCurrentAttributes:) NSDictionary *_currentAttributes; // @synthesize _currentAttributes=__currentAttributes;
@property (readonly, nonatomic) NSCountedSet *_currentMarkupElements; // @synthesize _currentMarkupElements=__currentMarkupElements;
@property (nonatomic, setter=_setCurrentTraits:) unsigned int _currentTraits; // @synthesize _currentTraits=__currentTraits;
@property (readonly, copy, nonatomic) NSDictionary *_defaultAttributes; // @synthesize _defaultAttributes=__defaultAttributes;
@property (readonly, copy, nonatomic) NSString *_htmlString; // @synthesize _htmlString=__htmlString;
@property (copy, nonatomic) NSDictionary *emphasizedAttributes; // @synthesize emphasizedAttributes=_emphasizedAttributes;
@property (copy, nonatomic) NSDictionary *italicizedAttributes; // @synthesize italicizedAttributes=_italicizedAttributes;
@property (copy, nonatomic) CDUnknownBlockType parsedAttributedStringBlock; // @synthesize parsedAttributedStringBlock=_parsedAttributedStringBlock;
@property (copy, nonatomic) CDUnknownBlockType parsedErrorBlock; // @synthesize parsedErrorBlock=_parsedErrorBlock;

+ (id)stringByConvertingToHTML:(id)arg1;
- (void).cxx_destruct;
- (void)_updateCurrentTraits;
- (id)init;
- (id)initWithHTMLString:(id)arg1 defaultAttributes:(id)arg2;
- (void)parse;

@end
