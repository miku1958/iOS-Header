//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ASItem, ASParseContext, NSDictionary;

@protocol ASParsingLeafNode
+ (BOOL)expectsContent;
- (id)initWithASParseContext:(ASParseContext *)arg1 root:(ASItem *)arg2 parent:(ASItem *)arg3 callbackDict:(NSDictionary *)arg4 streamCallbackDict:(NSDictionary *)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (int)parsingState;
@end

