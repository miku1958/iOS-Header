//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyle;

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject
{
}

@property (strong, nonatomic) RWIProtocolCSSStyle *inlineStyle;
@property (copy, nonatomic) NSArray *matchedCSSRules;

- (id)initWithMatchedCSSRules:(id)arg1;

@end

