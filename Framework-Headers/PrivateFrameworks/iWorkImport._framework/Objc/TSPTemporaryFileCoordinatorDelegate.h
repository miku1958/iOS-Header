//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPFileCoordinatorDelegate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSPTemporaryFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate>
{
    NSURL *_URL;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithURL:(id)arg1;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;

@end

