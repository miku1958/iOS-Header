//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject
{
    long long _count;
    NSArray *_downloadKinds;
    SSDownloadManagerOptions *_managerOptions;
    id _queue;
}

@property (nonatomic) long long count; // @synthesize count=_count;
@property (copy, nonatomic) NSArray *downloadKinds; // @synthesize downloadKinds=_downloadKinds;
@property (copy, nonatomic) SSDownloadManagerOptions *managerOptions; // @synthesize managerOptions=_managerOptions;
@property (strong, nonatomic) id queue; // @synthesize queue=_queue;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;

@end
