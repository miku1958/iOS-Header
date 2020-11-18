//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface CRKFilteredEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _filterBlock;
}

@property (readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
@property (readonly, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;

- (void).cxx_destruct;
- (id)initWithEnumerator:(id)arg1 filterBlock:(CDUnknownBlockType)arg2;
- (id)nextObject;
- (BOOL)shouldRejectItem:(id)arg1;

@end
