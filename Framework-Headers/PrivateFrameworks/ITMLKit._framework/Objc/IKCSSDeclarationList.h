//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface IKCSSDeclarationList : NSObject <NSCopying>
{
    NSMutableArray *_declarations;
    struct _NSRange _range;
}

@property (readonly, nonatomic) NSMutableArray *declarations; // @synthesize declarations=_declarations;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;

- (void).cxx_destruct;
- (void)addDeclaration:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)declarationAtIndex:(unsigned long long)arg1;
- (id)description;
- (id)firstDeclaration;
- (id)init;
- (id)lastDeclaration;

@end

