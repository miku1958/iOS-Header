//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject
{
    struct {
        unsigned int sparse:1;
        unsigned int parsingUpdatedTree:1;
        unsigned int parsingReorderedSiblings:1;
    } _parsingFlags;
    IKViewElementStyleFactory *_styleFactory;
}

@property (nonatomic, getter=isSparse) BOOL sparse;
@property (strong, nonatomic) IKViewElementStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;

+ (Class)elementClassByTagName:(id)arg1;
+ (unsigned long long)elementTypeByTagName:(id)arg1;
+ (id)elementsForDocumentElement:(id)arg1 sparse:(BOOL)arg2 styleFactory:(id *)arg3;
+ (void)initialize;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)elementForDOMElement:(id)arg1 parent:(id)arg2;

@end

