//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EARTokenPronounciations : NSObject
{
    NSString *_token;
    NSArray *_pronunciations;
}

@property (copy, nonatomic) NSArray *pronunciations; // @synthesize pronunciations=_pronunciations;
@property (copy, nonatomic) NSString *token; // @synthesize token=_token;

- (void).cxx_destruct;
- (struct TokenProns)_quasarProns;
- (id)initWithToken:(id)arg1 pronunciations:(id)arg2;

@end

