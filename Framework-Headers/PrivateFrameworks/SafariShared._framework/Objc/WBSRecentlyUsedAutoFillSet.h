//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WBSRecentlyUsedAutoFillSet : NSObject
{
    NSArray *_fillMatches;
    NSArray *_skipMatches;
    NSString *_label;
}

@property (readonly, copy, nonatomic) NSArray *fillMatches; // @synthesize fillMatches=_fillMatches;
@property (readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, copy, nonatomic) NSArray *skipMatches; // @synthesize skipMatches=_skipMatches;

- (void).cxx_destruct;
- (id)initWithFillMatches:(id)arg1 skipMatches:(id)arg2 label:(id)arg3;

@end

