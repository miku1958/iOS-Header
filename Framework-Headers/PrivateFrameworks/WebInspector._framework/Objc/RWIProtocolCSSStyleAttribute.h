//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSStyle;

@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject
{
}

@property (copy, nonatomic) NSString *name;
@property (strong, nonatomic) RWIProtocolCSSStyle *style;

- (id)initWithName:(id)arg1 style:(id)arg2;

@end

