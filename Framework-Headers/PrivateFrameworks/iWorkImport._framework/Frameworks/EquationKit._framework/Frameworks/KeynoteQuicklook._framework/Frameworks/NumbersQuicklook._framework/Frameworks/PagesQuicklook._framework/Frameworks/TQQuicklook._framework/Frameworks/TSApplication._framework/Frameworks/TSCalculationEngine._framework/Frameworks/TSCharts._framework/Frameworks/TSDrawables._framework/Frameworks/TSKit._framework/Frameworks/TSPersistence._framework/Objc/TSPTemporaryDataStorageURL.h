//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSURL.h>

@class TSUTemporaryDirectory;

@interface TSPTemporaryDataStorageURL : NSURL
{
    TSUTemporaryDirectory *_parentDirectory;
}

@property (readonly, nonatomic) TSUTemporaryDirectory *parentDirectory; // @synthesize parentDirectory=_parentDirectory;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initFileURLWithPath:(id)arg1 parentDirectory:(id)arg2;

@end

