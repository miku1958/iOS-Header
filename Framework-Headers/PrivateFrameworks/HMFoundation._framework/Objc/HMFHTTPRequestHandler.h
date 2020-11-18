//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate;

@interface HMFHTTPRequestHandler : NSObject
{
    NSPredicate *_methodPredicate;
    NSPredicate *_URLPredicate;
    CDUnknownBlockType _matchBlock;
    CDUnknownBlockType _requestBlock;
}

@property (readonly, copy, nonatomic) NSPredicate *URLPredicate; // @synthesize URLPredicate=_URLPredicate;
@property (readonly, copy, nonatomic) CDUnknownBlockType matchBlock; // @synthesize matchBlock=_matchBlock;
@property (readonly, copy, nonatomic) NSPredicate *methodPredicate; // @synthesize methodPredicate=_methodPredicate;
@property (copy, nonatomic) CDUnknownBlockType requestBlock; // @synthesize requestBlock=_requestBlock;

+ (BOOL)_isValidMethodPrediate:(id)arg1;
+ (BOOL)_isValidURLPredicate:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithMethodPredicate:(id)arg1 URLPredicate:(id)arg2 matchBlock:(CDUnknownBlockType)arg3;

@end

