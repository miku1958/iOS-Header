//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BRFileObjectID, NSArray, NSURL;

__attribute__((visibility("hidden")))
@interface BRQueryStitch : NSObject
{
    NSArray *_contexts;
    BRFileObjectID *_objid;
    BOOL _kind;
    NSURL *_fromURL;
    NSURL *_url;
}

@property (strong, nonatomic) NSArray *contexts; // @synthesize contexts=_contexts;
@property (strong, nonatomic) NSURL *fromURL; // @synthesize fromURL=_fromURL;

- (void).cxx_destruct;
- (void)_creationDone;
- (void)_deletionDone;
- (void)_enableUpdatesFromIPCAfterStitchingOnAllQueries;
- (void)_renameDone;
- (void)dealloc;
- (id)description;
- (void)done;
- (id)initWithURL:(id)arg1 objid:(id)arg2 kind:(BOOL)arg3;
- (void)setQueries:(id)arg1;

@end

