//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSKSearch : NSObject
{
    BOOL _isComplete;
    NSString *_string;
    unsigned long long _options;
    CDUnknownBlockType _hitBlock;
}

@property (copy, nonatomic) CDUnknownBlockType hitBlock; // @synthesize hitBlock=_hitBlock;
@property (nonatomic) BOOL isComplete; // @synthesize isComplete=_isComplete;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (copy, nonatomic) NSString *string; // @synthesize string=_string;

- (void)dealloc;
- (id)initWithString:(id)arg1 options:(unsigned long long)arg2 hitBlock:(CDUnknownBlockType)arg3;

@end

