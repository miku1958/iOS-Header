//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBUAutoFillDisplayData : NSObject
{
    NSString *_label;
    NSArray *_fillMatches;
}

@property (readonly, copy, nonatomic) NSArray *fillMatches; // @synthesize fillMatches=_fillMatches;
@property (strong, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) NSString *property;
@property (readonly, nonatomic) NSString *valueString;

- (void).cxx_destruct;
- (id)addressStringForLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 fillMatches:(id)arg2;

@end

