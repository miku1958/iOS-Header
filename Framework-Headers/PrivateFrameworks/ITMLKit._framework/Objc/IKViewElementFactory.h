//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElementRegistry, IKViewElementStyleFactory;

@interface IKViewElementFactory : NSObject
{
    struct {
        unsigned int sparse:1;
        unsigned int parsingUpdatedTree:1;
        unsigned int parsingReorderedSiblings:1;
        unsigned int parsingPartOfPrototype:1;
    } _parsingFlags;
    IKViewElementRegistry *_elementRegistry;
    IKViewElementStyleFactory *_styleFactory;
}

@property (nonatomic, getter=isSparse) BOOL sparse;
@property (strong, nonatomic) IKViewElementStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;

+ (Class)elementClassByTagName:(id)arg1;
+ (BOOL)elementsForDocumentElement:(id)arg1 context:(id)arg2;
+ (void)initialize;
+ (BOOL)isDependentByTagName:(id)arg1;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3;
+ (void)registerClass:(Class)arg1 forElementName:(id)arg2 elementType:(unsigned long long)arg3 dependent:(BOOL)arg4;
- (void).cxx_destruct;
- (Class)elementClassByTagName:(id)arg1;
- (id)elementForDOMElement:(id)arg1 parent:(id)arg2;
- (unsigned long long)elementTypeByTagName:(id)arg1;
- (id)initWithElementRegistry:(id)arg1;

@end

