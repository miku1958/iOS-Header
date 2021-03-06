//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EKObject;

__attribute__((visibility("hidden")))
@interface EKObjectValidationContext : NSObject
{
    BOOL _reachedMaxDepth;
    EKObject *_rootObject;
    unsigned long long _depth;
}

@property (nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property (nonatomic) BOOL reachedMaxDepth; // @synthesize reachedMaxDepth=_reachedMaxDepth;
@property (readonly, nonatomic) EKObject *rootObject; // @synthesize rootObject=_rootObject;

- (void).cxx_destruct;
- (void)faultIfNeededForObject:(id)arg1;
- (id)initWithRootObject:(id)arg1;

@end

