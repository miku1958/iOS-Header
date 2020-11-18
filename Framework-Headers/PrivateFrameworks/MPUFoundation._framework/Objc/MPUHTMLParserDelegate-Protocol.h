//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/NSObject-Protocol.h>

@class MPUHTMLParser, NSDictionary, NSString;
@protocol MPUHTMLParserState;

@protocol MPUHTMLParserDelegate <NSObject>

@optional
- (NSDictionary *)defaultAttributesForParser:(MPUHTMLParser *)arg1;
- (NSDictionary *)parser:(MPUHTMLParser *)arg1 attributesForTagName:(NSString *)arg2 tagAttributes:(NSDictionary *)arg3 currentState:(id<MPUHTMLParserState>)arg4;
- (NSString *)parser:(MPUHTMLParser *)arg1 prependStringForTagName:(NSString *)arg2;
@end
