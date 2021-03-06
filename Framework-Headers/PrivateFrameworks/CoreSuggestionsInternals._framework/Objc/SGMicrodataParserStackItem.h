//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SGMicrodataDocument;

@interface SGMicrodataParserStackItem : NSObject
{
    SGMicrodataDocument *_document;
    SGMicrodataParserStackItem *_parent;
    NSArray *_textConsumers;
    NSArray *_itemScopes;
}

@property (readonly) SGMicrodataDocument *document; // @synthesize document=_document;
@property (readonly) NSArray *itemScopes; // @synthesize itemScopes=_itemScopes;
@property (readonly) SGMicrodataParserStackItem *parent; // @synthesize parent=_parent;
@property (readonly) NSArray *textConsumers; // @synthesize textConsumers=_textConsumers;

- (void).cxx_destruct;
- (id)initWithDocument:(id)arg1;
- (id)initWithParent:(id)arg1 item:(id)arg2 htmlId:(id)arg3 textConsumer:(id)arg4;

@end

