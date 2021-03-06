//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REHTMLElement.h>

@class NSArray, NSDictionary, NSString;

@interface REHTMLTagElement : REHTMLElement
{
    NSString *_tag;
    NSString *_content;
    NSArray *_classes;
    NSDictionary *_attributes;
    NSString *_prefix;
    NSString *_suffix;
}

- (void).cxx_destruct;
- (id)_contentString;
- (id)_prefixContentString;
- (id)_suffixContentString;
- (id)attributes;
- (id)classes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)elementByAddingClass:(id)arg1;
- (id)elementByAddingClasses:(id)arg1;
- (id)elementBySettingAtttibutes:(id)arg1;
- (id)elementBySettingClasses:(id)arg1;
- (id)initWithTag:(id)arg1 content:(id)arg2;

@end

