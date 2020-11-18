//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject
{
    GEOMapRequestManager *_requestManager;
    CDUnknownBlockType _completionHandler;
    BOOL _isFinished;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;

- (void)cancel;
- (void)complete;
- (void)dealloc;
- (id)initWithManager:(id)arg1;

@end

