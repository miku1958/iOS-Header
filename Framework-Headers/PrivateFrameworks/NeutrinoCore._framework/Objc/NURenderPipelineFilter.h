//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NUScript;

@interface NURenderPipelineFilter : NSObject
{
    NUScript *_script;
    CDUnknownBlockType _filterBlock;
}

@property (readonly, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property (readonly, nonatomic) NUScript *script; // @synthesize script=_script;

+ (id)stopAtTagFilter:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithScript:(id)arg1;
- (id)initWithScript:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

