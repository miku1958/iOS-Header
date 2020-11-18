//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SXDelayed : NSObject
{
    BOOL _cancelled;
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;

+ (id)execute:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithBlock:(CDUnknownBlockType)arg1 delay:(double)arg2;
- (void)invoke;

@end
