//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, PKPass;

@interface PKEditPendingCacheRequest : NSObject
{
    BOOL _fullPass;
    BOOL _stacked;
    NSString *_cacheKey;
    PKPass *_pass;
    long long _priority;
    NSArray *_completionHandlers;
    struct CGSize _imageSize;
}

@property (strong, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property (strong, nonatomic) NSArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (nonatomic) BOOL fullPass; // @synthesize fullPass=_fullPass;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (strong, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property (nonatomic) long long priority; // @synthesize priority=_priority;
@property (nonatomic) BOOL stacked; // @synthesize stacked=_stacked;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

