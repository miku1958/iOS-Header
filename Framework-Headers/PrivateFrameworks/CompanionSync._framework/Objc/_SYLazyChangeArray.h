//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSArray.h>

@protocol SYChangeSerializer;

@interface _SYLazyChangeArray : NSArray
{
    NSArray *_source;
    NSArray *_types;
    id<SYChangeSerializer> _decoder;
    BOOL _isSYObjectDataArray;
    long long _compatibilityVersion;
}

@property (nonatomic) long long compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)initWithSYObjectDataArray:(id)arg1 typeArray:(id)arg2 decoder:(id)arg3;
- (id)initWithSourceArray:(id)arg1 decoder:(id)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;

@end

