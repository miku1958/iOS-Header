//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSFileManager;

@interface CNFileManager : NSObject
{
    NSFileManager *_fileManager;
}

@property (readonly, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;

- (void).cxx_destruct;
- (id)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3;
- (id)init;
- (id)initWithFileManager:(id)arg1;

@end
