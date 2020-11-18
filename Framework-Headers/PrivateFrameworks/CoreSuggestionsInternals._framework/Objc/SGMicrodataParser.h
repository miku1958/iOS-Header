//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMicrodataParserStackItem;

@interface SGMicrodataParser : NSObject
{
    SGMicrodataParserStackItem *_stackItem;
}

@property (readonly, nonatomic) SGMicrodataParserStackItem *stackItem; // @synthesize stackItem=_stackItem;

+ (id)parse:(id)arg1;
+ (id)whitespaceSplit:(id)arg1;
- (void).cxx_destruct;
- (void)endElement;
- (id)initWithDocument:(id)arg1;
- (void)startElement:(id)arg1 withAttributes:(id)arg2;
- (void)textContent:(id)arg1;

@end

