//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPTextualAttachment.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPNumberAttachment : TSWPTextualAttachment
{
    NSString *_numberFormat;
    NSString *_stringValue;
}

@property (copy, nonatomic) NSString *numberFormat; // @synthesize numberFormat=_numberFormat;
@property (copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;

+ (Class)classForUnarchiver:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)performTemplateLocalization:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)stringEquivalent;
- (id)stringEquivalentWithLayoutParent:(id)arg1;
- (id)stringWithNumber:(unsigned long long)arg1;

@end

