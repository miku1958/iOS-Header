//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSStyleSheetHeader : RWIProtocolJSONObject
{
}

@property (nonatomic) BOOL disabled;
@property (copy, nonatomic) NSString *frameId;
@property (nonatomic) BOOL isInline;
@property (nonatomic) long long origin;
@property (copy, nonatomic) NSString *sourceURL;
@property (nonatomic) double startColumn;
@property (nonatomic) double startLine;
@property (copy, nonatomic) NSString *styleSheetId;
@property (copy, nonatomic) NSString *title;

- (id)initWithStyleSheetId:(id)arg1 frameId:(id)arg2 sourceURL:(id)arg3 origin:(long long)arg4 title:(id)arg5 disabled:(BOOL)arg6 isInline:(BOOL)arg7 startLine:(double)arg8 startColumn:(double)arg9;

@end

