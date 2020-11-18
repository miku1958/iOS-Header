//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface EXOSExtensionEnumerator : NSEnumerator
{
    NSArray *_extensionPaths;
    NSEnumerator *_extensionPathsEnumerator;
}

@property (readonly) NSArray *extensionPaths; // @synthesize extensionPaths=_extensionPaths;
@property (readonly) NSEnumerator *extensionPathsEnumerator; // @synthesize extensionPathsEnumerator=_extensionPathsEnumerator;

+ (void)enumerateExtensionsInDirectoryAtURL:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)initWithCacheURLs:(id)arg1;
- (id)nextObject;

@end
