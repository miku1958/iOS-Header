//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSTextCheckingResult.h>

@class NSString;

@interface ICSearchTextCheckingResult : NSTextCheckingResult
{
    NSString *_csEvaluatorMatchString;
    struct _NSRange _ic_range;
}

@property (strong, nonatomic) NSString *csEvaluatorMatchString; // @synthesize csEvaluatorMatchString=_csEvaluatorMatchString;
@property (nonatomic) struct _NSRange ic_range; // @synthesize ic_range=_ic_range;

- (void).cxx_destruct;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithRange:(struct _NSRange)arg1 csEvaluatorMatchString:(id)arg2;
- (struct _NSRange)range;

@end

