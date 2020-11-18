//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MFSQLExpression : NSObject
{
    NSString *_expression;
}

@property (strong, nonatomic) NSString *expression; // @synthesize expression=_expression;

+ (id)expressionWithString:(id)arg1;
- (void).cxx_destruct;
- (id)SQLExpression;
- (id)beginsWithString:(id)arg1;
- (id)containsString:(id)arg1;
- (id)doesNotContainsString:(id)arg1;
- (id)endsWithString:(id)arg1;
- (id)equalToExpresion:(id)arg1;
- (id)equalToString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)like:(id)arg1;
- (id)like:(id)arg1 escapeCharacter:(unsigned short)arg2;
- (id)notLike:(id)arg1;
- (id)notLike:(id)arg1 escapeCharacter:(unsigned short)arg2;

@end

