//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IKCSSDeclarationList, IKCSSMediaQuery, IKCSSSelectorList;

@interface IKCSSRule : NSObject
{
    IKCSSSelectorList *_selectorList;
    IKCSSDeclarationList *_declarationList;
}

@property (strong, nonatomic) IKCSSDeclarationList *declarationList; // @synthesize declarationList=_declarationList;
@property (readonly, nonatomic) IKCSSMediaQuery *mediaQuery;
@property (strong, nonatomic) IKCSSSelectorList *selectorList; // @synthesize selectorList=_selectorList;

- (void).cxx_destruct;
- (id)description;

@end

