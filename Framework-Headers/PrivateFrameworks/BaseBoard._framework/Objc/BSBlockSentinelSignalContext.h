//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSBlockSentinelSignalContext-Protocol.h>

@class NSString;

@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext>
{
    BOOL _complete;
    BOOL _failed;
    id _context;
}

@property (nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property (weak, nonatomic) id context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isFailed) BOOL failed; // @synthesize failed=_failed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)context;
+ (id)failureContext;
- (void).cxx_destruct;

@end

